#include<iostream>
   using namespace std;

   class flight
   {
    private :
    int flightno;
    char destination[30];
    float distance, fuel;

    void calfuel()
    {
        if(distance<=1000)
        {
            fuel=500;
        }
        else
        if(distance > 1000 && distance <= 2000)
        {
            fuel = 2200;
        }    
   }
   public :

   void feedinfo()
   {
    cout << "enter the flight no :";
    cin >> flightno;
    cout << "enter the destination :";
    cin >> destination;
    cout << "enter distance :";
    cin >> distance;

    calfuel();
   }
   
   void showinfo()
   {
    cout << "flight no :" << flightno << endl;
    cout << "destinaton :" << destination << endl;
    cout << "total distance :" << distance << "km" << endl;
    cout << "fuel :" << fuel << "littre" << endl;
   }
};
int main()
{
    flight f;
    f.feedinfo();
    f.showinfo();
}
