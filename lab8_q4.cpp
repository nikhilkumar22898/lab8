//include library
#include <iostream>

//using namespace
using namespace std;

//function to merge 2 arrays passed as parameters and to display the merged array
void merge(int arr1[],int arr2[],int size1,int size2)
{
    for(int i=0,j=size2;i<(size2),j<(size1+size2);i++,j++)
    {
		//statement to merge arr2 with arr1 and stores it in arr1
        arr1[j]=arr2[i]; 
    }
    // loop to display the merged array
    for(int k=0;k<(size1+size2);k++)
    {
        cout<<arr1[k]<<endl;
    }
}

//function to find the largest element in an array passed as parameter and returns it
int max(int arr[],int size)             
{
    int large=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]>large)
            large=arr[i];
    }
    
    return large;
}

//function to find the smallest element in an array passed as parameter and returns it
int min(int arr[],int size)
{
    int small=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]<small)
           small=arr[i];
    }
    
    return small;
}

// driver function
int main()  
{
    //variable declaration
    int arr1[30],arr2[30],size1,size2,size;
    //asks user to enter the size of first array
    cout<<"Enter the size of the first array\n";
    cin>>size1;
    cout<<endl;
    //asks user to enter the elements of the first array
    cout<<"Enter the elements of the first array\n";
    for(int i=0;i<size1;i++)
    {
        cin>>arr1[i];
    }
    cout<<endl;
    //asks user to enter the size of the second array
    cout<<"Enter the size of the second array\n";
    cin>>size2;
    cout<<endl;
    size=size1+size2;
    //asks user to enter the elements of the second array
    cout<<"Enter the elements of the second array\n";
    for(int j=0;j<size2;j++)
    {
        cin>>arr2[j];
    }
    //displays the merged array
    cout<<endl<<endl<<"Merged array: "<<endl;
    merge(arr1,arr2,size1,size2);
    cout<<endl;
    //displays the largest elenent of the merged array
    cout<<"Largest element: "<<max(arr1,size)<<endl;
    //displays the smallest element of the merged array
    cout<<"Smallest element: "<<min(arr1,size)<<endl;
    //closing the program
    return 0;
    
}
