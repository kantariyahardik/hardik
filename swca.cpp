#include<iostream>
 
    using namespace std;

int main()
{
    char n;
    float ans;
    int a,b;

    cout << "enetr the number";
    cin >> n;
    cout << "enter orant value";
    cin >> a;
    cin >> b;

    switch (n)
    {
    case '+':
    ans=a+b; 
    break;

    case '-':
    ans=a-b;
    break;

    case '*':
    ans=a*b;
    break;

    case '/':
    ans=a/b;
    break;

    case '%':
    ans=a%b;
    break;
    }
    {
        cout << ans;
    }
}    
    