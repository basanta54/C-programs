#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float sallery;
    char name[25];
};

int main()
{	
    struct employee e1,e2,e3;

    char str1[25],str2[25],str3[25];
    // e1.code=101;
    // e1.sallery=10532.45;
    // strcpy(e1.name,"Basanta");
    // e2.code=102;
    // e2.sallery=16749;
    // strcpy(e2.name,"partner");
    // e3.code=103;
    // e3.sallery=30452;
    // strcpy(e3.name,"Nilav");
        // For employee no1
        printf(" Enter name of the employee: \n");
        scanf("%s",&e1.name);
        printf(" Enter code of the employee: \n");
        scanf("%d",&e1.code);
        printf(" Enter code of the employee: \n");
        scanf("%f",&e1.sallery);

        printf("%s\n",e1.name);
        printf("%d\n",e1.code);
        printf("%.2f\n",e1.sallery);

        // For employee no 2
        printf(" Enter name of the employee: \n");
        scanf("%s",&e2.name);
        printf(" Enter code of the employee: \n");
        scanf("%d",&e2.code);
        printf(" Enter code of the employee: \n");
        scanf("%f",&e2.sallery);

        printf("%s\n",e2.name);
        printf("%d\n",e2.code);
        printf("%.2f\n",e2.sallery);

        // For employee no 3
        printf(" Enter name of the employee: \n");
        scanf("%s",&e3.name);
        printf(" Enter code of the employee: \n");
        scanf("%d",&e3.code);
        printf(" Enter code of the employee: \n");
        scanf("%f",&e3.sallery);

        printf("%s\n",e3.name);
        printf("%d\n",e3.code);
        printf("%.2f\n",e3.sallery);
        
    


    // printf("%d  %d  %d | %.2f  %.2f  %.2f | %s  %s  %s\n",e1.code,e2.code,e3.code,e1.sallery,e2.sallery,e3.sallery,e1.name,e2.name,e3.name);
    


    return 0;
}