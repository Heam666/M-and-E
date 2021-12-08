#include<stdio.h> // Header file

int If_File_exists(const char *path); // to check file exixtence
int file_found(const char *new_path); // if file found
int file_not_found(const char *new_path); // if file not found

int main() // Main block
{
    char path[100];
    printf("Enter the source file:");
    scanf("%s", path);  // path for the file
    If_File_exists(path);

    return 0;
}
/* for check of file exixtence*/
int If_File_exists(const char *path)
{
    char new_path[500];// for the purpose of creation of log file
    printf("Enter log path:");
    //new_path="cd /opt/file.txt";
    scanf("%s", new_path);// takeing input for the log file.
    FILE *fptr=fopen(path, "r");// file operation to read the file.

    if(fptr == NULL)// if file not found
    {
        printf("File not found\n");
        file_not_found(new_path);// lof  creation for the  file not found
        //char new_path[100];

        return 0;
    }
    printf("File found\n");
    fclose(fptr);
    file_found(new_path);// log creation if the file found.
    return 1;
}

int file_found(const char *new_path)// log creation funtion if file found
{
    FILE *fptr=fopen(new_path, "a");
    fprintf(fptr, "%s"," File found\n");
    fclose(fptr);
    return 0;
}

int file_not_found(const char *new_path) // log creation function if file not found.
{
     FILE *fptr=fopen(new_path, "a");
    fprintf(fptr, "%s"," \nFile not found\n");
    fclose(fptr);
    return 0;

}