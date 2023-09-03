#include<iostream>
using namespace std;

void Reversearray(int arr[], int start, int end){
	while(start<end)
	{
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
}

void printarray(int arr[], int size)
{
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";	
}

int main()
{
	int n;
	cout<<"Enter the size of array";
	cin>>n;
	int arr[n];
	//Taking inputs
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Array before reversing:\n";
	printarray(arr,n);
	Reversearray(arr,0,n-1);
	cout<<"Array after reversing:\n";
	printarray(arr,n);
	return 0;
}
