#include <iostream>
using namespace std;
int main()
{
    int current = -1;
    string s;
    getline(cin, s);
    char arr[20];
    for(int i =0; i < s.length(); i++)
    {
        int br = 0;
        switch(s[i])
        {
            case '[':
            {
                current++;
                arr[current] = s[i];
                break;
            }
            case '{':
            {
                current++;
                arr[current] = s[i];
                break;
            }
            case '(':
            {
                current++;
                arr[current] = s[i];
                break;
            }
            case ']':
            {
                if(arr[current]=='[') current--;
                else {br = 1; current++;}
                break;
            }
            case '}':
            {
                if(arr[current]=='{') current--;
                else {br = 1; current++;}
                break;
            }
            case ')':
            {
                if(arr[current]=='(') current--;
                else {br = 1; current++;}
                break;
            }
        }
        if(br == 1) break;
    }
    if( current == -1) cout<<"Dong ngoac hop li!"<<endl;
    else cout<<"Dong ngoac chua hop li!"<<endl;
    
}