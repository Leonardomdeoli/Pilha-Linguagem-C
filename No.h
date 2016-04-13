typedef struct noh NO;
NO *aloca(int x , NO *p);//cria um novo nó e retorna o endereç do novo nó
void desaloca(NO *p);//libera a memoria
int getValor(NO *p);//retorna o valor que contem no nó
NO * getProx(NO *p);//retorna a posição do proximo nó
void setValor(NO *p, int x);//setar um novo  valor no nó
void setProx(NO *p,NO *q);// seta um novo end de memoria no nó
void mostra(NO *p);//mostra o vetor
int soma(NO *p);//efetua a soma


