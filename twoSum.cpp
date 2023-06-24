#include <iostream>
using namespace std;

void printArr(int arr[], int a){
    for(int i=0;i<a;i++){
        cout<<arr[i] << " ";
    }
}

void firstSolution(int arr[], int num, int a){
    for(int i=0;i<a;i++){
        for(int j = i+1; j<a;j++){
            if(arr[i]+arr[j] == num){
                cout << i << " "<< j;
            }
        }
    }
}

int main() {
  int a= 4, num=18;
  int arr[a] = {2,7,11,15};
  firstSolution(arr, num, a);
  return 0;
}