#include <iostream>
#include <set>
using namespace std;

void unionof(int a[], int b[], int n, int m){
    set<int> c;
    for(int i=0;i<9;i++){
        c.insert(a[i]);
    }
    for(int i=0;i<10;i++){
        c.insert(b[i]);
    }
    for(auto i=c.begin();i!=c.end();i++)
        cout<<*i<<" ";
    cout<<endl;
}

int main() {
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];
    unionof(a,b,n,m);
	return 0;
}
