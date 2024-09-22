#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

void main(){
    uint8_t data = 238;
    uint8_t flag = (0b10000000 & data)>>7;
    uint8_t Resivernm = (0b01110000 & data)>>4; //3bit
    uint8_t length = (0b00001100 & data)>>2; //2bit
    uint8_t setup = (0b00000010 & data)>>1; //1bit
    uint8_t stop = 0b00000001 & data; //1bit
    printf("flag = %d\n",flag);
    printf("Resivernm = %d\n",Resivernm);
    printf("length = %d\n",length);
    printf("setup = %d\n",setup);
    printf("stop = %d\n",stop);
}