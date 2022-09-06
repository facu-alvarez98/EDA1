#include <stdio.h>
#include <stdlib.h>

struct   info{
                unsigned char cerrado:01;
                unsigned char ;
                unsigned char;
                unsigned char;
};

union todo{
            struct info ventanas;
            short valorRes;
};


int main(void)
{
    union todo ventanas;

    printf("%c",ventanas.ventanas.cerrado);






    return 0;
}
