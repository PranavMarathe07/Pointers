#include<iostream>
using namespace std;

int main()
{
    int a = 20;
    int *p = &a;
    int **q = &p;        //** indicating the double pointer in the list

    cout << a << endl;
    cout << p << endl;
    cout << q << endl;

    cout << *p << endl;
    cout << **q << endl;


    return 0;
}