#include <iostream>
using namespace std;
class phu_nu{
    protected: //trung gian giua public va private//cho phep truy xuat tu class con
    bool con_zin;
    string ten;
    int tuoi;
    public:
    phu_nu();
    ~phu_nu();
    phu_nu(string ten, int age, bool z);
    virtual void choinhaccu(string nhac_cu);
    void va_zin();
};
phu_nu::phu_nu(string name,int age, bool z = true){
    ten = name;
    con_zin = z;
    tuoi = age;
}
phu_nu::phu_nu(){
    cout<<"Ham khoi tao duoc goi!";
}
phu_nu::~phu_nu(){
    cout<<"Chia tay "<<ten<<endl;
}
void phu_nu::choinhaccu(string nhac_cu){
    cout<<ten<<" AAAAA!"<<endl;
}
void phu_nu::va_zin(){
    if(tuoi < 25 ) con_zin = true;
    cout<<ten<<" hien dang "<<(con_zin?"con zin":"mat zin")<<endl;
}
class Gai_ngoan : public phu_nu
{
    public:
    Gai_ngoan(string name,int age, bool z = true)
    : phu_nu(name, age, z)
    {}
    void noi_tro();
    void choinhaccu(string nhac_cu);
};
void Gai_ngoan::noi_tro()
{
    cout<<ten<<"dang lam noi tro!"<<endl;
}
void Gai_ngoan::choinhaccu(string nhac_cu)
{
    cout<<ten<<" Uwwwwwwwwwwww!"<<endl;
}
class Gai_hu : public phu_nu
{
    public:
    Gai_hu(string name,int age, bool z = true)
    : phu_nu(name, age, z)
    {}
    void di_bar();
    void choinhaccu(string nhac_cu);
};
void Gai_hu::di_bar()
{
    cout<<ten<<"dang di bar!"<<endl;
}
void Gai_hu::choinhaccu(string nhac_cu)
{
    cout<<ten<<" Orrrrrrrrrrr!"<<endl;
}
int main(){
    Gai_ngoan *marria_ozawa= new Gai_ngoan("marria_ozawa" ,24 ,false);
    marria_ozawa->choinhaccu("ken");
    marria_ozawa->va_zin();
    delete marria_ozawa;
    return 0;
}