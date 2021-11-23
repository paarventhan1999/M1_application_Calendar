#include<stdio.h>
#include<conio.h>
#include<windows.h>

void gotoxy (int x, int y)

//This will set the forground color for printing in a console window.
void SetColor(int ForgC)

     //We will need this handle to get the current background attribute
    

     //We use csbi for the wAttributes word.

void ClearColor()
void ClearConsoleToColors(int ForgC, int BackC)
{

     //Get the handle to the current output buffer...
         //This is used to reset the carat/cursor to the top left.
    
     //A return value... indicating how many chars were written
     //   not used but we need to capture this since it will be
     //   written anyway (passing NULL causes an access violation).
         //This is a structure containing all of the console info
     // it is used here to find the size of the console.
     //Here we will set the current color
     SetConsoleTextAttribute(hStdOut, wColor);
               //This fills the buffer with a given character (in this case 32=space).
          FillConsoleOutputCharacter(hStdOut, (TCHAR) 32, csbi.dwSize.X * csbi.dwSize.Y, coord, &count);

          FillConsoleOutputAttribute(hStdOut, csbi.wAttributes, csbi.dwSize.X * csbi.dwSize.Y, coord, &count );
          //This will set our cursor position for the next print statement.
          SetConsoleCursorPosition(hStdOut, coord);

void SetColorAndBackground(int ForgC, int BackC)

int check_leapYear(int year) 
  //checks whether the year passed is leap year or not
    

void increase_month(int *mm,  int *yy) 
  //increase the month by one
    
void decrease_month(int *mm,  int *yy)
  //decrease the month by one
    
int getNumberOfDays(int month,int year)
  //returns the number of days in given month
   
void print_date(int mm, int yy)
  //prints the name of month and year
   
int getDayNumber(int day,int mon,int year)
  //retuns the day number
    
char *getDay(int dd,int mm,int yy)
  //to get date
  
int checkNote(int dd, int mm)
    //To check note
  
void printMonth(int mon,int year,int x,int y)
  //prints the month with all days
       
  switch(day)
    //locates the starting day in calender
       
    gotoxy(x,y);
    
    
void AddNote()
    //add of note option

void showNote(int mm){
    //to show the note
