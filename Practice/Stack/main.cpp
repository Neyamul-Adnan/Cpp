#include <iostream>
#include<string.h>

#include "InfixToPostFix.h"
using namespace std;// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.

int main() {
    string expression1 = "A^B*C-D+E/F/(G+H)";
    InfixToPostFix* ip = new InfixToPostFix(expression1);
    ip->infixToPostFix();
    cout<<"The postfix expression is: "<<endl;
    cout<< ip->getResult();


    return 0;
    
}
