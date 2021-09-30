#include <iostream>

using namespace std;

bool solve(string s){
    int n=s.size();
    int j=n-1;
    int f=0;
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[j]){
            f=1;
            break;
        }
        j--;
    }
    if(f==1) return false;
    else return true;
}

int main() {
	// your code goes here
	string s;
	cin>>s;

    bool ans = solve(s);
    cout<<ans;
	return 0;
}
