#include <iostream>
#include <ostream>
#include <stack>
#include <string>
using namespace std;

class InfixToPostFix {
public:
    stack<char> s; // stack namer variable use korle c++ er 'stack' keyword er sathe conflict hote pare, tai 's' use korlam
    string result;
    string expression;
    
    InfixToPostFix(string expression) {
        this->expression = expression;
        cout << "Expression: " << expression << endl;
    }
    
    string getResult() {
        return result;
    }
    
    int precedence(char op) {
        if (op == '^') {
            return 3;
        }
        else if (op == '*' || op == '/') {
            return 2;
        }
        else if (op == '+' || op == '-') {
            return 1;
        }
        else {
            return 0;
        }
    }
    
    void printStack(stack<char> tempStack) {
        while (!tempStack.empty()) {
            cout << tempStack.top();
            tempStack.pop();
        }
    }
    
    void infixToPostFixConversion() {
        cout << "Scanned\tResult\t\tStack" << endl;
        for (int i = 0; i < expression.length(); i++) {
            char ch = expression[i];
            cout << ch << "\t";
            
            // 1. If scanned symbol is '(', push it
            if (ch == '(') {
                s.push(ch);
            }
            // 2. If scanned symbol is operand, add to result
            else if (isalnum(ch)) {
                result += ch;
            }
            // 3. If scanned symbol is ')', pop until '('
            else if (ch == ')') {
                while (!s.empty() && s.top() != '(') {
                    result += s.top();
                    s.pop();
                }
                if (!s.empty() && s.top() == '(') {
                    s.pop(); // pop '('
                }
            }
            // 4. If operator
            else {
                while (!s.empty() && s.top() != '(' && precedence(ch) <= precedence(s.top())) {
                    result += s.top();
                    s.pop();
                }
                s.push(ch);
            }
            
            cout << result << "\t\t";
            printStack(s);
            cout << endl;
        }
        
        // Pop remaining operators
        while (!s.empty()) {
            result += s.top();
            s.pop();
        }
    }
};

int main() {
    InfixToPostFix converter("A^B*C-D+E/F/(G+H)");
    converter.infixToPostFixConversion();
    cout << "\nFinal Postfix Expression: " << converter.getResult() << endl;
    return 0;
}