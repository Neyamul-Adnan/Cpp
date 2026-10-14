#include <iostream>
#include <ostream>
#include <stack>
#include <string>
using namespace std;

class InfixToPostFix
{
public:
    stack<char> stack;
    string result;
    string expression;
    InfixToPostFix(string expression)
    {
        this->expression = expression;
        this->result = "";
        cout << expression << endl;
    }
    string getResult()
    {
        return result;
    }
    int precedence(char op)
    {
        if (op == '^')
        {
            return 3;
        }
        else if (op == '*' || op == '/')
        {
            return 2;
        }
        else if (op == '+' || op == '-')
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    void printStack()
    {
        while (!stack.empty())
        {
            cout << stack.top();
            stack.pop();
        }
    }
    void infixToPostFix()
    {
        // scan from left to right
        cout << "Scanned" << "\t" << "Result" << "\t" << "Stack" << endl;
        for (int i = 0; i < expression.length(); i++)
        {
            char ch = expression[i];
            cout << ch << "\t";
            // if the scanned symbol is (, then push it onto the stack
            if (ch == '(')
            {
                stack.push(ch);
            }
            // if the scanned symbol is operand, then add it to the output/result
            else if (isalnum(ch))
            {
                result += ch;
            }
            // if the scanned symbol is ), then go on poping all the operators and add it
            // to the result until a ( is encountered. Also pop out ( from the stack
            else if (ch == ')')
            {
                while (stack.top() != '(')
                {

                    result += stack.top();
                    cout << result;
                    stack.pop();
                }
                stack.pop();
            }
            else
            {
                // if the scanned symbol is operator, then first check the stack top.
                // if the stack top is ( or stack is empty
                if (stack.empty() || stack.top() == '(')
                {
                    stack.push(ch);
                }
                // if the precedence of scanned symbol is greater that the precedence of
                // stack top operator, then push the scanned operator onto the stack
                else if (precedence(ch) > precedence(stack.top()))
                {
                    stack.push(ch);
                }
                else
                {
                    // if the scanned symbol precedence is less than of equal to
                    // the stack top precedence, then go on poping all the operators and
                    // add them to the result. After that push the new operator to the
                    // stack
                    while (precedence(ch) <= precedence(stack.top()) || !stack.empty())
                    {
                        result += stack.top();
                        stack.pop();
                    }

                    stack.push(ch); // push the new operator to the stack
                }
            }
            cout << result << "\t";
            printStack();
            cout << endl;
        }
        // end of string . do the following after the for loop
        while (!stack.empty())
        {
            result += stack.top();
            stack.pop();
        }
    }
};
