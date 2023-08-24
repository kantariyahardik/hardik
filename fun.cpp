#include<iostream>
    int press();
     using namespace std;
    
int press()
{
   int num, revars=0,rem;

   cout << "enetr int";
   cin >> num;

   while(num!=0)
   {
    rem=num%10;
    revars=revars*10+rem;
    num=num/10;
   }
   cout << revars;
}
int main()
{
    press();
}