#include <iostream>
#include <stack>
using namespace std;

string &reversestring(string &x){
    stack<char> s;
    for(int i=0;i<x.size();i++){
        s.push(x[i]);
    }
    for(int i=0;i<x.size();i++){
        x[i]=s.top();
        s.pop();
    }
    return x;
}

int main() {
	// your code goes here
	string s;
	cin>>s;
	s = reversestring(s);
	cout<<s;
	return 0;
}
