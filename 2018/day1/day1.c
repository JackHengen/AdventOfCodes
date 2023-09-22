#include <stdio.h>
#include <stdlib.h>

void firstStar()
{
    FILE *inp = fopen("inp.txt", "r");
    int inputStatus = 1;
    int total = 0;
    while (inputStatus == 1)
    {
        int singleCharge;
        inputStatus = fscanf(inp, "%d", &singleCharge);
        if (inputStatus != 1)
        {
            break;
        }
        total += singleCharge;
        printf("singleCharge: %d, totalCharge: %d\n", singleCharge, total);
    }

    fclose(inp);
}

void secondStar()
{
    FILE *inp = fopen("inp.txt", "r");
    int inputStatus = 1;
    int sizeOfArr = 0;
    int *inputCharges = NULL;
    int index = 0;
    // put all of the ints from the file into the array
    while (inputStatus == 1)
    {
        int temp;
        inputStatus = fscanf(inp, "%d", &temp);
        if (inputStatus != 1)
        {
            break;
        }
        else
        {
            sizeOfArr += sizeof(int);
            inputCharges = (int *)realloc(inputCharges, sizeOfArr);
            inputCharges[index] = temp;
            index++;
        }
    }
    fclose(inp);

    int length = index;
    index = 0;

    int total = 0;      // this array holds the current total
    int *totals = NULL; // this array holds each total in the past

    int iters = 0; // how many times the while loop has occured NOT THE INDEX OF THE INTS IN THE FILE ARRAY - the index of the totals array
    int match = 0;

    while (match == 0)
    {
        iters++;
        totals = (int *)realloc(totals, iters * sizeof(int));
        total += inputCharges[index];
        totals[iters - 1] = total;

        for (int i = 0; i < iters - 1; i++) // check current total with all past totals
        {
            if (total == totals[i])
            {
                printf("The first frequency which occured twice was: %d==%d", total, totals[i]);
                match = 1;
            }
        }
        if (index == length - 1) // if at the end of the array with the ints from the file, go back to the beggining
        {
            index = 0;
        }
        else
        {
            index++;
        }
    }
}

int main()
{
    // firstStar();
    secondStar();
}
