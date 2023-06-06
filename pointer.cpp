#include<iostream>
using namespace std;

int main()
{
    int num = 5;
    cout << num << endl;

    //Address of operator -&

    cout <<" address of num is "<< &num << endl;
    //ouput = address of num is 0x61ff0c (is in the hexadecimal format[0 to 9 abcdef])

    int *ptr = &num;
    
    cout << "Address is : " << ptr << endl;
    cout << "value is : " << *ptr << endl;

    double d = 4.5;
    double *p2 = &d;

    cout << "Address is : " << p2 << endl;
    cout << "value is : " << *p2 << endl;

    cout << " size of integer is " << sizeof(num) << endl;
    cout << " size of pointer is " << sizeof(ptr) << endl;
    cout << " size of pointer is " << sizeof(p2) << endl;


//Here We can assign one float and their pointer 
    float f1 = 8.97;
    float *f4 = &f1;

    cout <<"Size of f1 is : " << sizeof(f1) << endl;
    cout <<"Size of *f4 is : " << sizeof(*f4) << endl;

    cout <<"Address of f1 is : " << &f1 << endl;
    cout <<"Address of *f4 is : " << &*f4;

    cout << endl << endl;
    cout <<"Value of *f4 is : " << *f4;

    cout << (*ptr)++;



    return 0;
}