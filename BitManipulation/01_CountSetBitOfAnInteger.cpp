#include <iostream>
using namespace std;

int solve(int n){
    int count=0;
    while(n!=1){
        if(n%2==0) n=n/2;
        else{
            count++;
            n=n/2;
        }
    }
    return count+1;
}

int main(){
    int n;
    cin>>n;
    int ans = solve(n);
    cout<<ans;
}
