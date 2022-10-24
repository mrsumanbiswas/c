#include <stdio.h>
#include <string.h>

#define MODE "debug"

void analyse(int , char *[]);
void gen_file(int , char[]);

int main(int argc, char  *argv[])
{
    (argc > 1) ? analyse(argc,argv):printf("Please give the items as argument.\n");

    // for debug purpuse only
    if (MODE == "debug")
    if (argc > 1)
    {
        for (int i = 1; i < argc; i++)
        {
            printf("%s\n", argv[i]);
        }        
    } else{
        printf("%d\n", argc);
    }

    return 0;
}



// analyse the words || this is the main logic 
void analyse(int len, char *words[]){
    for (int i = 1; i < len; i++)
    {
        printf("at %d -> %s\n",i,words[i]);
    }
    
}

// generates a `files.txt` 
void gen_file(int len, char words[]){

}