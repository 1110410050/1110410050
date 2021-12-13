#include<iostream>
using namespace std;

int main()
{
    int sum;
    int x;

    x = 1;
    sum = 0;

    while (x < 51)
    {
        sum += x;
        x++;
    }

    cout << "The sum is: " << sum << endl;

    return 0;
}