#include <stdio.h>
#include <stdint.h>
#include "aes_128_bit.h"

#define KEY_LENGTH 128

uint8_t key_example[KEY_LENGTH/8] = {0};

int main(void){
    uint8_t i = 0;
    while(i<(KEY_LENGTH/8)){
        printf("%u",key_example[i]);
        i++;
    }
    
}

uint8_t * AddRoundKey(uint8_t *){

}

uint8_t * SubBytes(uint8_t *){

}

uint8_t * ShiftRows(uint8_t *){

}

uint8_t * MixColums(uint8_t *){

}