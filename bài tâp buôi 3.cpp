#include<iostream>
using namespace std;
class songuyen{
	public:
		int n;
		int a[100];	
	void nhap(){ 
	cout<<"nhap so phan tu ";
    cin>>n; 
	for(int i=0 ;i<=n;i++)
	{
		cout<<"a["<<i<<"]=";
		cin>>a[i];
		cout<<endl;	
	}
}
   	void xuat(){
   		cout <<"cac so vua nhap:\n";
   		for (int i=0;i <=n;i++){
   			cout <<"a["<<i<<"]=";
   			cout<<a[i]<<endl;
		   }
	   }
    void dngc(){
    	cout <<" thu tu nguoc lai :\n";
    	for(int i=n;0<=i;i--){
   	    cout<<a[i]<<endl;
   	}
	}
	void tim(){
		int k;
		cout <<"nhap so can tim : ";
		cin>> k;
         for (int i=0;i <=n;i++){
   		if(a[i]==k)
   			cout <<"phan tu can tim tai "<<"a["<<i<<"]\n";
		   }
	}
	void tang(){
		cout<<"sau khi sap xep :\n";
		for(int i = 0; i<=n; i++) { 
        for(int j = i; j<=n; j++) {
   			 if(a[i] > a[j])  
		        swap(a[i], a[j]);
        }
        cout<<a[i]<<endl;
    }
	}
};

int main(){
   songuyen sn;
   sn.nhap();
   sn.xuat();
   sn.dngc();
   sn.tim();
   sn.tang();
   
}

#include<iostream>

using namespace std;

class SoPhuc
{
	private:
		int pt, pa;
	public :
		void nhap()
		{

				cout << "Nhap vao phan thuc: " ;
				cin >> pt;
				cout << "Nhap vap phan ao: " ;
				cin >> pa;

		}
	
		int getPA()
		{
			return pa;
		}
		int getPT()
		{
			return pt;
		}
};

int main()
{
	SoPhuc a,a1;
	a.nhap();
	a1.nhap();
		cout << "\n Tong cua 2 so thuc vua nhap la: " 
		 << a.getPT() + a1.getPT()<< " + " << a .getPA() + a1 .getPA()<< " *j ";
		cout<<"\n hieu cua 2 so thuc vua nhap la: "
		<<a.getPT() -a1.getPT()<<" - "<<a.getPA()-a1.getPA()<<" *j";
		 return 0;
}

#include<iostream>
using namespace std;
class phanso{

	public:
		int ts;
		int ms;
	   void nhap(){
	   	int n;
	   	cout<<"nhap n :";
	   	cin>>n;
	   	for (int i=0;i<n;i++){
	   		cout<<"nhap tu so thu "<<i+1<<" : ";
	   		cin>>ts;
	   		cout<<"nhap mau so thu "<<i+1<<" : ";
	   		cin>>ms;
		   }
		   
	   }
	 	
};
int main(){
	phanso ps;
	ps.nhap();					
	cout<<"tong cac phan so la :"<<ps.ts*ps.ms+ps.ts*ps.ms<<"/"<<ps.ms*ps.ms;
}


