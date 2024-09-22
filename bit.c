#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

void main(){
    uint8_t data[2] = {0b00000001,0b00000000};
    printf("%d",data[0]<<4|data[1]);\
    printf("%d",1|2);
}