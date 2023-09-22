#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char puzzleInput[] = "luojygedpvsthptkxiwnaorzmq\n\
lucjqgedppsbhftkxiwnaorlmq\n\
lucjmgefpvsbhftkxiwnaorziq\n\
lucjvgedpvsbxftkxiwpaorzmq\n\
lrcjygedjvmbhftkxiwnaorzmq\n\
lucjygedpvsbhftkxiwnootzmu\n\
eucjygedpvsbhftbxiwnaorzfq\n\
lulnygedpvsbhftkxrwnaorzmq\n\
lucsygedpvsohftkxqwnaorzmq\n\
lucjyaedpvsnhftkxiwnaorzyq\n\
lunjygedpvsohftkxiwnaorzmb\n\
lucjxgedpvsbhrtkxiwnamrzmq\n\
lucjygevpvsbhftkxcwnaorzma\n\
lucjbgedpvsbhftrxiwnaoazmq\n\
llcjygkdpvhbhftkxiwnaorzmq\n\
lmcjygxdpvsbhftkxswnaorzmq\n\
lucpygedpvsbhftkxiwraorzmc\n\
lucjbgrdpvsblftkxiwnaorzmq\n\
lucjfgedpvsbhftkxiwnaurzmv\n\
lucjygenpvsbhytkxiwnaorgmq\n\
luqjyredsvsbhftkxiwnaorzmq\n\
lucjygedpvavhftkxiwnaorumq\n\
gucjygedpvsbhkxkxiwnaorzmq\n\
lucjygedpvsbhftkxlwnaordcq\n\
lucjygedpvibhfqkxiwnaorzmm\n\
lucjegedpvsbaftkxewnaorzmq\n\
kucjygeqpvsbhfokxiwnaorzmq\n\
lugjygedwvsbhftkxiwnatrzmq\n\
lucjygedqvsbhftdxiwnayrzmq\n\
lucjygekpvsbuftkxiwnaqrzmq\n\
lucjygedpvsbhfbkxiwnaoozdq\n\
lscjygedpvzchftkxiwnaorzmq\n\
luckygedpvsbxftkxiwnaorvmq\n\
luyjygedgvsbhptkxiwnaorzmq\n\
lmcjygedpvsbhfckxiwnaodzmq\n\
lucmygedwvybhftkxiwnaorzmq\n\
lgcjhgedavsbhftkxiwnaorzmq\n\
lucjugedpvsbhftkxiwmaoozmq\n\
lucjygedpvybhftkxkwnaorumq\n\
lucjygedpvzbhfakxiwnaorzpq\n\
lucjygedpvsbhftyxzwnajrzmq\n\
lucjygedpvsdhfakxiwnoorzmq\n\
luyjygeopvhbhftkxiwnaorzmq\n\
lucjygadpvsbhntkxiwnaorzmx\n\
lucjygedzvsbhftkiiwuaorzmq\n\
sucjygodpvsbhftkxiwuaorzmq\n\
euijygydpvsbhftkxiwnaorzmq\n\
lucjlgeduvsbhftkxicnaorzmq\n\
lucjdgedpvsbhfgkxiwnhorzmq\n\
lucjymedpvsbhotkxiqnaorzmq\n\
lucjygmdpvsbhftkxywnairzmq\n\
lucjggedpvsbhfxkxiqnaorzmq\n\
sucjygedpvsbhftkxiwnaorjmv\n\
lucjlgedpvsbhftkxiwnairzmg\n\
lucjygedppubhftkxijnaorzmq\n\
lucjyxedpvsvhftkxlwnaorzmq\n\
lucjygedpvxbhftkfiwyaorzmq\n\
lucjygedposbhftkniwnaorzmw\n\
lucjygewpvsbhftgxiwnavrzmq\n\
lucjynedpvsbmftkaiwnaorzmq\n\
lucjyhedpvzbhftkxiwncorzmq\n\
lucjygedpvsbhfikpiwnaoezmq\n\
lupjypedpvsbhftkjiwnaorzmq\n\
lucjygudpvsbhfwkxivnaorzmq\n\
lucjygrdpvsbhatkxzwnaorzmq\n\
lucjbgmdpvsbhftkxihnaorzmq\n\
lucjmgedpvpbhftkxiwnaorcmq\n\
lucjygedpvskhfukmiwnaorzmq\n\
lucjygedgvsbhftkxiwnvprzmq\n\
lucjzgedppsbhytkxiwnaorzmq\n\
lfcjypedpvsbhftrxiwnaorzmq\n\
lucjyqldphsbhftkxiwnaorzmq\n\
lucjygedpvsbhftzxewnaorzqq\n\
lucjygeapvsbhftkxiinoorzmq\n\
lucjygedpvszhftguiwnaorzmq\n\
luojygedpvsbhftkxawnaornmq\n\
lucjygedpcsboetkxiwnaorzmq\n\
lufjygedpvfbhftaxiwnaorzmq\n\
luciygedpvsbhftkxhwaaorzmq\n\
lucjygedpvnbhftkaiwnaorzmc\n\
lucjygedpvsbhftkxiwcaorbdq\n\
lucjygelpvsbhftaxiwsaorzmq\n\
lujjygedpssbhftkxiwnaorzmr\n\
ludjygedpvsbhftkxiynaorzmj\n\
lukjygeedvsbhftkxiwnaorzmq\n\
lucjqpedpvsbhftkxiwnaozzmq\n\
jucjygedpvsbhftkxgwnaorqmq\n\
llwjygedpvsbhetkxiwnaorzmq\n\
rucjygedpvsbhftkxiwndorymq\n\
lucjygedpvsbhftvxswnaorwmq\n\
lucjygerpvsbhfykxiwnaormmq\n\
lucjynedpvsbhftkxijnaorziq\n\
ljcjygedpvrbhftkeiwnaorzmq\n\
lucjygedpnsbhftkxiwhaornmq\n\
lucjygadpvsbhftkxibnaorzqq\n\
lucjqgedpvsihftkxiwnaorzdq\n\
lucjygedpvsqhfttjiwnaorzmq\n\
llcjygedsvsbhftkxiwwaorzmq\n\
lfckygedpvsbhftkxiunaorzmq\n\
lucjyeedpdsbhftkxiwnaotzmq\n\
lucjygedpvsbhftkoiwnaoqzcq\n\
huwjvgedpvsbhftkxiwnaorzmq\n\
lucjygldpvsbdhtkxiwnaorzmq\n\
lycxygedpvsbhftmxiwnaorzmq\n\
lucjygedpvsbhftyxianvorzmq\n\
lucuygedpdsbhqtkxiwnaorzmq\n\
lucjyggdpvsbhftkxiwnavremq\n\
lucjyggdpvsbkftkxiwnaorbmq\n\
luchyqedpvsbhftixiwnaorzmq\n\
lpcnygedpvsbhftkxzwnaorzmq\n\
lucjygedpvsihftkxiwfaortmq\n\
lucjygvdpvsbhgtkxiwnamrzmq\n\
lucjygodpvrbhqtkxiwnaorzmq\n\
lucjygedpfsbhftkxipnaorzma\n\
lucjygedpvsbhftkxpcjaorzmq\n\
lucjygodbmsbhftkxiwnaorzmq\n\
lucjygedpvsbhftkxipnaogzmb\n\
luxjygjdpvsbhltkxiwnaorzmq\n\
lucxygedpvsbhftkxzwnaorjmq\n\
luajygedpvsbhftzxiwaaorzmq\n\
lhcjygedpvsqhftfxiwnaorzmq\n\
lucjygecphsbhftkxiwnaprzmq\n\
lucjygedpvsbhptkxifnaorqmq\n\
lucjygedpvichftkpiwnaorzmq\n\
lucjygedpcsbhstkxswnaorzmq\n\
kucjygedpvsbhftkxiwbyorzmq\n\
lfpjxgedpvsbhftkxiwnaorzmq\n\
lucjytldpvsbhftkxiwdaorzmq\n\
lufjygedpvfbhftbxiwnaorzmq\n\
lucjygebpvgbhftkxipnaorzmq\n\
luujygedpvdbhftkxiwnaorzmd\n\
lucjygedpvsbhfbyxwwnaorzmq\n\
lucjygedpvsbhftkxiwnaoqpmw\n\
qucgygedpvsbhftkxiwnaortmq\n\
ludjtgedpvsbhftkxiunaorzmq\n\
lucjyiedovsbhftkxiwjaorzmq\n\
lucjygedpysbjftoxiwnaorzmq\n\
lumjygedpvsbuftkxiknaorzmq\n\
lucjygedpvsbhfokxgonaorzmq\n\
lucjygeqpvsbhftkfiwnaorzeq\n\
lucjygedpvskhftkxiwntorkmq\n\
luujygedpvsbhftkxiwraorzmt\n\
lucwygedpvsbjftkxiwnaorzmj\n\
jucjyfedcvsbhftkxiwnaorzmq\n\
luujygedpnsehftkxiwnaorzmq\n\
lucjygedpvszhfckxiwnaorzmi\n\
lucjyredpvsbzftkpiwnaorzmq\n\
lucjygedpvsbwfgkxiwnaorzoq\n\
lucjygedpvgbhftkpiwnaorzms\n\
lucjygedpvjbhftkxzwnaoizmq\n\
vucjycedpvsbhftkxiwfaorzmq\n\
luawygeapvsbhftkxiwnaorzmq\n\
lucjygetpvsbhftkxiwnaafzmq\n\
lucjvgedpvsbhftkxywnavrzmq\n\
luolygedpvsbgftkxiwnaorzmq\n\
likjygedpvsbhftkxiwnabrzmq\n\
lucjygedovsbhftkxirpaorzmq\n\
lucjygedphsshftkxqwnaorzmq\n\
uuqjygewpvsbhftkxiwnaorzmq\n\
lucjygedcvsbhftkxiwoarrzmq\n\
lucnygedpvsbhfakxiwnaorzms\n\
lucjygedpvsbhntkxiwnawrzmb\n\
lucjygedpvsblfxkxivnaorzmq\n\
lucjygedpvsghftkxiwnaawzmq\n\
yucjygedpgsbhftkxiwnaorzbq\n\
lucjyweapvsbhftkxiwnaoezmq\n\
lucjygevpvsbyftcxiwnaorzmq\n\
luejygedovsbhftkxiwnqorzmq\n\
lucjyqedpvsbhfbkxiwnaorzms\n\
lucjypedpvsbhftwxiwnhorzmq\n\
lucjygedpvsbhmtkviwxaorzmq\n\
lucjogedpvpbhftkxiwnaorqmq\n\
lucjygedpvsbhztkxkwnaoazmq\n\
lucjyaedpvsbcftkxiwnaorzhq\n\
lucjygbdpvkbhftkxiznaorzmq\n\
lucpygedpvzbhftkxfwnaorzmq\n\
lucjmgedpcsbhftkxiwnaoezmq\n\
lucjygedyvsbbftkxiwnnorzmq\n\
lucjyyedpvsbhftuxiwnaonzmq\n\
lucjygfdpvsbhutkxiwnaorzmt\n\
uccjygedpvschftkxiwnaorzmq\n\
lusjygedpvbbhqtkxiwnaorzmq\n\
ducuygedpvsbhftkxiwnaorzyq\n\
lucjygkdvwsbhftkxiwnaorzmq\n\
cucjyyedpvsbhftkxiwnaerzmq\n\
lucjygedavsbhftkxiwnkorzbq\n\
lucjygedmvsyhftkxiwiaorzmq\n\
lucjygeipvsbhfpkxiwnaorzpq\n\
vucjugedvvsbhftkxiwnaorzmq\n\
lucjyzedpvsbhftkxpwnaoozmq\n\
lucjygedpvgbhftkxiwtaorzqq\n\
lecjygedpvcwhftkxiwnaorzmq\n\
lucjyghdpvsbhfcyxiwnaorzmq\n\
lucjygedpvesqftkxiwnaorzmq\n\
lucjyjehpvsbhftbxiwnaorzmq\n\
lucjygedpvtbhdtkxignaorzmq\n\
lucjygxdpgsbhftkxivnaorzmq\n\
lucjygvdpvsbhftkpiwnaorzqq\n\
lucjysedpvsbhftkxiwnalrzmc\n\
lucjygedpvkbhjtkxiwnaorsmq\n\
lucjygedpvsbvfgkxiwnaerzmq\n\
lucjygedpvsihftkxilnaorzmu\n\
lvcvygndpvsbhftkxiwnaorzmq\n\
lucjysedpqsbhftkxiwnaordmq\n\
lucsygeypvsbhftkwiwnaorzmq\n\
lucjygewpotbhftkxiwnaorzmq\n\
lucjysedpvsbhftkxiwnanrzmv\n\
lucjygedpvsbhutkxiwnaoplmq\n\
wucjygedpvsqbftkxiwnaorzmq\n\
lacjygeepvsbhftkxiwnjorzmq\n\
lucjygedpusyhftkxicnaorzmq\n\
qucjyredpvsbhftkxiwnworzmq\n\
lucjygedevsbhftkgiwnayrzmq\n\
lucjygedpksbrftkliwnaorzmq\n\
lucjygedpvsbhfgkxisnaorzeq\n\
lucjygedpvhdhftkeiwnaorzmq\n\
lucjsgedpvsboftkxiwnaorumq\n\
luctygedpvsbhftouiwnaorzmq\n\
lucjygedpvsjhfukjiwnaorzmq\n\
lucjagrepvsbhftkxiwnaorzmq\n\
lucjkgerpvsbhftkxiwnairzmq\n\
turjygedpvsbnftkxiwnaorzmq\n\
lbcjygedpvsbhftkdpwnaorzmq\n\
lucpygedpvsbhftkxnwnoorzmq\n\
jucjygedpvsbhbtkxicnaorzmq\n\
lecjygedpvsbhftkriwnaogzmq\n\
licjyvcdpvsbhftkxiwnaorzmq\n\
lrcjygewpnsbhftkxiwnaorzmq\n\
ltcxygedpvlbhftkxiwnaorzmq\n\
luctygedpvhbhztkxiwnaorzmq\n\
lucwygedplsbhfakxiwnaorzmq\n\
lucjygedpnsbhftkxiwjaoezmq\n\
lucpygedptsbhftkxiwnaorzmo\n\
lucjygedpvibhqtkxiknaorzmq\n\
lucjwgqdpvrbhftkxiwnaorzmq\n\
lucjmgkdpvsbhftkxiwraorzmq\n\
lucjygwupvsbhftkxiznaorzmq\n\
lucjhgedpvobhftkxiwncorzmq\n\
lucjygedpvsbhftkxiwnaohtmj\n\
lucjygedpvsbeftkfiwnaorzyq\n\
lucjygcdpvsbpftkhiwnaorzmq\n\
lucjygedpmsbhftkxiwnkouzmq\n\
oucjygedpvsbyftkximnaorzmq\n\
lucjcgedpvsbhftkxywnforzmq\n\
lfcjygedfvsbdftkxiwnaorzmq\n\
ducjygedevsbhfttxiwnaorzmq\n\
ldcjdgedpvsbhftkxiwnavrzmq\n\
lucjymedmvsbhqtkxiwnaorzmq\n\
lucjygedpvabhftkxiwnasrlmq\n\
lucjygefpvsbhftkxmwnaorkmq";
int checkDiffLetters(char *str1, char *str2)
{
    int numOfDiff = 0;
    for (int i = 0; i < strlen(str1); i++)
    {
        if (!(str1[i] == str2[i]))
        {
            numOfDiff++;
        }
    }
    return numOfDiff;
}

char sameLetter(char *str1, char *str2)
{
    for (int i = 0; i < strlen(str1); i++)
    {
        if (str1[i] == str2[i])
        {
            return str1[i];
        }
    }
    return (char)0;
}

void firstStar()
{
    char *input = malloc(sizeof(puzzleInput));
    strcpy(input, puzzleInput);

    char delimiter = '\n';
    char *token = strtok(input, &delimiter);

    int doublesTotal = 0;
    int triplesTotal = 0;

    while (token != NULL)
    {
        char *singles = (char *)calloc(strlen(token), sizeof(char)); // sets all to null
        char *doubles = (char *)calloc(26, sizeof(char));
        char *triples = (char *)calloc(26, sizeof(char));

        for (int i = 0; i < strlen(token); i++)
        {
            int doubleMatch = 0;
            for (int j = 0; j < strlen(singles); j++)
            {
                if (token[i] == singles[j])
                {
                    int tripleMatch = 0;
                    for (int k = 0; k < strlen(doubles); k++)
                    {
                        if (token[i] == doubles[k])
                        {
                            triples[strlen(triples)] = token[i];
                            tripleMatch = 1;
                            break;
                        }
                    }
                    if (!tripleMatch)
                    {
                        doubles[strlen(doubles)] = token[i];
                        doubleMatch = 1;
                        break;
                    }
                }
            }
            if (!doubleMatch)
            {
                singles[strlen(singles)] = token[i];
            }
        }
        if (strlen(doubles) && strlen(doubles) != strlen(triples))
        {
            doublesTotal++;
        }
        if (strlen(triples))
        {
            triplesTotal++;
        }
        token = strtok(NULL, "\n");
        free(singles);
        free(doubles);
        free(triples);
    }

    printf("The number of doubles * triples =%d\n", triplesTotal * doublesTotal);
}

void secondStar()
{
    char *input = (char *)malloc(sizeof(puzzleInput));
    strcpy(input, puzzleInput);

    char delimiter = '\n';
    char *token = strtok(input, &delimiter);
    int numOfLines = 1;
    char **splitStrs = (char **)malloc(sizeof(char *) * numOfLines);
    splitStrs[numOfLines - 1] = token;
    while (token != NULL)
    {
        token = strtok(NULL, "\n");
        if (!(token == NULL))
        {
            numOfLines++;
            splitStrs = (char **)realloc(splitStrs, sizeof(char *) * numOfLines);
            splitStrs[numOfLines - 1] = token;
        }
    }

    for (int i = 0; i < numOfLines; i++)
    {
        for (int j = 0; j < numOfLines; j++)
        {
            if (checkDiffLetters(splitStrs[i], splitStrs[j]) == 1)
            {
                printf("The two in common are %s,%s.\nYou do the rest to remove the letter not in common", splitStrs[i], splitStrs[j]);
                return;
            }
        }
    }
}

int main()
{
    firstStar();
    secondStar();
}