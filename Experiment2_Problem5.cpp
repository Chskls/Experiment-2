#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
int n = 22, n1 = 0, n2 = 1, nTerm = 0;


 cout << "Fibonacci Series:\n";

    for (int x = 1; x <= n; ++x)
    {
    
        if(x == 1)
        { cout << " " << n1 << " , "; continue; }
        
		
		if(x == 2)
        { cout << n2 <<" , ";continue; }
       
       
       
	    nTerm = n1 + n2;
        n1 = n2;
        n2 = nTerm;
        
        
        
        if (nTerm==10946)
        {	cout << nTerm << " ";
			break;} 
		
		else
		{	cout << nTerm << " , ";	}
		
	}
	getch();
	return 0;
}

