#include <stdio.h>

int main(int argc, char const *argv[])
{

    int i = 0;

    //go through each string in argv
    //why i am skipping argv[0]

    for (i = 1; i < argc; i++)
    {
        printf("arg %d: %s\n", i ,argv[i]);
    }
    
    char *states [] = {"California", "Oregon", "Washinton", "Texas"};

    int num_states = 4;

    for (i = 0; i < num_states; i++)
    {
        printf("state %d: %s\n",i,states[i]);
    }
    
    return 0;
}
