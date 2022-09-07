#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class SinhVien{
    private:
    string id, ten, ns;//thuoc tinh:attribute
    double gpa;
    public:
    SinhVien();//constructer
    SinhVien(string, string,string, double);
    void xinchao();//phuongthuc:method
    void nhap();
    void xuat();
    double getGpa();
};
//Implementation
void SinhVien::xinchao(){
    cout<<"**Hello** \n";
}
SinhVien::SinhVien(){
    cout<<"Ham khoi tao duoc goi! \n";
    gpa =0;
}
SinhVien::SinhVien(string ma, string name, string birth, double diem){
    cout<<"Ham khoi tao co tham so duoc goi!\n";
    id = ma;
    ten = name;
    ns = birth;
    gpa = diem;
}
void SinhVien::nhap(){
    cout<<"Nhap id:";cin>>id;
    cin.ignore();
    cout<<"nhap ten:";getline(cin, ten);
    cout<<"nhap ngay sinh:";cin>>ns;
    cout<<"Nhap diem:";cin>>gpa;
}
void SinhVien::xuat(){
    cout<<id<<" "<<ten<<" "<<ns<<" "<<fixed<<setprecision(2)<<gpa<<endl; 
}
double SinhVien::getGpa(){
    return this->gpa;
}
bool cmp(SinhVien a, SinhVien b){
    return a.getGpa() > b.getGpa();
}

int main()
{
	int n; 
	cout<<"nhap n:";cin>>n;
    SinhVien x[n];
    x[n].xinchao();
    for(int i=0; i<n;i++){
    	x[i].nhap();
	}
	sort(x, x+n, cmp);
    for(int i=0; i<n;i++){
    	x[i].xuat();
    }
    
    return 0;
}
