﻿1. Considerando a biblioteca-padrão da linguagem C, responda:
	
	(a) Quais são as funções (e seus protótipos) para abrir e fechar arquivos?

		FILE fopen(char *nome_arquivo, char *modo de operação);
		int fclose(FILE *nome_ do_ponteiro);

	(b) Quais são as funções (e seus protótipos) para escrever em arquivos?
		
		int putc(char ch,FILE *arquivo_aberto);
		char fputs (char *string, FILE *arquivo_aberto);
		int fprintf (FILE *arquivo_aberto, char *string);

	(c) Quais são as funções (e seus protótipos) para ler arquivos?
		
		int getc (FILE *arquivo_aberto);
		int fscanf(FILE *arquivo_aberto, char *string);
		char fgets (char *string, int tamanho, FILE *arquivo_aberto);

	(d) Quais são as funções (e seus protótipos) para reposicionar um ponteiro para arquivo?
		
		rewind(FILE *arquivo_aberto);
		int fseek (FILE *arquivo_aberto, int offset, int origem);

	(e) Quais bibliotecas devem ser incluídas no código para poder utilizar as funções acima?
		
		stlib.h e stdio.h

2. O que é a norma POSIX?
		
		É uma norma elaborada para trabalhar com hardware. Ela foi desenvolvida com o intuito de ser mais simples e mais rápida, mas para isso é considerada de baixo-nível.

3. Considerando a norma POSIX, responda:
	
	(a) Quais são as funções (e seus protótipos) para abrir e fechar arquivos?
		
		ssize_t open(char *nome_arquivo,int modo);
		int close(int arquivo_aberto);

	(b) Quais são as funções (e seus protótipos) para escrever em arquivos?

		ssize_t write(int arquivo_aberto, void *buffer, size_t bytes_a_serem_lidos);

	(c) Quais são as funções (e seus protótipos) para ler arquivos?

		ssize_t read(int arquivo_aberto, void *buffer, size_t bytes_a_serem_lidos);

	(d) Quais são as funções (e seus protótipos) para reposicionar um ponteiro para arquivo?

		off_t lseek(int arquivo_aberto, off_t offset, int modo);

	(e) Quais bibliotecas devem ser incluídas no código para poder utilizar as funções acima?

	 	fcntl.h, unistd.h e termios.h
