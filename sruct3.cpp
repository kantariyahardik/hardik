#include <iostream>

using namespace std;

struct book
{
    int writters;
    int  price ;
    int idno ;
};
int main()
{
    struct book book1;
    book1.writters=3;
    book1.price=100;
    book1.idno=5;

   cout << book1.writters <<"\n"<<book1.price <<"\n"<<book1.idno;
}