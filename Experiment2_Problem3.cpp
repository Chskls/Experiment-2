#include <iostream>
#include <conio.h>
#include<math.h >
#include <cmath>

using namespace std;
int main ()
{
	int x;
	int y;
    double z=2.5;
	
		cout << "Enter the value of x:";cin >> x;
		cout << "Enter the value of y:";cin >> y;
		
	
	switch (x)
{
	case'1':
	if(1<y<5)
	cout <<"The value of V is "<<  (x*y*z) <<" .\n"  ;
	
	if (y>=5)
	cout <<"The value of V is "<<  (abs(x+(y/z))<<" .\n"  ;
	
	break;
	
	case'2':
	if (y<=5)
	cout <<"The value of V is "<<  ((x-y)/z) <<" .\n"  ;
	
	if (y>5)
	cout <<"The value of V is "<<  (x-sqrt(y+z)) <<" .\n"  ;
	break;
	
default:
cout <<"The value of V is "<<  (x+y+z) <<" .\n"  ;

}

		
getch();
return 0;

}
