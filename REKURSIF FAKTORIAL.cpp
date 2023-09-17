#include <iostream>
using namespace std;

long int faktorial (int A);

int main(){
	
	int r,hasil;
	
	cout<<"MENGHITUNG NILAI FAKTORIAL DENGAN REKURSIF"<<endl;
	cout<<endl;
	cout<<"Masukan Nilai Yang Diinginkan = ";
	cin>>r;
	
	hasil=faktorial(r);
	cout<<"Faktorial "<<r<<"!= "<<hasil<<endl;
}

long int faktorial (int A){
	if (A==1)
		return(A);
		else
		return (A*faktorial(A-1));
}
