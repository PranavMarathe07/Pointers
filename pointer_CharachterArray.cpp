#include<iostream>
using namespace std;

int main()
{
    int arr[10] = {1, 90, 78, 67};
    char ch[7] = "pranav";                    //one extra size for stored null character for string ending

    cout << arr << endl;
    //in this statement it not have print address it can display whole string
    cout << ch << endl;

    char *p = &ch[0];
    //in this case it can display whole string not an adress
    cout << p << endl;

    char brr[6] = "abcde";
    char *c = "abcde";

    cout << *c << endl;


    return 0;
}