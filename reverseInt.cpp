#include <iostream>
using namespace std;

int main(){
    int num = 7895;
    long reverse = 0;

    while(num != 0){
        int r = num%10;
        reverse= reverse*10+r;
        num/=10;
    }

    if(reverse>INT8_MAX || reverse<INT8_MIN) return 0;
    cout<<reverse;
    return 0;
}