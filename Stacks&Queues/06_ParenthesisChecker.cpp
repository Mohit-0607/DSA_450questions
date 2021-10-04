#include <iostream>
#include <stack>
using namespace std;

bool ParenthesisChecker(string x){
    if(x.size()%2==1) return false;
    stack<char> s;
    for(int i=0;i<x.size();i++){
        if(x[i]=='{' or x[i]=='(' or x[i]=='['){
            s.push(x[i]);
        }
        else{
            if(s.empty()) return false;
            else if((x[i]==']' and s.top()=='[') or (x[i]==')' and s.top()=='(') or (x[i]=='}' and s.top()=='{')){
                s.pop();
            }
            else s.push(x[i]);
        }
    }
    return s.empty();
}

int main() {
	// your code goes here
	string s;
	cin>>s;
	bool ans = ParenthesisChecker(s);
	if(ans) cout<<"Balanced";
	else cout<<"Unbalanced";
	return 0;
}
