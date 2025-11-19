#include <iostream>

using namespace std;

int main(){
int x;
cout<<"wpisz liczbe";
cin>>x;

bool pierwsza = true;

if(x<2){
	pierwsza=false;
}

for (int a = 2; a<x;a++){
	if(x%a==0){
	pierwsza=false;
  }
}
if (pierwsza){
	cout<<"liczba pierwsza";
}else{
	cout<<"liczba nie jest pierwsza";
}
	return 0;
}
