#include "./../INCLUDE/stringlib.h"
int Stringlib :: stringlength(string str)
{
    int index=0;
    while(str[index]!='\0')
    {
        index++;
    }
    return index;
}

void Stringlib :: rtrim(string str)
{
    Stringlib s;
    int index = s.stringlength(str)-1;
    while(str[index]==' ')
    {
        index--;
    }
    str[index+1] = '\0';
}
