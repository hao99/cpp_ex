#include <iostream>
using namespace std;

int main()
{
//new string;
string s;
getline(cin ,s);
int max = 0; int point_a =-1;int point_d = 0; int a; char now;
for(int i = 0; i<s.length();i++){
    if(s[i]=='a')
    {
        point_a = i;
        now = 'a';
    } 
    if(s[i]=='d')
    {
        point_d = i;
        if(now=='a')
        if(max < point_d - point_a)
        {
            max = point_d - point_a;
            a = point_a; 
        }
        now = 'd';
    }
    
}

for(int i= a; i <= a + max; i++){
    if(point_d!=0) cout<<s[i];
}

return 0;
}