#include<iostream>
 
  using namespace std;

int main()
{
    int a=1,x,y=1;

    do{
        a=1;
        x=1;
        do{
            cout << a++;
            x++;
        }while(x<=5);
        cout << "\n";
        y++;
    }while(y<=5);
}