    int shellcodeP = 0;
    int encodersP = 0;
    int injectorP = 0;
    int backdoorsP = 6;
    int differentOsP = 0;

void banner(){
   srand ( time(NULL) );
   int x = rand() % 5 + 1 ;
   char kaka;
   FILE *fp;

    if(x == 1)
        fp = fopen("core/banner/banner1.txt","r");
    else if(x == 2)
        fp = fopen("core/banner/banner2.txt", "r");
    else if(x == 3)
        fp = fopen("core/banner/banner3.txt", "r");
    else if(x == 4)
        fp = fopen("core/banner/banner4.txt", "r");
    else if(x == 5)
        fp = fopen("core/banner/banner5.txt", "r");

    // Set Red Color
    rlutil::setColor(12);

    while( ( kaka = fgetc(fp) ) != EOF )
      printf("%c",kaka);

    fclose(fp);

    printf("\n");

    // Set Red Color
    // rlutil::setColor(12);

    // Set Green Color
    // rlutil::setColor(10);

    rlutil::setColor(10);
    printf("        =[ l0l v1         -");
    rlutil::setColor(12);
    printf("  BETA                               ");
    rlutil::setColor(10);
    printf("]\n");

    printf(" + -- --=[ %d shellcode    -", shellcodeP);
    rlutil::setColor(12);
    printf("  %d Different OS                     ", differentOsP);
    rlutil::setColor(10);
    printf("]\n");


    printf(" + -- --=[ %d encoders     -", encodersP);
    rlutil::setColor(12);
    printf("  (Shellcodes/executable files)      ");
    rlutil::setColor(10);
    printf("]\n");


    printf(" + -- --=[ %d injector     -", injectorP);
    rlutil::setColor(12);
    printf("  (PE,ELF,DLL,RAR,DEB etc...)        ");
    rlutil::setColor(10);
    printf("]\n");

    printf(" + -- --=[ %d backdoors    -", backdoorsP);
    rlutil::setColor(12);
    printf("  (ReverseShell)                     ");
    rlutil::setColor(10);
    printf("]\n");

    printf(" + -- --=[ Open Source    :");
    rlutil::setColor(12);
    printf("  https://github.com/roissy/l0l      ");
    rlutil::setColor(10);
    printf("]\n");

    printf("\n");

}
