#include <iostream>
#include <string>
using namespace std;

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int fibo(int index)
{
    if (index == 0)
    {
        return 0;
    }
    else if (index == 1)
    {
        return 1;
    }
    else
    {
        return fibo(index - 1) + fibo(index - 2);
    }
}

void printNum(int n)
{
    if (n > 0)
    {
        cout << n << " ";
        printNum(n - 1);
    }
}

void printJava(int n)
{
    if (n > 0)
    {
        cout << "Java ";
        printJava(n - 1);
    }
}

bool palindrome(string word)
{
    if (word.length() <= 1)
    {
        return true;
    }
    if (word[0] != word[word.length() - 1])
    {
        return false;
    }

    return palindrome(word.substr(1, word.length() - 2));
}
