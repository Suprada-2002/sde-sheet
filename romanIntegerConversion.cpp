#include <iostream>
#include <map>
using namespace std;

int main(){
    string s = "MCMXCIV";
    int sum =0;

    map<char, int> m;
    m.insert({'I', 1});
    m.insert({'V', 5});
    m.insert({'X', 10});
    m.insert({'L', 50});
    m.insert({'C', 100});
    m.insert({'D', 500});
    m.insert({'M', 1000});

    for(int i=0;i<s.length();i++){
        if(m[s[i]] < m[s[i+1]]){
            sum+= m[s[i+1]] - m[s[i]];
            i++;
            continue;
        }
        sum+=m[s[i]];
    }

    cout<< sum;
    return 0;
}