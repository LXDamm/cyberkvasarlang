#ifndef cyberkvasar_scanner_h
#define cyberkvasar_scanner_h

typedef enum {
    TOKEN_LEFT_PAREN, TOKEN_RIGHT_PAREN,
    TOKEN_COMMA, TOKEN_DOT, TOKEN_MINUS, TOKEN_PLUS,
    TOKEN_SLASH, TOKEN_STAR, TOKEN_COLON, TOKEN_EQUAL,
    TOKEN_IDENTIFIER, TOKEN_STRING, TOKEN_NUMBER,
    TOKEN_DO, TOKEN_END,
    TOKEN_RETURN, TOKEN_DEF, TOKEN_NULL,
    TOKEN_ERROR, TOKEN_EOF
} TokenType;

typedef struct {
    TokenType type;
    const char* start;
    int length;
    int line;
} Token;

void initScanner(const char* source);
Token scanToken();

#endif