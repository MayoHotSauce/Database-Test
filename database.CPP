#include <conio.h>
#include <iostream>
#include <fstream.h>
#include <stdio.h>
#include <stdlib.h>

main(){

   ofstream file;

   file.open("data.txt");
    	file<<"Hello, World";
      file.close();
      printf(" Test Play ");
      getch();
      system("notepad /p data.txt");
      printf("\nNow printing ");
      getch();
}
