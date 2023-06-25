#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

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
    //longestCommonPrefix(a);
    validParenthesis("{[()]");
    return 0;
}
