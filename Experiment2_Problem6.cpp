#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;
	 	
	 	
int main()
 
{
	 int n, sum = 0;
  	
    do{
	 
     cout<<"Enter a number: "; cin>>n;
	if(n<=0){	cout<<"Thankyou!";
	break;}
   
   
     sum = n*(n+1)/2;
     cout<<"The sum of all whole number from 1 to "<< n << " is "<< sum << "\n";
   
    }while (n != 0);
    getch();
    return 0;
}
