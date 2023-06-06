#include<iostream>
using namespace std;

int main()
{
    //pointer to int is created, and pointing to some garbage address
    //int *p = 0;

    //cout<< *p << endl;

/*
    int i = 5;
    //int *p = &i;
    int *q = &i;
    cout << q << endl;
    cout << *q << endl;

    
    int *p = 0;
    p = &i;

    cout << p << endl;
    cout << *p << endl;
*/
  
    int num = 5;
    int a = num;
    a++;

    cout << num << endl;
    cout << a << endl;

    int *p = &num;
    cout <<" before " << num << endl;
    (*p)++;
    cout <<" after " << num << endl;

    //copy the pointer (means both p and q pointer are point or give the address of num)
    //pointer p have give the address of num, and q have give the address of p then it have point the address of num
    int *q = p;
    cout << p <<" _ " << q << endl;
    cout << *p <<" _ " << *q << endl;

    //imporatant concept
    int i = 7;
    int *t = &i;
    //cout << (*t)++ << endl;       //please insert the bracket because we write the quality code

    *t = *t +1;                 //Same meaning of *t++
    cout << *t << endl;
    cout << " before t " << t << endl;
    t = t + 1;
    cout << " after " << t << endl;

    return 0;
}