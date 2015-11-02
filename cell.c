/* my first project with c


*/
#include <cell.c>
#include <stdio.h>
#include <dNAmodeling.h>

main()
{
    int x;
    for (x=0; x<10;x++)
    {
        if (x%2==0){
            printf("Hello World");
        }
        if (x%5==0){
            printf("bar");
        }else{
            printf("foo");
        }
        getchar();
    }
        char* itema[8]= "pokeball";
        for (x=0; x<strlen(itema);x++)
        {
            printf("%c");
        }
        printf("%s\n" );
        getchar();
}
