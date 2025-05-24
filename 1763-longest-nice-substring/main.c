// Leetcode Problem #1763 Longest Nice Substring
//https://leetcode.com/problems/longest-nice-substring/

char* longestNiceSubstring( char* s ) {

    char* p = s;
    int upper[26];
    int lower[26];
    int asc;
    char* sub;
    int maxlen = 0;
    sub = malloc(sizeof(char)* ( strlen(s) + 1 ));
    sub[0] = '\0';

    for( int i=0; i<strlen( s ); i++ ){
       for( int j = i; j< strlen( s ); j++ ){

             for( int k=0; k<26; k++ ){
                upper[k] = 0;
                lower[k] = 0;
            }

            for( int y = i; y <= j; y++ ){
                asc = p[y];
                if( asc < 97 ){
                    upper[ asc - 65 ] = 1;
                } else{
                    lower[ asc - 97 ] = 1;
                }
            }
            int tam = j-i+1;
            int ctrl =0;
            for( int y=i; y<=j; y++ ){
                asc = p[y];

                if( asc < 97 ){
                    if( upper[ asc-65 ] == 1 && lower[ asc-65 ] == 1 ){
                    ctrl++;
                }
                } else{
                    if( lower[ asc-97 ] == 1 && upper[ asc-97 ] == 1 ){
                    ctrl++;
                    }
                }
            }
            if( ctrl == tam ) {
                if( tam > maxlen ){
                    maxlen = tam;
                    sub = realloc(sub, sizeof(char)*(1+tam) );
                    for( int y=i; y<=j; y++ ){
                        sub[ y - i ] = p[y];
                    }
                    sub[tam] = '\0';

                }
            }
       }
    }
return sub;

}