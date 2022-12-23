#ifndef ALIASH
#define ALIASH

/**
 * struct AliasData - struct for alias function
 * @AliasData - name of the struct
 * @name: name of the alias value
 * @val: value for the alias
 * @next: pointer to next node
 *
 * Description: defines a struct of 2 pointers to character, and a pointer to
 * the same struct
 */

typedef struct AliasData
{
	char *name;
	char *val;
	struct AliasData *next;
} AliasData;

#endif
