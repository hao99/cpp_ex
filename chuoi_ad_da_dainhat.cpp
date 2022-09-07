#include <iostream>
using namespace std;

int main()
{

int arr[10]; int j = -1;
string s;
getline(cin ,s);
int max = 0; int point_a =-1;int point_d = 0;  char now;
for(int i = 0; i<s.length();i++){
    if(s[i]=='a')
    {
        point_a = i;
        if(now=='d')
        {
            if(max == point_a - point_d)
        {
            arr[j]=point_d; 
            j++;
        }
            else if(max < point_a - point_d)
        {
            max = point_a - point_d;
            j =0;
            arr[j]=point_d; 
            j++;
        }
        
        }
        now = 'a';
    } 
    if(s[i]=='d')
    {
         
        point_d = i;
        if(now=='a')
        {
            if(max == point_d - point_a)
        {
            arr[j]=point_a; 
            j ++;
        }
            else if(max < point_d - point_a)
        {
            max = point_d - point_a;
            j=0;
            arr[j]=point_a;  
            j ++;
        }
        }
        
        now = 'd';
    }
    
}
cout<<"j= "<<j<<endl;
for(int i=0; i < j; i++){
    int k =arr[i];
    for( k ; k <= max + arr[i] ;k++)
    {
        cout<<s[k] ;
    }
    cout<<endl;
    
}



return 0;
}