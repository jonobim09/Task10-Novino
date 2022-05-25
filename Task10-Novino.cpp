/******************************************************************************

Programmed by: Jolly Noovino
Date Accomplished: May 25, 2022

*******************************************************************************/
#include <iostream>
#include <iomanip>
#include <cctype>

using namespace std;

void ShowWelcome();
void ComputeRectangle (double length, double width);


int main()
{
    //call ShowMessage
    ShowWelcome();
    
    double length, width;
    char ch ='\n';
    do
    {
        cout << "Enter length and the width of the rectangle: ";
        cin >> length >> width;
        
        //Call ComputeRectangle
        ComputeRectangle(length, width);
        
        cout << "Try another [Y/N]? : ";
        
        cin >> ch;
        cin.ignore();
        ch = toupper(ch);
        
        while (ch != 'N' && ch != 'Y')
        {
            cout << "Invalid choice!" << endl;
            cout <<"Please input either 'Y' or 'N' to continue: ";
            
            cin >> ch;
            cin.ignore();
            ch = toupper(ch);
            cout << endl;
        }
        cout << endl;
    }while (ch != 'N');
    cout << "Thank You!";
    return 0;
}


void ShowWelcome()
{
    cout << "============================================================" <<endl;
    cout << "This program demonstrates how to implement C++ void function" <<endl;
    cout << "============================================================" <<endl;
    
}

void ComputeRectangle(double length, double width)
{
    //local variables
    double area, perimeter;
    //Calculate values for area and perimeter
    area = length*width;
    perimeter = 2 * (length + width);
    
    //Display results
    cout << fixed << setprecision(2);
    cout << "Computed Area: " << area << endl;
    cout << "Computed Perimeter: " <<perimeter <<endl;
}