#include <iostream>

using namespace std;

int main ()
{
    int i=10;
    sky:

    if(i<=50)
    {
        cout << i << " ";
        i++;
        goto sky;
    }
}