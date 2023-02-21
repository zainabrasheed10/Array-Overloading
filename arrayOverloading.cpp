#include<iostream>
using namespace std;

int main()
{ 
    int x[4];
    //for storing
    cout<<"Enter the Elements: "<<endl;
	for(int i=0; i<=4; i++)
	{
	  cin>>x[i];
	}
	      
	//for retrieving
	for(int j=0; j<=4; j++)
	{
		cout<<x[j]<<" ";
	}
	return 0;
}
