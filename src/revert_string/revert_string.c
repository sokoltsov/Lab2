#include "revert_string.h"

void RevertString(char *str)
{
    int N = strlen(str);
	char *rev_str = malloc(sizeof(char) * (N + 1));
	for(int i = 0; i < N; i++){
	   rev_str[i] = str[N-i-1];}
	strcpy(str, rev_str);
	free(rev_str);
}

