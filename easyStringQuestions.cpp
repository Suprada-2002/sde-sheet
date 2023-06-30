#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int lonelyInteger( vector<int> a){
    int ans;
    map<int,int> mp;
    for(int i=0;i<a.size();i++){
        mp[a[i]]++;
    }
    for(auto x:mp){
        if(x.second == 1) ans = x.first;
    }
    return ans;
}

string countAndSay(int n){
    if(n == 1) return "1";
    if(n == 2) return "11";

    string str = "11";
    for(int j=3;j<=n;j++){
        int count=1;
        string temp = "";
        str+='$';
        int len = str.length();
        for(int i= 1;i<len;i++){
            if(str[i-1] != str[i]){
                temp+=to_string(count);
                temp+=str[i-1];
                count = 1;
            }
            else count++;
        }
        //cout<<temp<<endl;
        str=temp;
    }
    return str;
}

int firstOccurence(string str, string s){
    if(str.length() == 0) return -1;

    int in = str.find(s); //return -1 for not found else first index of substr
    if(in != string::npos) return in; //check if in is -1
    return -1;
}

void validParenthesis(string s){
    stack<char> st;
    for(auto x: s){
        if( x == '(' || x == '[' || x == '{') st.push(x);
        else if((x == ')') && (!st.empty()) && (st.top()='(')) st.pop();
        else if( (x == '}') && (!st.empty()) && ( st.top()='{')) st.pop();
        else if((x == ']') && (!st.empty() )&&  (st.top()='[')) st.pop();
        else {
            cout<<"not valid";return;
        }
    }
    if(st.empty()) cout<<"valid";
    else cout<<"not valid";
}

//o(nlogn)
void longestCommonPrefix(vector<string> a){
    if(a.size() == 0) return;
    if(a.size() == 1) return;
    string ans ="";
    sort(a.begin(), a.end());

    string small = a[0]; //smallest string
    string longest = a[a.size() - 1]; //longest string

    for(int i=0;i<small.length(); i++){
        if(small[i] == longest[i]){
            ans+=small[i];
        }
    }
    cout<<ans<<endl;
}

int main(){
    vector<string> a {"abcvvvv","abvvvv","abccccc"};
    vector<int> ar{4,4,4,7,8,7,8,0};
    //longestCommonPrefix(a);
    //validParenthesis("{[()]");
    //cout<<firstOccurence("ghhhjhjg", "jh")<<endl;
    //cout<<countAndSay(3);
    cout <<lonelyInteger(ar);
    return 0;
}
