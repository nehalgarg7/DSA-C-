/*
File Handling -> Opening, Creating, Performing operations and closing of files.

What do we need?
--> Our program runs in RAM{it wipes off(temporary memory)}
--> To store the data permanently, we need to store it in secondary memory in the form of files. (ROM{Permanent Memory})

Two Basic Operation to modify files--> Read and Write 
Two important operation which are pre-requites --> open and close
*/

//opening a file
/*
fopen(<filename or path>,<opening-mode>);// return FILE pointer.
*/

#include<stdio.h>

int main()
{
    FILE *ptr = fopen("nehal.txt","r"); //  r for read.
    char str[100];
    while(fgets(str,100,ptr)!=NULL) // here we use if instead of while to fetch first single line from file. and to fetch the whole string we use while only.
    {
        printf("%s",str);
    }
    
    //creating a FILE.

    FILE * p = fopen("pwskills.txt","w"); //create if not already created.

    //writing to a file
    /*
    To write line by line,
    we can use fputs(<character-array>,<file-pointer>)*/

    char str1[] ="Hi....I am NG.";
    fputs(str1,p);
    fclose(ptr);
    return 0;
}