//10955186
//Write a program that produces the average of all even numbers less than a given number(1000)

#include <iostream>

using namespace std;

int main()
{
    int number = 2;
    int sum = 0;
    int average;
    while(number < 1000)
    {
        sum += number;
        number += 2;
    }
    average = sum / (1000 / 2);
    cout << average << endl;
    return 0;
}
