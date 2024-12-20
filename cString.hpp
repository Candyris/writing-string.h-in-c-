#pragma once

namespace candy
{

    int Strlen(const char *s);
    // It returns the string's length.

    int Strnlen(const char *s, int maxlen);
    ;
    // It returns the specified value if the value specified is less than the string length, otherwise the string length.

    int Strcmp(const char *s1, const char *s2);
    // It compares two strings and returns 0 if the strings are the same.

    int Strncmp(const char *s1, const char *s2, int maxlen);
    // It compares two strings only to n characters.

    char *Strcat(char *destination, const char *source);

    const char *Strstr(const char *source, const char *occurence);

    const char *Strcat(char *source, const char *concatenate, int len);
    //It concatenates n characters of one string to another string.

    const char* Strcpy(char* source, const char* destination);
    //It copies one string into another.



    // It concatenates two strings and returns the concatenated string.
    //-----------------------incomplete----------------------//
    /*     
          strchr();//It copies the first n characters of one string into another.
          strrchr();//It finds out the first occurrence of a given character in a string.
          strnstr();//It finds out the first occurrence of a given string in a string.
          strcasecmp();//It compares two strings without sensitivity to the case.
          strncasecmp();//It compares n characters of one string to another without sensitivity to the case.
      */
};

//----------------------------------------------------------------------------//
int candy::Strlen(const char *s)
{
    int length = 0;
    while (s[length] != '\0')
    {
        length++;
    }
    return length;
}

int candy::Strnlen(const char *s, int maxlen)
{
    int length = 0;
    while (s[length] != '\0' && length < maxlen)
    {
        length++;
    }
    return length;
}

int candy::Strcmp(const char *s1, const char *s2)
{
    int length = 0;
    while (s1[length] == s2[length])
    {
        if (s1[length] == '\0' && s2[length] == '\0')
        {
            return 0;
        }
        length++;
    }
    return -1;
}
int candy::Strncmp(const char *s1, const char *s2, int maxlen)
{
    for (int i = 0; i < maxlen; i++)
    {
        if (s1[i] != s2[i] || s1[i] != '\0' || s2[i] != '\0')
        {
            return -1;
        }
    }
    return 0;
}
char *candy::Strcat(char *destination, const char *source)
{
    // here we first create new char pointer
    char *ptr = destination + candy::Strlen(destination);
    // here we first take address of destination at destination[0],
    // then we add the length of destination
    while (*source != '\0')
    {
        *ptr++ = *source++;
    }
    // here we are adding n source char pointer with also increaing the size of ptr
    // we continue this loop until we reach end of source

    *ptr = '\0';
    // here we are end our pointer with null character

    return destination;
    // we are not return ptr because ptr is ofcourse pointer pointing to the address
    // of destinction
}

const char *candy::Strstr(const char *source, const char *occurence)
{
    while (*source)
    {
        const char *src = source;
        const char *occur = occurence;
        while (*src != '\0' && *occur != '\0' && *src == *occur)
        {
            src++;
            occur++;
        }

        if (!*occur)
        {
            return source;
        }

        source++;
    }
    return nullptr;
}

const char *candy::Strcat(char *source, const char *concatenate, int len)
{
    source += Strlen(source);
    while (len--)
    {
        *source = *concatenate;
        source++;
        concatenate++;
    }
    return source;
}

const char *candy::Strcpy(char *source, const char *destination)
{
    while(*destination != '\0')
    {
        *source = *destination;
        source++;
        destination++;
    }
    *source = '\0'; 
    return source;
}
