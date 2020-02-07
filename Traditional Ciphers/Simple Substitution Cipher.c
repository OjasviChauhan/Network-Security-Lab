#include<stdio.h>
#include<string.h>
int main()
{
    char A[100],x;
    printf("Enter Cipher Text : ");
    scanf("%s",A);
    char Key[26]={'p','h','q','g','i','u','m','e','a','y','l','n','o','f','d','x','j','k','r','c','v','s','t','z','w','b'};
    int i,j;
    for(i=0;i<strlen(A);i++){
        for(j=0;j<26;j++){
            if(A[i]==Key[j]){
                x=j;
            }
        }
        A[i]='a'+x;
    }
    printf("Plain text : ");
    printf("%s",A);
}
