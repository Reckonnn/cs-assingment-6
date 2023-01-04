#include<stdio.h>
#include<time.h>
int range(int lower,int upper)
{
    return(clock()%(upper-lower+1))+lower;
}

char lower_case()
{
    return range(97,122);
}

char upper_case()
{
    return range(65,90);
}

char digits()
{
    return range(48,57);
}

char symbols()
{
    char sym[]={'~','!','@','#','$','%','^','&','*','(',')','-'.'_','+','=','{','}','[',']','|','\\',':',';','"','<','>','?','/','.',','};
    return sym[range(0,31)];
}

void shuffle(char str[])
{
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        int c=range(0,7);
        if(i!=c)
        {
            str[i]=str[i]^str[c];
            str[c]=str[i]^str[c];
            str[i]=srt[i]^str[c];
        }
    }
}

void password(char s[])
{
    s[0]=lower_case();
    s[1]=upper_case();
    s[2]=digits();
    s[3]=symbols();
    for(int i=4;i<8;i++)
    {
        int c=range(1,4);
        if(c==1)
        {
            s[i]=lower_case();
        }
        else if(c==2)
        {
            s[i]=upper_case();
        }
        else if(c==3)
        {
            s[i]=digits();
        }
        else if(c==4)
        {
            s[i]=symbols();
        }
    }
    shuffle(s);
    s[8]='\0';
}

void main()
{
    char pass[9];
    password(pass);
    printf("Random password generated is: %s",pass);
}
