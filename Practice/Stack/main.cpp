#include <iostream>
#include<string.h>

#include "InfixToPostFix.h"
using namespace std;

int main() {
    string expression1 = "A^B*C-D+E/F/(G+H)";
    InfixToPostFix* ip = new InfixToPostFix(expression1);
    ip->infixToPostFix();
    cout<<"The postfix expression is: "<<endl;
    cout<< ip->getResult();


    return 0;
    
}
