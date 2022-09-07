#include <iostream>
#include<string.h>
using namespace std;

void longestStringSub(string a,string b)
{
    char c[20];char c_temp[20];char c_temp2[20];
    int k, k2; int max =0;
    int n,n2;
    for (int u = 0; u < a.length(); u++)
    {
        n = 0;k = 0;k2=0;n2=0;
        for(int i=u; i < a.length(); i++)
        {
        for (int j=k; j < b.length(); j++)
        {
            if(a[i]==b[j])
            {
                c_temp[n] = b[j];
                k = j+1;
                n ++;
                break;
            }
        }
        }
        for(int i = a.length()-1-u; i >=0; i--)
        {
        for (int j = b.length()-1-k2; j >=0; j--)
        {
            if(a[i]==b[j])
            {
                c_temp2[n2] = b[j];
                k2 = b.length()-j;
                n2++;
                break;
            }
        }
        }
        if(n>max)
        {
            max =n;
            for(int i = 0; i < max; i++)
            {
                c[i] = c_temp[i];
            }
            
        }
        if(n2>max)
        {
            max =n2;
            for(int i = 0; i < max; i++)
            {
                c[i] = c_temp2[max-1-i];
            }
            
        }
    }

    for(int i = 0; i < max; i++)
    {
        cout<<c[i];
    }
    

}
int main()
{
    string a;
    string b;
    cout<<"Nhap a: ";
    cin>> a;
    cout<<"Nhap b: ";
    cin>> b;
    longestStringSub(a,b);
    return 0;
}