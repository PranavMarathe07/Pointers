#include<iostream>
using namespace std;

int main()
{
    // int arr[10] = {1, 2, 3,4 ,5 ,6 ,7 ,8 ,9, 10};

    // cout <<"value of : " << arr[0] + arr[1] << endl;

    // cout <<"value is : " << arr[1] + arr[4] * arr[0] << endl;           //here can have * have first preference nad then it can perform the + Operation

    // //Here it will print the value of the 0th index
    // cout <<"4th value : " << *arr << endl;

    // cout <<"5th : " << *arr + 1 << endl;

    // //it eill gives us the 0th index + 1 it will print 1st index value
    // cout <<"6th : " << *(arr + 1) << endl;

    // //it will print 0th index + 1
    // cout <<"7 th : " << (*arr) + 1 << endl;

    // //we have gave index at the out of bracket and arr name in the bracket it will also give the output
    // //i[arr] = *(i + arr)
    // int i = 4;
    // cout <<"8th value : " << i[arr] << endl;

    /*
    int temp[10];
    cout <<"size of array is : " << sizeof(temp) << endl;

    int *ptr = &temp[0];
    cout <<"size of pointer is : " << sizeof(ptr) << endl;
    cout <<"size of pointer is : " << sizeof(*ptr) << endl;
    cout <<"size of pointer is : " << sizeof(&ptr) << endl;
    */

/*
   //Second Difference
   int arr[20] = {12, 78, 90, 67};
   cout <<" -> " << &arr[0] << endl;
   cout << &arr << endl;
   cout << arr << endl;

   int *p = &arr[0];
   cout << p << endl;
   cout << *p << endl;
   cout <<" -> " << &p << endl;
*/

    //Third Difference
    int a[10] = {23, 67, 90};
    cout << a[4] << endl;
    cout << a[3] << endl;

    //It will gives us an error because it can have not changed the symbol table value
    //ERROR
    // a = a + 1;

    int *p = &a[0];
    cout << *p << endl;

    cout << &p << endl;

    //It will not changed the address of pointer it will have changed the value of arr in the block
    p = p +1;
    cout << &p << endl;
    cout << *p << endl;






    return 0;
}