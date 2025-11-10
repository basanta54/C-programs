#include <stdio.h>
#include <string.h>

int main()
{	
    // char str []= "My name is YYBasanta Hazra";
    char str [50];
    int i;
    int count=0;
    char a;
    printf("Enter string: \n");
    gets(str);

    printf("Which alphabet do you want to find: \n");
    scanf("%c",&a);

    for ( i = 0; i < strlen(str); i++)
    {
        
        if(str[i]== a  )
        count++;
    }
    
    printf("Occurance of %c is: %d",a,count);
    return 0;
}