#ifndef STRING_LIBRARY
#define STRING_LIBRARY

#define __my_string_lib

int __my_string_lib my_strlen(const char*);
char* __my_string_lib my_strchr(const char* , int);
bool __my_string_lib my_strcmp(const char* p1, const char* p2);
char* __my_string_lib my_strcat(char*,  char *);
char* __my_string_lib my_strchr(const char*,int);
char* __my_string_lib my_strcpy(char*,const char*);

#endif