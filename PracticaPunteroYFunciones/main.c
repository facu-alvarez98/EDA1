#include <stdio.h>
#include <stdlib.h>


short cambio (short letra);



int main(void)
{
    short letraIn;
    char letraOut;
    short *p;
    short *p2;
    p=&letraOut;
    p2=&letraIn;


        printf("ingrese una letra: ");
        scanf("%c",&letraOut);
        letraIn=letraOut;

        *p=cambio(*p2);

        printf("%c\n\n",letraOut);

        return 0;
}

short cambio (short letra){

    if(letra>='A' && letra<='Z'){
        letra=letra+32;
    }else{
        if(letra>='a' && letra<='z'){
                letra=letra-32;

        }else{
            printf("tamoas mal");
        }
    }

    return letra;

}


