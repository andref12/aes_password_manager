#include "aes_128_key_expantion.h"

uint8_t KeyExpantion(word * key){
    //4 Words for AES-128 bit
    uint8_t n_words_in_key = 4;
    //11 Round keys for AES-128 bit
    uint8_t r_number_round_keys = 11;

}

word * RotWord(word * single_word){
    word * rot_word;
    rot_word = malloc(sizeof(rot_word));
    rot_word->byte1 = single_word->byte2;
    rot_word->byte2 = single_word->byte3;
    rot_word->byte3 = single_word->byte4;
    rot_word->byte4 = single_word->byte1;
    rot_word->next_word = NULL;
    return rot_word;    
}

word * SubWord(word * single_word);
