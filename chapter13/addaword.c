#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 41

int main(void){
    FILE * fp;
    char words[MAX];

    if ( (fp = fopen("wordy", "a+")) == NULL){
        fprintf(stdout, "FileOpenError: Cannot open file wordy");
        exit(EXIT_FAILURE);
    }

    puts("Enter words to add to the files; press the # or enter at the beginning of a line to terminate.");
    while (fscanf(stdin, "%40s", words) == 1 && words[0] != '\n' && words[0] != '#')
        fprintf(fp, "%s", words);

    puts("File Contents:");
    rewind(fp);
    while (fscanf(fp, "%40s", words) == 1)
        puts(words);
    puts("Done.");

    if (fclose(fp) != 0)
        fprintf(stderr, "FileCloseError: Could not close file.");
    
    return 0;
}