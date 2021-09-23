#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main(){
	float tinggi, alas;
	cout<< " program menghitung segitiga "<<endl;
	cout<<"\n";

	cout << " tinggi segitiga : ";
	cin >> tinggi;
	cout << " alas segitiga : ";
	cin >> alas;

	cout << " sisi miring = "<<sqrt(alas*alas*tinggi*tinggi)<<endl;
	cout << " luas = "<<0.5*alas*tinggi<<endl;
	cout << " keliling = "<<tinggi+alas+sqrt(alas*alas*tinggi*tinggi)<<endl;

	return 0;
}
