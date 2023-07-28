#include "main.h"

/**
 * rot13 - Encode a string using rot13 cipher.
 * @s: The input string to be encoded.
 *
 * Return: Pointer to the encoded string.
 */
char *rot13(char *s)
{
    char *ptr = s;
    char *rot13_chars = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
    int i;

    while (*ptr)
    {
        i = 0;
        while (rot13_chars[i])
        {
            if (*ptr == rot13_chars[i])
            {
                *ptr = (i < 26) ? 'A' + i : 'a' + (i - 26);
                break;
            }
            i++;
        }
        ptr++;
    }

    return s;
}

