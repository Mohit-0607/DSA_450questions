#include <iostream>
#include <unordered_map>

using namespace std;


int main() {
	// your code goes here
	string s;
	cin>>s;

    unordered_map<char,int> m;
    int n=s.size();
    for(int i=0;i<n;i++){
       m[s[i]]++;
    }
    
    for(auto i:m){
        if(i.second>1){
            cout<<i.first<<"->"<<i.second<<"\n";
        }
    }
	return 0;
}
