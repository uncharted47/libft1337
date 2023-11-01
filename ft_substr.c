
#include <stdio.h>
#include <stdlib.h>
char* substr(const char *src, int m, int n)
{
    // récupère la longueur de la string de destination
    int len = n - m;

    // alloue (len + 1) caractères pour la destination (+1 pour un caractère nul supplémentaire)
    char *dest = (char*)malloc(sizeof(char) * (len + 1));

    // extrait les caractères entre le m'th et le n'th index de la string source
    // et les copier dans la string de destination
    for (int i = m; i < n && (*(src + i) != '\0'); i++)
    {
        *dest = *(src + i);
        dest++;
    }

    // null-termine la string de destination
    *dest = '\0';

    // renvoie la string de destination
    return dest - len;
}

// Implémentation de la fonction `substr()` en C
int main()
{
    char src[] = "substr function Implementation";

    int m = 7;
    int n = 12;

    char* dest = substr(src, m, n);

    printf("%s\n", dest);

    return 0;
}
