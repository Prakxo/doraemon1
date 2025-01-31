/******************** Start of BITIO.H **********************/
#ifndef _BITIO_H
#define _BITIO_H

typedef struct bit_file {
	unsigned char *file;
	unsigned char mask;
	int rack;
} BIT_FILE;

BIT_FILE* OpenInputBitFile( unsigned char *name );
int InputBit( BIT_FILE *bit_file );
unsigned long InputBits( BIT_FILE *bit_file, int bit_count );
void CloseInputBitFile( BIT_FILE *bit_file );

int getc(unsigned char** file);
int putc(int ch, unsigned char** file);
void memmove(void* dst, const void* src, signed long len);
void fatal_error(const char* fmt);

#endif /* _BITIO_H */
/********************** End of BITIO.H *********************/