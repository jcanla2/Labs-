
// Programmer:  John Michael Canlas
// Section:     4
// Program:     Lab 10
// Date:        March 16, 2016
// Description: Program sorts X Values into ascending order.
// Algorithm:   Bubble Sort


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double x[5];                 // test data array - given.
    double y[5];                 // test data array parallel to x - given.
    double tempx;                // temporary place holder when sorting x value.
    double tempy;                // temporary place holder when sorting y value.
    
    x[0] = 33.35;                // initialize test data arrays
    y[0] = 1;
    x[1] = 26;
    y[1] = 3.2;
    x[2] = 20.1;
    y[2] = 2.1;
    x[3] = 28.123;
    y[3] = 4.3;
    x[4] = 12;
    y[4] = 5.4;
    
    cout << "Before Sorting" << endl;          // Output Before Sorting.
    cout << setw(10) << "x" << " " << setw(10)
         << "y" << endl;                       // to make values right aligned.
    cout << endl;
    
    for ( int i = 0; i < 5; i++ )              // loop to output array values.
    {
        cout << setw(10) << x[i] << " "
             << setw(10) << y[i] << endl;
    }
    
    cout << endl;
    
    cout << "After Sorting" << endl;
    cout << setw(10) << "x" << " " << setw(10) << "y" << endl;
    cout << endl;
    
    
    
    for(int i=0; i<5; i++)                // loop for output once done sorting.
    {
        for(int j=i+1; j<5; j++)          // loop for bubble sort.
        {
            if(x[i]>x[j])                 // check if current array is greater value.
            {
                tempx=x[i];               // set current array to temporary.
                x[i]=x[j];                // set next array to current array value.
                x[j]=tempx;               // set temporary value to next array value.
                
                tempy=y[i];               // same thing is done so Y values can
                y[i]=y[j];                // follow the corresponding X value
                y[j]=tempy;
                
            }
        }
        cout.setf(ios::showpoint);               //Forces Decimal Points.
        cout << setw(10) << setprecision(3)      //Precision for Sig Figs.
             << x[i] << " " << setw(10)          //Output After Sorting
             << setprecision(2) << y[i] << endl;
    }
    
}
