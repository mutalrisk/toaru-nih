#include <string.h>

char * strncpy(char * dest, const char * src, size_t n) {
	char * out = dest;
	while (n > 0) {
		if (!*src) break;
		*out = *src;
		++out;
		++src;
		--n;
	}
	return out;
}
