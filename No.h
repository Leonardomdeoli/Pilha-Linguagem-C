typedef struct noh NO;
NO *aloca(int x , NO *p);//cria um novo n� e retorna o endere� do novo n�
void desaloca(NO *p);//libera a memoria
int getValor(NO *p);//retorna o valor que contem no n�
NO * getProx(NO *p);//retorna a posi��o do proximo n�
void setValor(NO *p, int x);//setar um novo  valor no n�
void setProx(NO *p,NO *q);// seta um novo end de memoria no n�
void mostra(NO *p);//mostra o vetor
int soma(NO *p);//efetua a soma


