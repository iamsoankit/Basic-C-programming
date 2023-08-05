#include <arpa/inet.h>
#include <stdio.h>
#include <stdbool.h>
#include<string.h>
void print_bytes(int num) {

    unsigned char* byte_ptr = (unsigned char*)&num;
    printf("---------------------------------------\n Memory Representation Of The Number\n---------------------------------------\n");
    printf("Memory Address \t Value:\n");
    for (int i = 0; i < sizeof(int); i++) {
        printf("%p -> %d\n", &byte_ptr[i], byte_ptr[i]); 
    }
}
int main(int argc,char *argv[])
{
	char ip[]="";//character adress that holds ip adress
	 strcpy(ip,argv[1]);
	 uint32_t num1 = inet_addr(ip);
    printf("\n");
    print_bytes(num1);
    char p1[]="";
    strcpy(p1,argv[2]);
	 uint32_t num2 = inet_addr(p1);
    printf("\n");
    print_bytes(num2);
}
