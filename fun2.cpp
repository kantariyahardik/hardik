#include<iostream>
   int greet();
   using namespace std;

int greet()
{
    cout << "hello world";
}
int main()
{
    int a=5,b;
    b=a+5;

    cout << a <<" "<< b <<" ";
    greet();
    
}