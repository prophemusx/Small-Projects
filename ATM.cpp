#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int add_acc;
	int main_acc,y,i,ii;
	cout << "How much money would you like to have in your Main Account 		: " ;
	cin  >> main_acc;	
	cout << "How much money would you like to have in your Additional Account   : " ;	
	cin  >> add_acc;
	int add_max = add_acc;		
	do {
		cout << "If you would like to withdraw money please press '1', if you would like to deposit money please press '2'. to exit, please press '0'. " << endl;
		cin >> i;
		if (i == 1 ){
			cout << "How much money would you like to withdraw ? ";
			cin  >> y;
			if (y > main_acc + add_acc ){
				cout << "You don't have enough money ." << endl;
			}
			else{
				if (y > main_acc){
				
					cout << "You don't have enough money in your Main Account. Would you like to withdraw in your Additional Account ? " << endl << "To withdraw from your Additional Account please press '1', to cancel please press '2'. " << endl;
					cin  >> ii;
					if (ii == 1 &&  y <= add_acc + main_acc){
						main_acc = (main_acc + add_acc) - y;	
						cout << "Withdrawn money : " << y << endl;
						cout << "Remaining money : " << main_acc << endl;
						add_acc = add_acc - y;
					}
					else if ( ii == 2){
						cout << "It has been cancelled." << endl;
					}
					else if (ii == 1 && y > add_acc + main_acc){
						cout << "There is no enough money in your accounts." << endl;
					}
					else{
						cout << "Please try again. " << endl;
					}
				}
				else{	
					main_acc = main_acc - y;	
					cout << "Withdrawn money : " << y << endl;
					cout << "Remaining money : " << main_acc << endl;				
				}
			}			
		}
		else if (i == 2 )
		{
			cout << "How much money would you like to deposit ? ";
			cin  >> y;
			add_acc += y;
			cout << "amount of invested money : " << y << endl;
			if (add_acc>add_max)
			{
				main_acc+= abs(add_acc - add_max);
				cout << "Main Account		: " << main_acc	<< endl;
				add_acc = add_max;
				cout << "Additional Account : " << add_max  << endl;
			}
			else if (add_acc == add_max)
			{
				main_acc+=y;
				cout << "Main Account		: " << main_acc	<< endl;
				cout << "Additional Account : " << add_acc  << endl;
			}
			else 
			{	
				abs(add_acc);
				cout << "Main Account		: " << main_acc	<< endl;
				cout << "Additional Account : " << add_acc  << endl;
			}
		}
		else{
			cout << "Please try again." << endl;
		}
	}
	while (i != 0);
	{
		cout << "Main Account		: " << main_acc	<< endl;
		cout << "Additional Account : " << add_acc  << endl;
	}	
	system ("Pause");
	return 0;
}
