// #include <malloc.h>
// #include <string.h>
// #include <stdbool.h>
// #include <stdio.h>

// bool exo1(void)
// {
//     char text[] = "Hello World !";
//     char *m_text = malloc(sizeof(char) * (strlen(text) + 1));

//     if (m_text == NULL)
//         return false;
//     m_text = strcpy(m_text, text);
//     m_text[strlen(text)] = '\0';
//     printf("%s\n", m_text);
//     free(m_text);
//     return true;
// }
