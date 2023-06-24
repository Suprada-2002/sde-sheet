#include <iostream>
#include <vector>
using namespace std;

void printArr(int arr[], int a){
    for(int i=0;i<a;i++){
        cout<<arr[i] << " ";
    }
}

//binary search, o(n logn), 0(1)
void secondSolution(int arr[], int num, int a){
    int left=0,right = a-1;
    while(left<right){
        if(arr[left]+arr[right] == num) {
            cout << left << " " << right ;
            break;
        }else if (arr[left] + arr[right] < num) left++;
        else if(arr[left] + arr[right] > num) right--;
    }
}


// o(n2), 0(1)
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
  secondSolution(arr, num, a);
  return 0;
}