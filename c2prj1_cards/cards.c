#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "cards.h"

void assert_card_valid(card_t c) {
  // it is the function of check the correct value.
  //assert(c.value>=2);
  //assert(c.value<=VALUE_ACE);
  //assert(c.value!=0);
  //it is the function of check the correct value.
  //assert(c.suit>NUM_SUITS);
  //assert(c.suit!=0);
  // condition to check the correct value. 
  if(c.value<2 || c.value>VALUE_ACE){
    printf("error with value");
  }
  if( c.suit==0){
    printf("error with suit");
  }
}

const char * ranking_to_string(hand_ranking_t r) {
  // switch case is return the text replacments.
  switch(r){
    case STRAIGHT_FLUSH:    return "SRAIGHT_FLUSH";   
    case FOUR_OF_A_KIND:    return "FOUR_OF_A_KIND";   
    case FULL_HOUSE:        return "FULL_HOUSE";      
    case STRAIGHT:          return "SRAIGHT";        
    case THREE_OF_A_KIND:   return "THREE_OF_A_KIND"; 
    case TWO_PAIR:          return "TWO_PAIR";        
    case PAIR:              return "PAIR";            
    case NOTHING:           return "NOTHING";         
    case FLUSH:             return "FLUSH";                
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
    case VALUE_ACE:   return 'A'; 
    case VALUE_KING:  return 'K'; 
    case VALUE_QUEEN: return 'Q'; 
    case VALUE_JACK:  return 'J';     
    case 10:          return '0'; 
  default: return '?'; 
  }
  }
  return c.value; 
}
char suit_letter(card_t c) {
  // represent name of suit to letters by switch case.
  switch (c.suit){
  case SPADES:   return 's'; 
  case HEARTS:   return 'h'; 
  case DIAMONDS: return 'd'; 
  case CLUBS:    return 'c'; 
  default: return '?';
  }
  return c.suit;
}
void print_card(card_t c) {  
  printf("%c%c",c.value,c.suit); 
}
card_t card_from_letters(char value_let, char suit_let) {
      card_t temp;
     assert_card_valid(temp);    
  //check the value is in the range .
     /* temp.value = value_let ;
	temp.suit = suit_let ;*/
        /* if (value_let >='2' && value_let <= '9'){
       temp.value = temp.value - '0' ; 
     }else {
       switch(value_let){
       case '0' : temp.value= 0; break;
       case 'K' : temp.value= VALUE_KING; break;
       case 'Q' : temp.value= VALUE_QUEEN; break;
       case 'J' : temp.value= VALUE_JACK; break;
       case 'A' : temp.value= VALUE_ACE; break;
       default: return temp;
       }
     switch(suit_let){
    case 's': temp.suit= 0; break;
    case 'h': temp.suit= 1; break;
    case 'd': temp.suit= 2; break;
    case 'c': temp.suit= 3;  break;
     default: return temp; 	      
     }     
     }*/
  //puts the value in two functions .
      temp.suit  = suit_letter(temp);
      temp.value = value_letter(temp);
      return temp;
} 
card_t card_from_num(unsigned c) {
  //card_from_letters();
  card_t temp;
    temp.value = c%13 + 1;
    temp.suit =c/13;
    /* if (temp.value>=2 && temp.value<=9){
      temp.value = c +'0';   
    }
    else if(temp.value ==1  ){
      temp.value = VALUE_ACE;
    }else if (temp.value==10){
      temp.value= '0';
    }else if (temp.value==11){
      temp.value= VALUE_JACK;
    }else if (temp.value==12){
      temp.value = VALUE_QUEEN;
    }else if (temp.value==13){
      temp.value = VALUE_KING;
    }*/
  
    //for(unsigned i=0 ;i<52;i++){
    /*  if(temp.value == 0){
     temp.suit = c/13;
     //temp.suit = 's';
  }else if(temp.value==13){
     temp.suit =c/13;
     //temp.suit = 'h';
  }else if (temp.value==26){
     temp.suit = c/13;
     // temp.suit = 'd';
  }else if (temp.value==39){
    temp.suit= c/13;
    //temp.suit = 'c';
  }*/
  // }
  return temp;
}
