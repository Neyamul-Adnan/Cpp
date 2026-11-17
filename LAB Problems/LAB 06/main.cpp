#include<iostream>
#include<string>
#include"Recursion.h"
using namespace std;

int main(){

   cout<<"Enter a number: ";
   int num;
   cin>>num;
   cout<<"The factorial of "<<num<<" is "<<factorial(num)<<endl;

   cout<<"The fibonacci of "<<num<<" is "<<fibo(num)<<endl;

   string word;
   cout<<"Enter a Word: ";
   cin>>word;

   if(palindrome(word)){
    cout<<"This word is Palindrome";
   }
   else{
    cout<<"This word is not Palindrome";
   }

   cout<<"Numbers 1 to 100 in reverse order: "<<endl;
   printNum(100);

   cout<<"Print Java 100 times: "<<endl;
   printJava(100);

   

   return 0;

}