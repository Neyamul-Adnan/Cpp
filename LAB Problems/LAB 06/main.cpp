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

   cout<<"Reverse Number: ";
   printNum(100);

   cout<<"Print Java: ";
   printJava(100);

   string word;
   cout<<"Enter a Word: ";
   cin>>word;

   if(palindrome(word)){
    cout<<"This word is Palindrome";
   }
   else{
    cout<<"This word is not Palindrome";
   }

   return 0;

}