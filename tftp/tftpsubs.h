#define PKTSIZE SEGSIZE+4       /* should be moved to tftp.h */

void initsock(int);
void synchnet(int, int);
struct tftphdr *r_init(void);
struct tftphdr *w_init(void);
int readit(FILE *file, struct tftphdr **dpp, int convert);
int writeit(FILE *file, struct tftphdr **dpp, int ct, int convert);
void read_ahead(FILE *file, int convert /* if true, convert to ascii */);
int write_behind(FILE *file, int convert);

void mysignal(int, void (*func)(int));
