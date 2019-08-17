#include <iostream>

using namespace std;

int main()
{
    int lesson_number, number_of_pairs, the_remainder, intermediate_minutes, minutes, hours;
    cin>> lesson_number;
    number_of_pairs = (lesson_number - 1) / 2;
    the_remainder = (lesson_number - 1) % 2;
    intermediate_minutes = lesson_number * 45 + number_of_pairs * 20 + the_remainder * 5;
    minutes = intermediate_minutes % 60;
    hours = intermediate_minutes / 60 + 9;
    cout<< hours << " " << minutes;
    return 0;
}
