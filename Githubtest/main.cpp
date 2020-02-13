#include<iostream>
#include<Windows.h>
#include<string>
using namespace std;
int main(void){
	int rows;
	
	cout<<"ÇëÊäÈëÐÐÊý£º";
	cin>>rows;
	
	for(int i=0;i<rows;i++){
	for(int j=0;j<rows-(i+1);j++){
		cout<<" ";
	}
	for(int k=0;k<2*i+1;k++){
	cout<<"*";
	}
	cout<<endl;
	}
	system("pause");
    return 0;
}