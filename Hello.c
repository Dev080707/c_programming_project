#include<stdio.h>
#include<time.h>
#include<conio.h>

int main(){
  int seconds;
  printf("Enter the time duration(in sec): ");
  scanf("%d",&seconds);
    
  printf("start typing : \n ");
    
  time_t start_time = time(NULL);

  int time_spent=0;
  
  int count_words=0;
  int inword=0;
  
  while(time(NULL) - start_time < seconds  ){
    if(_kbhit()){
      char ch= getch();
      printf("%c",ch);
    
    
      if(ch == ' ' && ch == '\n' && ch == '\t'){
        if(inword){
          count_words++;
          inword=0;
        }
      }else{
        inword=1;
      }
    }
   



  }

  if(inword){
    count_words++;
  }

  printf("\n\ntime up !!\n");



  float min=seconds/60.0;
  float Wpm = count_words/min ;

  printf("\n WPM is : %2f",Wpm);
  printf("no of words typed : %d \n", count_words);
    
    
  return 0;
    
    
}
