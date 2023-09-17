// Question number one
# include <iostream>

class arrayAdder{
	public:
	int sumOfArray(int arr[], int size){
		int sum = 0;
		for (int i = 0; i <= size; i++){
			sum += arr[i];
		}
		return sum;
	}
};
int main(){
arrayAdder obj1;
int arr [] = {2,3,3};
int size = sizeof(arr)/sizeof(arr[0]);
int sum = obj1.sumOfArray(arr, size);
std::cout<<"The sum of array element = "<<sum;
return 0;
}

