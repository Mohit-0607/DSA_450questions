#include <iostream>
using namespace std;

int arr[1000],top1=-2,top2=-1;

void push1(int x){
    top1+=2;
    arr[top1] = x;
    
}

void push2(int x){
    top2+=2;
    arr[top2] = x;
    
}

void pop1(){
    if(top1!=-2){
        cout<<arr[top1]<<" ";
        top1-=2;
    } 
    else cout<<"-1 ";
}

void pop2(){
    if(top2!=-1){
        cout<<arr[top2]<<" ";
        top2-=2;
    } 
    else cout<<"-1 ";
}

int main() {
	push1(1);
	push2(2);
	push1(3);
	pop1();
	pop2();
	pop2();
	return 0;
}
