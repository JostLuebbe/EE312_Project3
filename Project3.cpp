/*
 * Replace this comment with the standard EE312 file header!
 */

#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include "String.h"

/* use these two macros and the function functions if you want -- not
   required */
#define SIGNATURE (~0xdeadbeef)

/** STRING(s)
 * Helper macro for accessing ut String object (if applicable)
 * [INPUT] pointer to cstring
 * [OUTPUT] pointer to UT String object (if applicable)
 */
#define STRING(s) ((String*)(s - 3*sizeof(uint32_t)))

/* this simple function can be useful when you implement stage 4 you
 * are not required to use the function, and you can implement stage 4
 * without it */
int32_t isOurs(const char* s) {
    if (STRING(s)->check == SIGNATURE) { return 1; }
    else { return 0; }
}

/* allocate a utstring on the heap, initialize the string correctly by
 * copying the characters from 'src' and return a pointer to the first
 * character of actual string data */
char* utstrdup(const char* src) {
	//I wrote something here.
	return NULL;
}

/* the parameter 'utstr' must be a utstring. Find the length of this
 * string by accessing the meta-data and return that length */
uint32_t utstrlen(const char* utstr) {
	return NULL;
}

/* s must be a utstring. suffix can be an ordinary string (or a
 * utstring) append the characters from suffix to the string s. Do not
 * allocate any additional storage, and only append as many characters
 * as will actually fit in s. Update the length meta-data for utstring
 * s and then return s */
char* utstrcat(char* s, const char* suffix) {
	return NULL;
}

/* 'dst' must be a utstring. 'src' can be an ordinary string (or a
 * utstring) overwrite the characters in dst with the characters from
 * src. Do not overflow the capacity of dst For example, if src has
 * five characters and dst has capacity for 10, then copy all five
 * characters However, if src has ten characters and dst only has
 * capacity for 8, then copy only the first 8 characters. Do not
 * allocate any additional storage, do not change capacity. Update the
 * length meta-data for dst and then return dst */
char* utstrcpy(char* dst, const char* src) {
	return NULL;
}

/* self must be a utstring. deallocate the storage for this string
 * (i.e., locate the start of the chunk and call free to dispose of
 * the chunk, note that the start of the chunk will be 12 bytes before
 * *self) */
void utstrfree(char* self) {
}

/* s must be a utstring.  ensure that s has capacity at least as large
 * as 'new_capacity' if s already has capacity equal to or larger than
 * new_capacity, then return s if s has less capacity than
 * new_capacity, then allocate new storage with sufficient space to
 * store new_capacity characters (plus a terminating zero), copy the
 * current characters from s into this new storage. Update the
 * meta-data to correctly describe new new utstring you've created,
 * deallocate s and then return a pointer to the first character in
 * the newly allocated storage */
char* utstrrealloc(char* s, uint32_t new_capacity) {
	return NULL;
}
