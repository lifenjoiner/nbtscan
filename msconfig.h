#ifdef WIN32
    #define bzero(s, n) memset(s, 0, n)
    #define sleep Sleep
#endif
