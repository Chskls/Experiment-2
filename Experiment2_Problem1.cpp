#include <iostream>
#include <conio.h>

using namespace std;
int main ()
{
	int b;
	char a;
	cout << "Enter your subscription package:";cin >> a;
			
		
switch (a)
{
	case'A':
	cout << "You are subscribed to Package A! How many hours did you consume?:"; cin >> b;
	 

	if(b <=10)
		cout <<"Congratulations, you did not reach the limit of hours you can access. Your total bill for this month cost P995.\n";

		
	if(b>10)
	
		cout <<"You consumed beyond the limit of hours you can access.Your total bill for this month cost P" << 995+(b-10)*20 << ".\n";

	break;
	
	



	case 'B':
	cout <<"You are subscibed to Package B! How many hours did you consume?:"; cin >> b;
		if(b <=20)
		cout <<"Congratulations, you did not reach the limit of hours you can access. Your total bill for this month cost P1495.\n";

		
	if(b>20)
	
		cout <<"You consumed beyond the limit of hours you can access.Your total bill for this month cost P" << 1495+(b-20)*10 << ".\n";
	break ;
	

		
		 
	case 'C':
		cout << "You are subscribed to Package C! Your total bill for this month cost P1995.\n";
	break ;


default:
cout <<"You must enter a letter between A and C. \n";

}

		
getch();
return 0;

}


