#include<iostream>
using namespace std;
int main(){
	int n;	
	cout<<"nhap n:";
	do{
	cin>>n;
	if(n<=1||n>7)
	cout <<"nhap lai n:";
}while(n<=1||n>7);
	if(n==1){
		    cout<<"Sunday";
		}else if(n==2){
			cout<<"Monday";
		}else if(n==3){
			cout<<"tuesday";
		}else if(n==4){
			cout<<"wednesday";
		}else if(n==5){
			cout<<"thursday";
		}else if (n==6){
			cout<<"Friday";
		}else if (n==7){
			cout<<"Satusday";
		}	
	return 0;	
}




#include<iostream>
using namespace std;
int main(){
	int n;
	int s;	
	cout<<"nhap so dien:";
	cin>>n;
	if(n>=0&&n<=100)
	{
		s=n*2000;
	}else if(n>=101&&n<=200){
		s=n*2500;
	}else if(n>=201&&n<=300){
		s=n*3000;
	}else if(n>300){
		s=n*5000;
	}
	cout <<"tien dien la "<<s<<endl;
	return 0;
}
#include<iostream>
using namespace std;
int main(){
	int n,s;
	cout<<"nhap n:";
	cin>>n;
	for(int i=1;i<=n;i++){
		s=s+2*i;
		
	}
	cout<<"tong bang="<<s<<endl;
	return 0;
}

#include<iostream>
using namespace std;
int main(){
	int n;
	cout << "Nhap so dong: ";
    cin >> n;
    for(int i = n; 1 <= i; i--) { 
        for(int j = i; 1<= j; j--) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}