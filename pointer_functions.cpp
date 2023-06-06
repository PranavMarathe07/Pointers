#include<iostream>
using namespace std;

void print(int *ptr)
{
    cout << *ptr << endl;
}

void update(int *ptr)
{
    // ptr = ptr + 1;
    // cout << ptr << endl;

    *ptr = *ptr + 1;
    cout << *ptr << endl;
}

int main()
{
    int value = 90;
    int *ptr = &value;

    print(ptr);

    cout << ptr << endl;
    update(ptr);


    return 0;
}