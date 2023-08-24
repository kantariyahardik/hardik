#include<iostream>
   int sum();
    using namespace std;

int sum()
{
    int sum=0,b,n;
    cin >> n;

    for(b=0;b<=n;b++)
    {
        sum=sum+b;
    }
    cout << sum;
}
int main()
{
    sum();
}