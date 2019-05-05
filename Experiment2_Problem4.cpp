#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
  	int counter;
  	int n; 
  	counter=1;
  	
  	
  		
  		for (n=1; n<=10; n++)
  			{cout << n << " , ";counter ++;	}
		
		for (counter=12; counter <=30; )
			{if (counter==30)
  		{cout << counter << " ";
		break;
		}
	
		else
		{cout << counter << " , ";	counter +=2;}
		
		
		
}
  		
		getch ();
		return 0;  		
	}
