#include <iostream>
#include "string_library.h"

int __my_string_lib my_strlen(const char* p) {
    int len = 0;
    
    const char* ptr = p;
    
    while(*ptr != '\0')
        ++ptr;

    return (int)(ptr-p);
}

// char* __my_string_lib my_strchr(const char* , int);

bool __my_string_lib my_strcmp(const char* p1, const char* p2) {
    while(*p1 == *p2){
        if(*p1 == '\0')
            break;
        ++p1;
        ++p2;
    }

    if ((*p1-*p2) == 0) {
        return true;

    }
    else
        return false ;
    
}

char* __my_string_lib my_strcat(char* p1,  char * p2) {
    
    int i,j;
    for(i=0;p1[i] != '\0';i++)
        ;
    for(j=0;p2[j] != '\0'; j++)
        p1[i+j] = p2[j];
    
    p1[i+j] ='\0';
    
    return p1;
}

char* __my_string_lib my_strchr(const char* p,int c) {
    while(*p) {
        if(*p == c) {
                return (char*)p;
        }
        ++p;
    }
    
    if(c == '\0') // aranan karakter null ise
        return (char*)p;
    return NULL;
}

char* __my_string_lib my_strcpy(char* pdest,const char* psource) {
    
    if(my_strlen(psource)<my_strlen(pdest)) {
    char* pret = pdest;
    while(*pdest++ = *psource++)
        ;

    return pret;

    }

    else {    
        std::cout<<"boyut hatasi";
        return NULL;
    } 
}





