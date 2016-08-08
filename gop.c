void enc(char* plaintxt, unsigned char
key) { while(*plaintxt)
   { *plaintxt^=(key=(key*13)+37);
     *(plaintxt++) += 3;
   }
}
