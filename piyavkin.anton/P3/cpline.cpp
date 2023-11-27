#include "cpline.hpp"

char * piyavkin::CpLine(char * old_line, char * new_line, size_t length)
{
  for (size_t i = 0; i < length; ++i)
  {
    new_line[i] = old_line[i];
  }
  delete [] old_line;
  return new_line;
}
