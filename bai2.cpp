#include<iostream>
using namespace std;
int main(){
	int n,s;
	int i;
	cout <<"nhap n=";
	cin>>n;
	i=0;
	do{
		s=s+i;
		i++;
		
	}while(i<=n);
	cout<<"tong la:"<<s<<endl;
	return 0;
}