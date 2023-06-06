#include<iostream>
using namespace std;

int main()
{
    // int a = 7;
    // int *c = &a;

    // c = c + 1;
    // cout << a <<"  " << *c << endl;


    // //second problem
    // int a = 7;
    // int *c = &a;

    // c = c + 3;
    // cout << c << endl;


    //third problem
    // double a = 89;

    // cout << sizeof(a) << endl;

    // double *ptr = &a;
    // cout <<"Address of : " << &a << endl;
    // cout <<"Address of : " << ptr << endl;

    // cout <<"Size of pointer : " << sizeof(ptr) << endl;

    // ptr = ptr + 1;
    // cout << sizeof(ptr) << endl;
    // cout << ptr << endl;


    //fourth problem
    // int arr[] = {4, 5, 6, 7};
    // int *p = (arr + 1);
    // cout << *arr + 9;

    // cout << *p << endl;


    //fifth
    // char b[] = "xyz";
    // char *c = &b[0];
    // cout << c << endl;

    
    //sixth
    // char s[] = "hello";
    // char *p = s;
    // cout << s[0] <<"  " << p[3];


    //seventh
    // char arr[20];
    // int i;

    // for(i=0; i<10; i++)
    // {
    //     *(arr+i) = 65 + i;
    // }
    // *(arr+i) = '\0';
    // cout << arr;


    //Eight
    int ***r, **q, *p, i=8;
    p = &i;
    (*p)++;

    cout << p << endl;
    cout << *p << endl;

    q = &p;
    cout <<"->" << *q << endl;
    cout <<"->" << p << endl;
    (**q)++;
    cout <<"value of *P : " << *p << endl;

    cout << q << endl;
    cout << **q << endl;
    cout << *q << endl;

    r = &q;
    cout << *p <<"   " << **q <<"    " << ***r;



    return 0;
}