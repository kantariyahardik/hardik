#include<iostream>
   using namespace std;
int main()
{
    int i;
    double number, sum = 0.0;

    for(i=1;i<=5;i++)
    {
        cout << i << "enter the number :";
        cin >> number;
        
        if(number < 0.0)
        {
            sum += number;
        }
        cout << "total sum :" << sum;
    }

}