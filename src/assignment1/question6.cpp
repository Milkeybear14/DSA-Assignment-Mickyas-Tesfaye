// Question number 6
# include <iostream>

using namespace std;
int Maximum(int arr[], int size) {
    int maxElement = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    return maxElement;
}
int main(){

int arr[] = {3,45,33,25,2};
int size = 5;
cout<<Maximum(arr, size);

return 0;
}

