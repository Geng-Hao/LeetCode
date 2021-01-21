char *strcpy(char *dest, const char *src)
{
  const char *p;
  char *q; 

  for(p = src, q = dest; *p != '\0'; p++, q++)
    *q = *p;
   
  *q = '\0';

  return dest;
}


void strcpy( char* Dest, const char* Src )
{
　 while( (*Dest++ = *Src++) != ‘\0’ );
}