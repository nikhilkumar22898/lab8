// including library
#include<iostream> 

// using namespace
using namespace std;

int largest(int arr[],int n)
{
	int large=arr[0];
	for(int i=0;i<n;i++)
	{
	if(arr[i]>large)
	   large=arr[i];
	}
	return large;
}
int smallest(int arr[],int n)
{
	int small=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]<small)
		   small=arr[i];
	}
	return small;
}
int mode(int arr[],int size)
{
    int maxcount=0;
    for(int i=0;i<size;i++)
    {
        int count=1;
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        
        if(maxcount<count)
          maxcount=count;
    }
    
    for(int i=0;i<size;i++)
    {
        int count=1;
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(maxcount==count)
        {
            return arr[i];
        }
    }
}
float mean(int arr[],int n)
{
    int sum=0;
    float avg;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    avg=(float)sum/n;
    
    return avg;
}
float median(int arr[],int size)          //function that finds the median of an array after sorting through selection sort
{
    int temp;
    float med;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }   
    if(size%2==0)
       med = (arr[size/2]+arr[(size/2)-1])*0.5;
    
    else
       med = arr[(size-1)/2];

    return med;
}
int main()
{
	//variable declaration
	int arr[20],n;
	//asks user for the size of the array
	cout<<"Enter the size of the array: "<<endl;
	cin>>n;
        //asks user to enter elements of the array
        for(int i=0;i<n;i++)
        {
		cout<<"Enter element: "<<endl;
		cin>>arr[i];
        }
	//displays the result
	cout<<"Largest element: "<<largest(arr,n)<<endl;
	cout<<"Smallest element: "<<smallest(arr,n)<<endl;
	cout<<"Most frequent element: "<<mode(arr,n)<<endl;
        cout<<"Mean of the elements: "<<mean(arr,n)<<endl;
        cout<<"Median of the elements: "<<median(arr,n)<<endl;
	//closing the program
	return 0;
}
