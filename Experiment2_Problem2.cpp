#include <iostream>
#include <conio.h>

using namespace std;
int main ()
{
	int a;
	int b;
	
	cout << "If you already pay your bill last month enter 0, if not enter your consumption reading last month: ";cin >> a;
	cout << "Enter your consumption reading this month: ";cin >> b;
	
if (a<=0)
cout <<"You don't have unpaid consumption last month, and a consumption reading of "<< b << " gallons this month. Your total water bill cost P"<<35+(1.10*b) << ".\n";

if (a>0)
cout <<"You have an unpaid consumption reading of " << a << " gallons last month,and a consumption reading  of " << b << " gallons this month. Your total water bill cost P"<<35+(1.10*b)+(1.10*a)+20 << ".\n";
 
 
getch();
return 0;

}
