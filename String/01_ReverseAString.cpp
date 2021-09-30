#include <iostream>

using namespace std;

void solve(string &s){
    int n=s.size();
    int j=n-1;
    for(int i=0;i<n/2;i++){
        swap(s[i],s[j]);
        j--;
    }
}

int main() {
	// your code goes here
	string s;
	cin>>s;

    solve(s);
    
	for(int i=0;i<s.size();i++){
	    cout<<s[i];
	}
	return 0;
}
