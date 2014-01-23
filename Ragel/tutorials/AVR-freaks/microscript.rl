#include <io.h> 
#include <inttypes.h> 

%%{ 
  machine microscript; 
  
  main := ""; 
}%% 

%% write data; 

static uint8_t cs; /* 'cs" current state - The current parser state */ 

void init_microscript( void ) { 
  %% write init; 
} 

void parse_microscript(const char* p, uint16_t len, uint8_t is_eof) { 
  const char* pe = p + len; /* pe points to 1 byte beyond the end of this block of data */ 
  char* eof = is_eof ? pe : ((char*) 0); /* Indicates the end of all data, 0 if not in this block */ 
  
  %% write exec; 
} 
