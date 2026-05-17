#include "D:/Github_local_repos/Personal_Projects/HACK-MIPS-ASSEMBLER/include/hack_tokenizer.h"


static char *trim(char *line)
{
     char *placeHolder = line;

     while( *placeHolder != '\0')
     {
        placeHolder = placeHolder + 1;
     }

     while( (placeHolder - 1) >= line && (*(placeHolder - 1) == ' ' || *(placeHolder - 1) == '\t' ))
     {
       placeHolder = placeHolder - 1;
       *placeHolder = '\0';
     }

     while( *placeHolder != '\0' && (*placeHolder == ' ' || *placeHolder == '\t' ) )
     {
      placeHolder += 1;
     }

     return placeHolder;
}
