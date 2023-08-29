#include<iostream>
#include<string.h>
  
    using namespace std;
    class batsman
    {
        int bcode, inning, notout, runs, batavg;
        string bname;

        void calcavg()
        {
            batavg = runs / (inning - notout);
        }
        public:

        void readdata()
        {
            cout << "enter batsman code :";
            cin >> bcode;
            cout << "enter played inning :";
            cin >> inning;
            cout << "enter not out inning :";
            cin >> notout;
            cout << "enter batsman run :";
            cin >> runs;
            
            calcavg();
        }
        void displaydata()
        {
            cout << "batsman code :" << bcode << endl;
            cout << "batsman name :" << inning << endl;
            cout << "not out inning :" << notout << endl;
            cout << "batsman run :" << runs << endl;
            cout << "average :" << batavg << endl;
        }
    };
    int main()
    { 
        batsman b;
        b.readdata();
        b.displaydata();
    }