#include <stdio.h>
int main() 
{
	printf("**Program to Delete a File**\n");
	printf("Name: Arnab Mondal, Class: MCA1A, Roll: 11\n");
    char filename[100];
    printf("Enter the name of the file to delete: ");
    scanf("%s", filename);
    if (remove(filename) == 0) {
        printf("File deleted successfully.\n");
    } 
	else
        printf("Error deleting the file.\n");
    return 0;
}
