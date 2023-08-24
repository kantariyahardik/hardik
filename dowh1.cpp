#include<iostream>

  using namespace std;

int main()
{
    int b=1,c,a=1;

    do{
        c=1;
        do{
            cout << a++;
            c++;
        }while(c<=5);
        cout << "\n";
        b++;
    }while(b<=5);
}