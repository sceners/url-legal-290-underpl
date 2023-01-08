 #include <stdio.h>

 void main()
	{
	char name[0x0FF];
	int i;
	long buff=0x05E4D3C2B;

	clrscr();

	printf("        €€    €€€            €€€€    €€€\n");
	printf("     €€€€€€€€€€ €€        €€€€€€€€€€€€€€€€€\n");
	printf("    €€€     €    €€    €€€€€      €€€    €€€\n");
	printf("    €€  ∞∞∞   ∞∞  €€€  €€€ ∞∞∞∞∞∞∞    ∞∞  €€€\n");
	printf("    €€  ∞∞∞  ∞∞∞∞ €€€€€€€€ ∞∞∞  ∞∞∞  ∞∞∞  €€\n");
	printf("    €€  ∞∞∞   ∞∞∞      €€   ∞     ∞  ∞∞∞  €\n");
	printf("    €€€  ∞∞   ∞∞  ∞∞∞∞∞     ∞∞∞   ∞  ∞∞∞  €€\n");
	printf("    €€€  ∞∞   ∞∞  ∞∞∞∞∞∞    ∞∞∞∞∞∞∞  ∞∞  €€€\n");
	printf("     €€ ∞∞∞   ∞∞   ∞   ∞    ∞∞       ∞∞  €€\n");
	printf("     €€  ∞∞∞∞∞∞∞∞ ∞∞  ∞∞∞   ∞∞  €€€  ∞∞∞  €€\n");
	printf("      €€    ∞∞    ∞∞  ∞∞∞  ∞∞∞∞ €€€€  ∞∞   €€\n");
	printf("      €€€€€€  €€€ ∞  €       ∞∞ €€ €€     €€\n");
	printf("      ≤€€€€€€ €€€   €€€€€€€     €€  €€€€€€€\n");
	printf("    ≤≤≤   €€€€€€€€€€€€€€€€€€€€€€€    €€€€≤\n");
	printf("   ≤≤            €€€€     €€€€€€€        ≤≤≤≤≤\n");
	printf("  ≤≤                                        ≤≤\n");
	printf("  ≤     'URLegal v2.9' keygen               ≤≤≤\n");
	printf(" ≤≤             made by sfistack/UnderPl    ≤≤\n");
	printf(" ≤≤                                        ≤≤\n");
	printf("  ≤≤≤≤≤≤≤≤≤≤≤      ≤≤≤≤≤≤≤                ≤≤≤\n");
	printf("    ≤≤    ≤≤≤≤≤≤≤≤≤≤  ≤≤≤≤≤≤   ≤≤≤≤≤≤≤≤≤≤≤≤≤≤\n");
	printf("                 ≤≤        ≤≤≤≤≤≤\n");


	printf("[name] ");
	gets(name);	
	if (strlen(name)!=0) 
	{
	for (i=0; i<strlen(name); i++)
		{
		if ((toupper(name[i]) <'A') || (toupper(name[i]) >'Z'))/* sprawdzenie czy*/
				{				       /* sa same litery */
				if (name[i]!=0x020)
					{
					printf("\ninvalid character in user name!");
					while (kbhit()==0);
					exit(0);
					}
				}
		}
	
	for (i=0; i<strlen(name); i++)
		{
		buff+=(name[i]*0x065)+(name[i]*0x04B7C3D)+(name[i]+0x049C6A)*(i+1);
		if ((i+1)%3==0)		/*wyliczenie sn*/
			{
			buff=(buff<<1)+name[i];
			}
		}

	if ((buff<0x10000000)&&(buff>0x00)) buff=0x05E4D3C2B;

	if (((buff<<28)>>28)==0) buff+=0x0C;	/*sprawdzenie, czy sa jakies zera w sn*/
	if (((buff<<24)>>28)==0) buff+=0x0C0;	/*jesli tak, to nalezy je odpowiednio*/
	if (((buff<<20)>>28)==0) buff+=0x0D00;	/*zastapic*/
	if (((buff<<16)>>28)==0) buff+=0x0D000;
	if (((buff<<12)>>28)==0) buff+=0x0E0000;
	if (((buff<<8)>>28)==0)  buff+=0x0E00000;
	if (((buff<<4)>>28)==0)  buff+=0x0F000000;
	if ((buff>>28)==0)      buff+=0x0F0000000;
	
	printf("[-sn-] %lX", buff);	/*wypisanie sn*/
	}
	
	else
	{
	printf("write your name dude!");
	}
	while(kbhit()==0); /* readkey */
	}