#include <stdio.h>

int main(void)
{
    int anno;
    printf("Inserisci un anno a tua scelta: ");
    scanf("%d", &anno);

    if ((anno % 4 == 0 && anno % 100 != 0) || (anno % 400 == 0)) {
        printf("%d e un anno bisestile.\n", anno);}
    else {
        printf("%d non e un anno bisestile.\n", anno);
    }
    return 0;
}
