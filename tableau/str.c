#include <stdio.h>
#include <string.h>
int strlength(const char* str){
int i = 0 ;
while(str[i] != '\0'){
str[i];
i++;

}

return i;
	

}
int read(char *Array, int length){
char *chr=NULL;
if(fgets(Array, length, stdin) != NULL){

chr = strchr(Array, '\n');
if(chr != NULL){
chr = '\0';
}
return 1;

}
else{
return 0;

}
}

