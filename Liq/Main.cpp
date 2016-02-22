#include "Main.h"
#include <stdlib.h>
#include <string.h>

//Search for value in array(Each array in Liq is end with a space \0 )
int searchValue(char** Array, char* Value, int** targets)
{
	int targetCounts = 0;
	char** CurStr = Array;
	(*targets) = (int*)malloc(sizeof(int));
	while (CurStr)
	{
		if (strcmp(*CurStr, Value))
		{
			targetCounts++;
			(*targets) = (int*)realloc(targets, sizeof(int) * (targetCounts + 1));
			(*targets)[targetCounts - 1] = CurStr - Array;
		}
		CurStr ++;
	}
	(*targets)[targetCounts] = 0;
	return targetCounts;
}