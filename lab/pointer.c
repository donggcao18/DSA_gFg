#include <stdio.h>
#include <string.h>
#include <time.h>


int main ()
{
    char article[5][100] = {"a", "an", "the"};
    char verb[5][100] = {"jumped", "walked", "hit", "dance"};
    char noun[5][100] = {"boy", "girl", "dog", "cate", "elderly people"};
    char prepposition[5][100] = {"in", "on", "at", "over", "under"};
    char place[5][100] = {"the town", "the city", "home", "the bed", "the tree"};

    srand(time(NULL));   // Initialization, should only be called once.
    int random = rand();  
    int i;
    for (i=0; i<10; i++)
    {
        printf ("%s", article[random]);
        printf ("\n");
    }

    
    return 0;
}