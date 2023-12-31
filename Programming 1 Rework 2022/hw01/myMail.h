#pragma once

// Libraries //
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>
#include <math.h>

// Macro definitions //

// Line number macro, arbitrary
#define _LINENUM_ 80

// email format error handles
#define _LOCAL_INVALID_ 1
#define _DOMAIN_INVALID_ 2
#define _INVALID_EMAIL_FORMAT_ 3

// subject error handles
#define _CATEGORY_INVALID_ 1
#define _TITLE_EMPTY_ 2

// email content error handles
#define _CONTENT_OUT_OF_RANGE_ 1
#define _CONTENT_TOO_LOW_ 2

// Function prototypes //

// Check function prototypes
uint8_t email_Check(char (*email)[]);
uint8_t subject_Check(char (*subject)[]);
uint8_t content_Check( double content );

// final assignment judgement
void assignment( uint8_t email, uint8_t subject, uint8_t content );

// function to print lines
void printLine( uint8_t input );

// function to get the size of the string literal
uint16_t getSize(char (*array)[]);