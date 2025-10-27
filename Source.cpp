#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b)
{
	return a*b;
}
float thuong(int a, int b)
{
	if(b==0){
		cout<<"Khong the chia cho 0";
		return 0;
	}
	return (float)a/b;
}
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout<<"user B"
	cout << "Nhap a";
	cin>>a;
	cout<<"Nhap b";
	cin>>b;
	cout <<"Tong =" tong(a,b)<<endl;
	cout <<"Hieu =" hieu(a,b)<<endl;
	cout <<"Tich =" tich(a,b)<<endl;
	cout <<"Thuong =" thuong(a,b)<<endl;
	system("pause");
	return 0;
}