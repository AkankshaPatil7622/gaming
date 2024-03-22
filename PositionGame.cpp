#include<iostream>
using namespace std;
int main()
{
	int game[4][4]={
	{1,0,0,1},
	{0,0,1,0},
	{1,1,0,0},
	{0,0,0,1}
	};
	int hit=0,row,column;
	
	for(int i=0;i<=4;i++)
	{
	cout<<"select the position1 in between 0 and 3 :"<<endl;
	cin>>row;
	cout<<"select the position2 in between 0 and 3 :"<<endl;
	cin>>column;
	if(row>3 && column>3)
	{
		cout<<"wrong input..try again!!"<<endl;
		break;
	}
	   
	if(game[row][column]!=1)
	{
		cout<<"Miss !!"<<endl;
		hit++;
	}
	else
	{
		game[row][column]=0;
		cout<<"Hit !!"<<endl;
		hit++;
		cout<<"you won game in hit "<<hit<<endl;
	}
   }
	return 0;
}
