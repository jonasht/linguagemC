void alocamapa();
int lamapa();
void liberamapa();

void move(char direcao);
int acabou();
void imprimirMapa();

struct mapa
{
    char** matriz;
    int linhas;
    int colunas;
};

typedef struct  mapa MAPA;
