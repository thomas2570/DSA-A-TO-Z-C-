#include <iostream>
using namespace std;
/*Take the age from user and then decide accordingly
1. If age<18
    print "you are not eligible for job"
    2. if age>=18 and age<54,
    print "you are eligible for job"
    3. if age>=55 and age<=57,
    print "you are eligible for job but retirement soon"
    4. if age>57
    print "retirement time"
*/
int main()
{
    int age;
    cin >> age;
    if (age < 18)
    {
        cout << "You are not eligible for job";
    }
    else if (age <= 57)
    {
        cout << "You are eligible for job";
        // its called nested if else statement
        if(age >= 55)
        {
            cout << " but retirement soon";
        }
    }
    else
    {
        cout << "Retirement time";
    }
    return 0;
}