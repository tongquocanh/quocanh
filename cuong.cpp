#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n;
	cout<<"\nNhap n : ";
	cin>>n;
	
  	int tam=n;
	 int dem = 0;
	 for(int i=1;i<=n;i++)
  
   {
        n /= 10;
       dem++;
   }
   	n=tam;
   	int chuso=n;
	int s = 0, phandu;
	for(int i=1;i<=dem;i++)  
  
    {
        phandu = chuso % 10; 
        chuso /= 10;      
        s += pow(phandu, dem);
       
    }
    
  	if (s == n)
    {
    cout<<"\nSo Armstrong.";
    }
    else
      cout<<n<<" ko pai la so Armstrong";
   return 0;
}
