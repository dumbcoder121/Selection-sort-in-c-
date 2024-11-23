#include<iostream>
using namespace std;
int main(){

	int size;
	cout<<" enter the size "<<endl;
	cin>>size;
	int array[size];
	cout<<" enter elements "<<endl;
	for(int i=0; i<size;i++){
		cin>>array[i];
	}
	 for (int i=0; i<size-1;i++)
	 {
	 	for(int j=i+1; j<size;j++){
	 		if(array[j]<array[i])
			 {
			 	int temp= array[j];
			 	array[j]=array[i];
			 	array[i]=temp;
			 }
		 }
	 }
	cout<<" elements are : "<<endl;
	for(int i=0; i<size;i++)
	{
		cout<<array[i];
	}
	
}
