#include<iostream>
#include<array>
using namespace std;
void reverseArray(int arr[], int length);

int main(){
int array[100]; //creates an array with 100 elements max.
int size = 0;

cout << "Enter array size: ";
cin >> size;
cout << endl;

cout << "Enter array elements: ";
for(int i = 0; i < size; ++i){
  cin >> array[i];
 }
 
cout << endl;

reverseArray(array,size);

cout << "New array is: ";
for(int k = 0; k < size; ++k){
  cout << array[k];
 }
cout << endl;

}

void reverseArray(int arr[], int length){
  for(int j = 0; j < (length/2); ++j){
    int temp = arr[j];
    arr[j] = arr[length-j] -1;
    arr[length-j] = temp;
  }
}
