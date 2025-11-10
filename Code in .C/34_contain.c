#include <stdio.h>
#include<string.h>
int main()
{	
    char str [50];
    int contain=0;
    char a;
    int i;

    printf("Enter string: \n");
    gets(str);

    printf("Which alphabet do you want to find: \n");
    scanf("%c",&a);

    for(i=0;i<strlen(str);i++){
        
        if(str[i]==a){
        contain=1;
        break;
        }
    }
    if(contain)
    printf("Yes it contains %c\n",a);
    else
    printf("It not contains %c\n",a);
    return 0;
}