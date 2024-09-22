#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

int main(){
    uint8_t flag = 0b01010101;
    bool MDStatus[5] = {
      (bool)(0b00000001 & flag),
      (bool)(0b00000010 & flag),
      (bool)(0b00000100 & flag),
      (bool)(0b00001000 & flag),
      (bool)(0b00010000 & flag),
    };
    for(int i = 0; i < 5; i++){
        printf("%d\n",MDStatus[i]);
    }
}