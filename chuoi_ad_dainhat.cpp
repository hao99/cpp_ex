#include <iostream>
using namespace std;
int main()
{

string s;
int arr[s.length()];
getline(cin ,s);
int count1 = 0;
int count2 = 0;int count3 = 0;int max = 0;
for (unsigned int i = 0; i < s.length(); i++)
{
        if(s[i]=='a') { arr[count1]=i; count1++;
        }
}
for (unsigned int i = 0; i < s.length(); i++)
{
        if(s[i]=='d') { arr[count1]=i; count1++;
        }
}
for(int i =0; i<count1; i++){
    for(int j = i+1; j<count1; j++){
        if(arr[i]>arr[j]){
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]= temp;
        }
    }
}
for (unsigned int i = 0; i < count1; i++)
{
        if(s[arr[i]]=='a')
        {
            if(s[arr[i+1]]=='d')
            {
                if(arr[i+1]-arr[i]>max){
                    max =arr[i+1]-arr[i];
                    count2 = arr[i];
                    count3 = arr[i+1];
                }
            }
        }
}
for (count2; count2 <= count3; count2++)
{
    cout<<s[count2];
}

return 0;
}