#include<stdio.h>
#include<string.h>
void main()
{
    int c,m=0,j,len1,len2;
    char a[50];
    char b[50];
    printf("enter the first word :");
    scanf("%s",&a);
    printf("enter second word :");
    scanf("%s",&b);
    len1=strlen(a);
    len2=strlen(b);

    if(len1==len2){
        for(c=0;c<len1;c++)
        {
            for(j=0;j<len2;j++)
            {
                if(a[c]==b[j])
                {
                    b[j]='*';
                    m++;
                    break;
                }
            }
        }
    }
    if(m==len1){
        printf("The given word is anagram");
    }
    else{
        printf("The given word is not anagram");
    }
    return 0;
}
