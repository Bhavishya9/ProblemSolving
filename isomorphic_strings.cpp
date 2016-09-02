#include<iostream>
#include<string.h>

using namespace std;

bool isIsomorphic(char *str1,char *str2)
{
    if(strlen(str1)!=strlen(str2))
        return 0;
    int arr[256]={0};
    int index=0;
    for(index=0;str1[index]!='\0';index++)
    {
        if(arr[str1[index]]==0)
            arr[str1[index]]=str2[index];
        if(arr[str1[index]]!=str2[index])
            return false;
    }
    return true;
}

int main(void)
{
    char *str1=new char[100];
    char *str2=new char[100];
    cin>>str1;
    cin>>str2;
    return isIsomorphic(str1,str2);
}
