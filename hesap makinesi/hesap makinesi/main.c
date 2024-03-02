//
//  main.c
//  hesap makinesi
//
//  Created by Rabia Cırık on 12.11.2023.
//

#include <stdio.h>

int main() {
    
    float sayi1,sayi2,sonuç;
    char işlem;
    
    printf ("birinci sayıyı giriniz:");
    scanf("%f",&sayi1);
    
    printf("yapmak istediğiniz işlemi seçiniz:");
    scanf("%s",&işlem);
    
    
    printf("ikinci sayıyı giriniz:");
    scanf("%f",&sayi2);
    
    
    
    if(işlem == '+')
    {
        printf("%.2lf\n",sayi1+sayi2);
    }
    
   else if(işlem == '-')
    {
        sonuç=sayi1-sayi2;
        printf("%.2lf\n",sonuç);
    }
    
    
    else if(işlem == '*')
    {
        printf("%.2lf\n",sayi1*sayi2);
    }
    
    else if(işlem == '/')
    {
        printf("%.2lf\n",sayi1/sayi2);
    }
    else{
        printf("hatalı bir sembol ya da sayı girdiniz\n");
    }
    
    
    

    return 0;
}
