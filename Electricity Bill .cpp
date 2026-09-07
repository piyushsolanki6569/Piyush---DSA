#include <iostream>
# include <string>
using namespace std;

int calculateunits(int previous, int current)

{

    int units;

    units = current - previous;

    return units;

}

float calculatebill(int units)

{

    float bill;

    if (units <= 100)

    {

        bill = units * 2;
    }
    else if (units > 100 && units <= 200)
    {
        bill = (100 * 2) + ((units - 100) * 3);
    }

    else if (units > 200 && units <= 300)
    {
        bill = (100 * 2) + (100 * 3) + ((units - 200) * 5);
    }
    return bill; 
}

void displaybill(int units, float bill)
{
    cout << "\n The units consumed are: " << units << endl;
    cout << "\n The total bill is: " << bill << endl;
}
int main()

{
    int previous, current, units;
    cout << "Enter the previous reading: ";
    cin >> previous;

    cout << " Enter the current reading: ";
    cin >> current;

    units = calculateunits(previous, current);
    
    float bill = calculatebill(units);

    displaybill(units, bill);
}
