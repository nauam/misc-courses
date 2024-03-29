﻿1. Quais são as vantagens e desvantagens em utilizar:

(a) fork?

		Ocupa mais espaço de memórias, por ter variáveis locais. Processa operações com dados diferentes, então não tem risco de corromper arquivos. Necessita da criação de pipes para comunicar entre processos.

(b) threads?

		Vantagem de ter compartilhamento de variáveis, além de realizar operações simultâneas. Tem o risco de sobreescrever ou corromper arquivos.

2. Quantas threads serão criadas após as linhas de código a seguir? Quantas coexistirão? Por quê?

(a)

```C
void* funcao_thread_1(void *arg);
void* funcao_thread_2(void *arg);

int main (int argc, char** argv)
{
	pthread_t t1, t2;
	pthread_create(&t1, NULL, funcao_thread_1, NULL);
	pthread_create(&t2, NULL, funcao_thread_2, NULL);
	pthread_join(t1, NULL);
	pthread_join(t2, NULL);
	return 0;
}

Duas serão criadas, duas existirão simultaneamente, pois a função join só é executada depois das funções create.
```

(b)
```C
void* funcao_thread_1(void *arg);
void* funcao_thread_2(void *arg);

int main (int argc, char** argv)
{
	pthread_t t1, t2;
	pthread_create(&t1, NULL, funcao_thread_1, NULL);
	pthread_join(t1, NULL);
	pthread_create(&t2, NULL, funcao_thread_2, NULL);
	pthread_join(t2, NULL);
	return 0;
}

Duas threads são criadas, somente uma existirá por vez, pois a segunda thread só é criada quando a primeira termina.
```

3. Apresente as características e utilidades das seguintes funções:

(a) `pthread_setcancelstate()`
	
		É uma função que define se a thread é cancelável ou não. 

(b) `pthread_setcanceltype()`

		A função define se a thread pode ser cancelada a qualquer momento ou esperar até a próxima chamada.

(DICA: elas são relacionadas à função pthread_cancel().)