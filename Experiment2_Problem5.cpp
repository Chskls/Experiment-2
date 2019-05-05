#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main()
{
    int n, x = 0, y = 1, nTerm = 0;


    cout << "Fibonacci Numbers: \n ";

    for (int i = 1; i <= 22; ++i)
    {
       
        if(i == 1)
        {  cout << "  " << x<< " ,"; continue; }
        if(i == 2)
        { cout <<  y << ", ";continue;}
       
	    nTerm = x + y;
    	x = y;
        y = nTerm;
        
        cout << nTerm << ", ";
    }
    getch();
    return 0;
}
