#include <stdio.h>
#include <stdint.h>

#define KEY_LENGTH 128

uint8_t key_example[KEY_LENGTH/8];

uint8_t * KeyExpansion(uint8_t *);

uint8_t * AddRoundKey(uint8_t *);

uint8_t * SubBytes(uint8_t *);

uint8_t * ShiftRows(uint8_t *);

uint8_t * MixColums(uint8_t *);

uint8_t * KeyExpantion(uint8_t *){
    //4 Words for AES-128 bit
    uint8_t n_words_in_key = 4;
    //11 Round keys for AES-128 bit
    uint8_t r_number_round_keys = 11;

}

uint8_t * AddRoundKey(uint8_t *){

}

uint8_t * SubBytes(uint8_t *){

}

uint8_t * ShiftRows(uint8_t *){

}

uint8_t * MixColums(uint8_t *){

}

int main(void){
    
}