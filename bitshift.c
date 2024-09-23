#include <stdio.h>
#include <stdint.h>
void main(){
    uint8_t Resivernm = 0b00000110; //3bit
    uint8_t length = 0b00000011; //2bit
    uint8_t setup = 0b00000001; //1bit
    uint8_t flag = 0b00000001; //1bit
    uint8_t stop = 0b00000000; //1bit

    uint8_t sendmsg = (flag << 7|Resivernm << 4|length << 2|setup << 1|stop);
    /*
    sendmsg += Resivernm << 4;
    sendmsg += length << 2;
    sendmsg += setup << 1;
    sendmsg += stop;
    */
    printf("%d\n",flag);
    printf("%d\n",Resivernm);
    printf("%d\n",length);
    printf("%d\n",setup);
    printf("%d\n",stop);
    printf("%d",sendmsg);
}