// Omar Mehmood Rock Paper Scissors Assignment
// January 19, 2021
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	
	char input;
	cout<< "Welcome to rock paper scissors! Here are the rules!\n\n";
	cout << "\tRules\n===========================\n";
	cout << "Rock wins against scissors.\nScissor wins against paper.\nPaper wins against rock.\n\n";
	cout << "Please type [c]ontinue to start: ";
	input = 'c';
	cin >> input;

	if ('c'!= input) cout << "Invalid! Please re-run the program and enter [c] to start the game!";
	else if ('c' == input)
	
	while(true){
	
	srand(time(0));
	int c, p;
	cout<<"\n\nPlease Choose the following:\n";
	cout<<"1) Rock\n";
	cout<<"2) Paper\n";
	cout<<"3) Scissors\n";
	cout<<"your choice is: ";
	cin >> p;


	while(p<1||p>3){
	cout<<"Invalid Choice please choose 1-3: ";
	cin>>p;
	}
	

	
	if(p==1) cout<<"You chose rock!";
	else if(p==2) cout<<"You chose paper!";
	else cout<<"You chose Scissors!";
	
	c=rand()%3+1;
	if((c==1)&&(p==1)) cout<<" The computer picked rock as well, its a tie!";

	else if ((c==1)&&(p==2)) cout<<" The computer picked rock, You won!";
	
	else if((c==1)&&(p==3)) cout<<" The computer picked rock, You lost!";
	
	else if((c==2)&&(p==1)) cout<<" The computer picked paper You lost!";
	
	else if((c==2)&&(p==2)) cout<<" The computer picked paper as well, its a tie!";

	else if((c==2)&&(p==3)) cout<<" The computer picked paper, You won!";
	
	else if((c==3)&&(p==1)) cout<<" The computer picked scissors, you won!";
	
	else if((c==3)&&(p==2)) cout<<" The computer picked scissors, you lost!";
	
	else  cout<<" The computer picked scissors as well, its a tie!";

	}
	

	return 0;
}
