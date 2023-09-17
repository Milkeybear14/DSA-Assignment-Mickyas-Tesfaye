// Question number two
# include <iostream>
using namespace std;

void rotateArray(int arr[],int size, int positions){
	int temp[positions];
	for (int i = 0; i < positions; i++){
		temp[i] = arr[i];
	}
	
	for (int i = 0; i < size;i++ ){
		arr[i - positions] = arr[i];
	}
	for (int i = 0;i < positions; i++){
		arr[size - positions - i] = temp[i];
	}
}
int main(){
int arr[] = {3,6,2,1,6};
int size = sizeof(arr)/sizeof(arr[0]);
int positions = 1;
cout<<"Original array = ";
for (int i = 0;i < size;i++){
	cout<<arr[i]<<" ";
}
rotateArray(arr,size, positions);
cout<<"Rotated array = ";
for(int i = 0;i < size;i++){
	cout<<arr[i]<<" ";
}

return 0;
}

