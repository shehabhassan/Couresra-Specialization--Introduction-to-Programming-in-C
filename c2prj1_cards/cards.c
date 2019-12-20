#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "cards.h"

void assert_card_valid(card_t c) {
  // it is the function of check the correct value.
  assert(c.value>=2);
  assert(c.value<=VALUE_ACE);
  assert(c.value!=0);
  //it is the function of check the correct value.
  assert(c.suit>NUM_SUITS);
  assert(c.suit!=0);
  // condition to check the correct value. 
  if(c.value <2 || c.value>VALUE_ACE){
    printf("error with value");
  }
  if(c.suit<NUM_SUITS || c.suit==0){
    printf("error with suit");
  }
}

const char * ranking_to_string(hand_ranking_t r) {
  // switch case is return the text replacments.
  switch(r){
    case STRAIGHT_FLUSH:    return "SRAIGHT_FLUSH";   break;
    case FOUR_OF_A_KIND:    return "FOUR_OF_A_KIND";  break; 
    case FULL_HOUSE:        return "FULL_HOUSE";      break;
    case STRAIGHT:          return "SRAIGHT";         break;
    case THREE_OF_A_KIND:   return "THREE_OF_A_KIND"; break;
    case TWO_PAIR:          return "TWO_PAIR";        break;
    case PAIR:              return "PAIR";            break;
    case NOTHING:           return "NOTHING";         break;
    case FLUSH:             return "FLUSH";           break;     
  default: return "?";
  }
   return "";
}
char value_letter(card_t c){
  // this part is represenet the number to charctar.  
  if(c.value>=2 && c.value<=9){
    return c.value +'0';
  }else {
    // represent value of 4 powerful cards to letter.
    switch(c.value){
    case VALUE_ACE:   return 'A'; break;
    case VALUE_KING:  return 'K'; break;
    case VALUE_QUEEN: return 'Q'; break;
    case VALUE_JACK:  return 'J'; break;    
    case 10:          return '0'; break;
  default: return '?'; 
  }
  }
  return c.value; 
}
char suit_letter(card_t c) {
  // represent name of suit to letters by switch case.
  switch (c.suit){
  case SPADES:   return 's'; break;
  case HEARTS:   return 'h'; break;
  case DIAMONDS: return 'd'; break;
  case CLUBS:    return 'c'; break;
  default: return '?';
  }
  return c.suit;
}
void print_card(card_t c) {
  
  printf("%c%c",value_letter(c),suit_letter(c)); 
}

card_t card_from_letters(char value_let, char suit_let) {
      card_t temp;
      if(temp.value>='0' || temp.value<='9'){
	temp.value-='0';
      temp.suit  = suit_let ;
      temp.value = value_let;
      }
  //check the value is in the range .
      assert_card_valid(temp);
  //puts the value in two functions .
      temp.suit = suit_letter(temp);
      temp.value = value_letter(temp);
      return temp; } 
card_t card_from_num(unsigned c) {
  card_t temp;
  temp.value = c%13 +1;
  temp.suit = c/13;
  return temp;
}
