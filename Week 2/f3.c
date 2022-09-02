//funtion programm on music player

#include<stdio.h>
void music_play();
void music_pause();
void music_next();
void music_diplay_song_name();
int main()
{
   int n;
   printf("enter the operation that has to be done\n");
   scanf("%d",&n);
   if(n==1)
   {
       music_play();
   }
   else if(n==2)
   {
       music_pause();
   }
    else if(n==2)
   {
       music_next();
   }
    else if(n==2)
   {
       music_diplay_song_name();
   }
   
   return 0;
}

void music_play()
{
  printf("play music\n");
  
}
void music_pause()
{
  printf("pause music\n");
 
}
void music_next()
{
  printf("play next music\n");
 
}
void music_diplay_song_name()
{
  printf("diplay the song name music\n");
  
}

