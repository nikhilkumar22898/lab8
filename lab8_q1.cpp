// include library
#include<iostream> 

//include standard library
using namespace std;
//function declaration
int sum(int arr[20],int n){
	
	int s=0;
	for(int i=0;i<n;i++)
	{
		//enter the number
		cout<<"Enter number to be added: "<<endl;
		cin>>arr[i];
		//recursive calling
		s=s+arr[i];  
	}

	return s;
}
//main function
int main()
{
	//variable declaration
	int n,arr[20];   
	//asks user for the size of array
	cout<<"Enter array size: "<<endl;
	cin>>n;
	// function calling
	cout<<"Sum: "<<sum(arr,n)<<endl;      
	//closing program
	return 0;
}
