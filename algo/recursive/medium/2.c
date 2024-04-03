#include <stdio.h>
// solving the problm hanoi tower using recursive funstion
// in this case, not consider the condition that the bigger one must be lied on the smaller one

void hanoi_tower (int disk, char original_rod, char destination, char aux_rod)
{
    if (disk == 1)
    {
        printf ("Moving disk %d from %c to %c\n", disk, original_rod, destination);
        return;
    }
    printf ("Moving  disk %d from %c to %c\n", disk, original_rod, aux_rod);
    hanoi_tower (disk-1, original_rod, destination,aux_rod);

    printf ("Moving  disk %d from %c to %c\n", disk, aux_rod, destination);

}

int main ()
{
    int disk = 5;
    char ori = 'A';
    char des = 'C';
    char aux = 'B';
    hanoi_tower (disk, ori, des, aux);
    return 0;
}