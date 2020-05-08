#ifndef FUNCT_H
#define FUNCT_H
typedef enum Boolean{
false,//
true//

}Boolean;
void findChar(char lettre, char *motChoisi, int *lettreTrouvee);
int Win(int *lettreTrouvee);
int checkLetter(char lettre, char *motChoisi);
char readChar();
int read(char *Array, length);
#endif
