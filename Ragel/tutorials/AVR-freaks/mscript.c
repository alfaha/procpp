
#line 1 "microscript.rl"
#include <io.h> 
#include <inttypes.h> 


#line 8 "microscript.rl"
 


#line 12 "mscript.c"
static const int microscript_start = 1;
static const int microscript_first_final = 1;
static const int microscript_error = 0;

static const int microscript_en_main = 1;


#line 11 "microscript.rl"

static uint8_t cs; /* 'cs" current state - The current parser state */ 

void init_microscript( void ) { 
  
#line 26 "mscript.c"
	{
	cs = microscript_start;
	}

#line 16 "microscript.rl"
} 

void parse_microscript(const char* p, uint16_t len, uint8_t is_eof) { 
  const char* pe = p + len; /* pe points to 1 byte beyond the end of this block of data */ 
  char* eof = is_eof ? pe : ((char*) 0); /* Indicates the end of all data, 0 if not in this block */ 
  
  
#line 39 "mscript.c"
	{
	if ( p == pe )
		goto _test_eof;
	switch ( cs )
	{
case 1:
	goto st0;
st0:
cs = 0;
	goto _out;
	}

	_test_eof: {}
	_out: {}
	}

#line 23 "microscript.rl"
} 
