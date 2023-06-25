#include <iostream>
using namespace std;

long reverse(int num){
   long rev = 0;
    if(num <= 0) return 0;
    while(num != 0){
        rev= rev*10+ num%10;
        num/=10;
    }
    cout<<rev;
    if(rev>INT8_MAX || rev<INT8_MIN) return 0;
    return rev;
}

int main(){
    int num = 112211;
    int temp = num;
    long rev = reverse(temp);
    
    
    return 0;
}