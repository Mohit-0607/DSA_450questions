#include <iostream>
using namespace std;

int arr[1000];
int i=0;
void push(int data){
    arr[i]=data;
    i++;
}

void pop(){
    if(i==0) cout<<"Underflow!!";
    else i--;
}

void display(){
    if(i==0) cout<<"No element !!!";
    for(int j=0;j<i;j++) cout<<arr[j]<<" ";
}

void top(){
    cout<<arr[i];
}

int main() {
    // display();
    // push(1);
    push(1);
    push(2);
    push(3);
    
    pop();
    display();
	return 0;
}
