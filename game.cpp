#include <iostream>
using namespace std;
void playgame(); //main logic declared
void start(){  //starting menu
 while(true){
	 system("cls"); //clear
	 char choice;
	 cout << "\n\t\t\t ___________________________";
	 cout << "\n\t\t\t|THE HAPPY CAR DRIVE        |";
	 cout << "\n\t\t\t|BY ANAS,WALI,ZEESHAN & RAUF|";
	 cout << "\n\t\t\t|1.Play                     |";
	 cout << "\n\t\t\t|2.exit                     |";
	 cout << "\n\t\t\t|___________________________|";
     cout << "\n\t\t\t choice: ";cin>> choice; //input choice
	 if (choice == '1' || choice == 'Y'||choice=='y') {
		 system("cls");
		 playgame();
	 }
	 else if(choice == '2') {
		 cout << "\nGood bye";
		 break;
	 }
	 else {
		 cout<<"\nWrong input";
		 break;
	 }
 }
}
void playgame(){
int playerlane =1;
int playerrow =20;
int enemylane =0;
int enemyrow =1;
int direction =1;
int score=0;
while (true) {
system("cls");
cout << "\t\t\t________________" << endl;
for (int i = 1; i <= 22; i++) {
	cout << "\t\t\t|";
	for (int l = 0; l <= 2; l++) {
		if (l == playerlane && i == playerrow)
			cout << " __ ";
		else if (l == playerlane && i == playerrow+1)
			cout << "|__|";
		else if (l == playerlane && i == playerrow + 2)
			cout << "|__|";
		else if (l == enemylane && i == enemyrow)
			cout << "/##\\";
		else if (l == enemylane && i == enemyrow+1)
			cout << "####";
		else if (l == enemylane && i == enemyrow + 2)
			cout << "\\##/";
		else
			cout << "    ";
		if (l < 2) cout << "|";
	}
	cout << "|\n";
}
cout<<"\t\t\t________________" << endl;
	cout<<"\t\t\tscore:"<<score<<endl;
	cout<<"\t\t\tcontrols|W=forward|A=Left|S=Backword|D=right|X=Jump\n";
	cout<<"\t\t\tINPUT:";
	if ((playerlane == enemylane && playerrow >= enemyrow && playerrow <= enemyrow + 2)
		||(playerrow <= 1 || playerrow >= 22 || playerlane < 0 || playerlane > 2)) {
		cout << "\nGAME OVER!you hit something";
		break;
	}
	enemyrow+=1;
	if (enemyrow > 25) {
		enemyrow =1;
		score++;
		enemylane = enemylane+direction;
	}
	if (enemylane ==2){
	  direction= -1;
	  }
	if (enemylane == 0) {
		direction=1;
	  }
	  char n;
	  cin>>n;
	   if(n=='s' || n == 'S') { playerrow += 2; }
	   else if(n=='w' || n == 'W') { playerrow--; }
	   else if(n=='d' || n == 'D') { playerlane++; }
	   else if(n=='a' || n == 'A') { playerlane--; }
	   else if(n=='x' || n == 'X') { playerrow -= 6; }
}}
int main(){
    while(true){
	    start();
		break;
    }
}


