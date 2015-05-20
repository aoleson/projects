/*
 *  Name: Spencer Hubbard
 *  Date: 4/14/15
 *  CS 362
 *
 *  TODO: comment
 */

#ifndef CS362_H_
#define CS362_H_

#include <stddef.h>  // for NULL, size_t
#include <stdio.h>   // for FILE, fopen(), fclose(), fprintf(), printf()

// wrapper for assert that permits side-effects within Verify362 statement
// borrowed from: http://www.acm.uiuc.edu/sigops/roll_your_own/2.a.html

void VerificationFailure(const char *exp, const char *file, const char *basefile, int line);

#define Verify362(exp) if (exp) ; \
  else VerificationFailure(#exp, __FILE__, __BASE_FILE__, __LINE__)

// error-handling wrappers; borrowed from textbook "computer systems: a
// programmers perspective" by Randal Bryant and David O'Hallaron

void UnixError(char *msg);

void AppError(char *msg);

/* wrappers for general utilities */

void *Malloc(size_t size);

void Free(void *ptr);

/* wrapper for library functions */

FILE *Fopen(const char * restrict filename, const char * restrict mode);

void Fclose(FILE * restrict stream);

#endif /* CS362_H_ */