#include <stdio.h>
#include <string.h>
int main(){
    int i,j,k,flag=0,l;
    char matrix[26][26];
    char key[20];
    char Gkey[50];
    char Pt[50];
    char Ct[50];
    printf("Enter the plain text: ");
    gets(Pt);
    printf("Enter the Key: ");
    gets(key);
    for(i=0;i<strlen(Pt);i++)
        Gkey[i] = key[i%strlen(key)];
        printf("Generated key would be: ");
    for(i=0;i<strlen(Gkey);i++)
        printf("%c",Gkey[i]);

    char alphabets[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    for(i=0;i<26;i++){
        for(j=0;j<26;j++){
         matrix[i][j] = alphabets[(i+j)%26];
        }
    }
    printf("\nMatrix of vigenere cipher is \n");
    for(i=0;i<26;i++){
        for(j=0;j<26;j++){
        	printf("%c  ",matrix[i][j]);
        }
        printf("\n");
    }

    i=0;
    while(i<strlen(Pt)){
    for(k=flag;k<strlen(Gkey);k++){
        for(j=0;j<26;j++){
            if(Gkey[k] == matrix[0][j])
            break;
        }
    break;
    }
       for(k=flag;k<strlen(Pt);k++){
        for(l=0;l<26;l++){
            if(Pt[k] == matrix[l][0])
            break;
        }
    break;
    }
    Ct[i] = matrix[l][j];
    i++; flag++;
    }
    printf("Cipher text would be: ");
    for(i=0;i<strlen(Pt);i++)
        printf("%c",Ct[i]);
    return 0;
}
