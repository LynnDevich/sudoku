#include "sudoku.h"

int main(int argc, char *argv[])
{
  	sudoku[0][0]=5;
	FILE* fp;

  if(argc == 1 || argc == 2 || argc > 3)
  {
    cout<<"����Ƿ�!\n";
  }
  else
  {
    string string1 = argv[1];
    string string2 = argv[2];
    if(string1 != "-c" || !stringtonum(string2))
    {
      cout<<"����Ƿ�!\n";
    }
    else
    {
      	fp = fopen("sudoku.txt","w");
    	backtrace(0,fp);
    	fclose(fp);
    }
  }
  return 0;
}
