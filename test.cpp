#include<iostream>

    using namespace std;
    class test
    {
        int testcode, nocandidata, centerreqd;
        char description[30];

        int calcent()
        {
           return (nocandidata / 100+1);
        }
        public:
         
         void schedual()
         {
            cout << "enter test code :";
            cin >> testcode;
            cout << "descripation :";
            cout << "no.of.candidata :";
            cin >> nocandidata;

            centerreqd = calcent();
         }
         void disptest()
         {
            cout << "test code  is :" << testcode << endl;
            cout << "description :" << description << endl;
            cout << "all candidata :" << nocandidata << endl;
            cout << "center required :" << centerreqd << endl;
         }
    };
    int main()
    {
        test a;
        a.schedual();
        a.disptest();
    }