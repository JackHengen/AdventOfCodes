#include <stdlib.h>
#include <stdio.h>
#define maxX 1000
#define maxY 1000

void **getLocationMap(char ***varToSetLocationMap)
{
    FILE *input = fopen("input.txt", "r");
    int gettingData = 1;

    char **locationMapping = malloc(sizeof(char *) * maxY);
    for (int i = 0; i < maxY; i++)
    {
        locationMapping[i] = calloc(maxX, sizeof(char));
    }

    while (gettingData)
    {
        int id;
        int fromLeft;
        int fromTop;
        int width;
        int height;
        int numGotten = fscanf(input, "#%d @ %d,%d: %dx%d\n", &id, &fromLeft, &fromTop, &width, &height);
        if (numGotten == 5)
        {
            for (int i = 0; i < height; i++)
            {
                for (int j = 0; j < width; j++)
                {
                    locationMapping[fromTop + i][fromLeft + j]++;
                }
            }
        }
        else
        {
            gettingData = 0;
            fclose(input);
        }
    }
    *varToSetLocationMap = locationMapping;
}

int locationMapOverlaps(char **locationMap)
{
    int numOfOverlaps = 0;
    for (int i = 0; i < maxY; i++)
    {
        for (int j = 0; j < maxX; j++)
        {
            if ((int)locationMap[i][j] != 0 && (int)locationMap[i][j] != 1)
            {
                numOfOverlaps++;
            }
            printf("%d", locationMap[i][j]);
        }
        puts("\n");
    }
    return numOfOverlaps;
}

int findTheId(char **locationMap)
{
    FILE *input = fopen("input.txt", "r");
    int gettingData = 1;
    while (gettingData)
    {
        int id;
        int fromLeft;
        int fromTop;
        int width;
        int height;
        int numGotten = fscanf(input, "#%d @ %d,%d: %dx%d\n", &id, &fromLeft, &fromTop, &width, &height);
        if (numGotten == 5)
        {
            int hasOverlap = 0;
            for (int i = 0; i < height; i++)
            {
                if (hasOverlap)
                {
                    break;
                }
                for (int j = 0; j < width; j++)
                {
                    if (hasOverlap)
                    {
                        break;
                    }
                    else if (locationMap[fromTop + i][fromLeft + j] > 1)
                    {
                        hasOverlap = 1;
                    }
                }
            }
            if (!hasOverlap)
            {
                return id;
            }
        }
    }
}

int main()
{
    char **locationMap;
    getLocationMap(&locationMap);
    printf("The number of overlaps is %d", locationMapOverlaps(locationMap));
    printf("The section with no overlaps is %d", findTheId(locationMap));
}