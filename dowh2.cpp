#include<iostream>

  using namespace std;

int main()
{
    char a=1, b,c;

    do{
        b=1;
        c=65;
        do{
            cout <<" " << c++;
            b++;
        }while(b<=a);
        cout << "\n";
        a++;
        c++;
    }while(a<=5);
}