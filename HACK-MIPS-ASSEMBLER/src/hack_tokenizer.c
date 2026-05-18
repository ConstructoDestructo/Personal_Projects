#include "D:/Github_local_repos/Personal_Projects/HACK-MIPS-ASSEMBLER/include/hack_tokenizer.h"


Token tokenize(char *line)
{

  Token returnToken = {.type = IGNORE, .value = ""};

  switch(*line)
  {
    case '@':
    {
      returnToken.type = A_INSTRUCTION;
      copyToValueMember(returnToken.value, line,returnToken.type);
      break;
    }
    case '(':
    {
      returnToken.type = LABEL;
      copyToValueMember(returnToken.value, line,returnToken.type);
      break;
    }

    case '/':
    break;
    case '\0':
    break;

    default:
    {
      returnToken.type = C_INSTRUCTION;
      copyToValueMember(returnToken.value, line,returnToken.type);
      break;
    }
  }

  return returnToken;
}

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

static void copyToValueMember(char *value, char *line, TokenType type)
{
  int i = 0;
      
  while(*line != '\0')
  {

    if(i < 99)
    {
      if(type == A_INSTRUCTION)
      {
        line ++;
        value[i] = *line;
        i++;
      }
      else if (type == LABEL && *line != ')')
      {
        //(LOOP)
        line ++;
        if(*line != ')')
        {
          value[i] = *line;
          i++;
        }
      }
      else if(type == C_INSTRUCTION)
      {
        value[i] = *line;
        line ++;
          i++;
      }
      else
      {
        line++;
      }
    }
  }
  value[i] = '\0';
  
}


