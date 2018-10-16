#include<stdio.h>
int main()
{
    char c;
    int character=0,space=0,number=0,others=0;
    while((c=getchar())!='\n')
    {
    if(c>='a'&&c<='z'||c>='A'&&c<='Z')
        character++;
    else if(c==' ')
        space++;
    else if(c>='0'&&c<='9')
        number++;
    else
        others++;
    }
printf("character:%d\n",character);
printf("number:%d\n",number);
printf("space:%d\n",space);
printf("others:%d\n",others);
}
