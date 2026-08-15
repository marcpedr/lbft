# lbft
O libft e um progeto da 42 que conciste em recriar a biblioteca lib e mais algumas funções da 42-ft
_This project has been created as part of the 42 curriculum by marcpedr._
## Libft - 42 Luanda
------------------------------
## Description
Este projeto consiste no desenvolvimento de uma biblioteca customizada em C (libft.a) que reúne um conjunto de 43 funções utilitárias essenciais desenvolvidas do zero. O objetivo principal deste repositório é compreender a fundo a gestão de memória, a manipulação de ponteiros e a engenharia de software em C de forma nativa.
Diferente do modelo tradicional, todas as funções deste projeto possuem o mesmo peso e importância, não havendo distinção de funções bónus. A biblioteca foi estruturada de forma linear e organizada rigidamente em apenas três grandes etapas.
## Estrutura do Projeto (43 Funções)
A biblioteca está apresentada e subdividida em três grupos de desenvolvimento consecutivos:

* Primeira Etapa (23 Funções): Reiteração e replicação direta das funções clássicas da biblioteca padrão libc.
* Segunda Etapa (11 Funções): Funções utilitárias adicionais e avançadas para o tratamento de strings e manipulação direta de descritores de arquivos.
* Última Etapa - Listas (9 Funções): Implementação e gestão de nós de estruturas dinâmicas e listas ligadas (t_list), cobrindo funções de manipulação e limpeza estrutural (como ft_lstadd_back, ft_lstclear e ft_lstmap).

------------------------------
## Comportamento das Funções
## Primeira Etapa: Funções da Libc
Estas funções replicam o comportamento exato das funções originais da biblioteca padrão do C. Elas não possuem proteção contra ponteiros NULL nos parâmetros de entrada, imitando o comportamento indefinido (como Segmentation Fault) da libc original quando expostas a dados inválidos.

* ft_isalpha: Verifica se o caractere é alfabético (retorna 1 se verdadeiro, 0 se falso).
* ft_isdigit: Verifica se o caractere é um dígito numérico de 0 a 9 (retorna 1 ou 0).
* ft_isalnum: Verifica se o caractere é alfanumérico (combinação de ft_isalpha e ft_isdigit).
* ft_isascii: Verifica se o caractere pertence à tabela ASCII tradicional (valores entre 0 e 127).
* ft_isprint: Verifica se o caractere é imprimível na tela, incluindo o espaço em branco.
* ft_strlen: Calcula e retorna o número de caracteres de uma string, excluindo o terminador \0.
* ft_memset: Preenche os primeiros N bytes da área de memória apontada com um byte específico.
* ft_bzero: Define como zero (limpa) todos os bytes de um bloco de memória especificado por um tamanho.
* ft_memcpy: Copia N bytes de uma área de memória de origem para uma área de destino (não lida com sobreposição).
* ft_memmove: Copia N bytes de uma área de memória para outra, permitindo sobreposição segura de blocos de dados.
* ft_strlcpy: Copia uma string para um destino com tamanho limitado, garantindo a terminação com \0.
* ft_strlcat: Concatena uma string no final de outra com tamanho limitado, garantindo a terminação com \0.
* ft_toupper: Converte um caractere minúsculo para maiúsculo, se aplicável.
* ft_tolower: Converte um caractere maiúsculo para minúsculo, se aplicável.
* ft_strchr: Procura a primeira ocorrência de um caractere específico dentro de uma string.
* ft_strrchr: Procura a última ocorrência de um caractere específico dentro de uma string.
* ft_strncmp: Compara os caracteres de duas strings até um limite N, usando valores de unsigned char.
* ft_memchr: Procura por um byte específico dentro dos primeiros N bytes de um bloco de memória.
* ft_memcmp: Compara os primeiros N bytes de dois blocos de memória distintos.
* ft_strnstr: Localiza uma substring dentro de uma string maior dentro de um limite de comprimento.
* ft_atoi: Converte uma representação textual de um número em um valor inteiro (int), tratando sinais e espaços.
* ft_calloc: Aloca memória para uma matriz de elementos, limpando e definindo todos os bytes como zero.
* ft_strdup: Duplica uma string existente alocando uma nova área de memória via malloc.

## Segunda Etapa: Funções Adicionais
Estas funções estendem as capacidades da libc padrão. Diferente da primeira etapa, elas possuem verificações e proteções estritas contra ponteiros NULL logo no início de sua execução, retornando NULL de forma segura em caso de dados inválidos ou falhas críticas do malloc.

* ft_substr: Extrai e aloca uma substring a partir de uma string original, com base em um índice inicial e tamanho.
* ft_strjoin: Junta duas strings distintas em uma nova string gerada por alocação dinâmica.
* ft_strtrim: Remove caracteres específicos (definidos em um conjunto) do início e do fim de uma string.
* ft_split: Divide uma string em uma matriz de substrings usando um caractere delimitador específico.
* ft_itoa: Converte um valor numérico inteiro (int) em uma string de texto alocada, tratando o valor INT_MIN.
* ft_strmapi: Cria uma nova string aplicando uma função modificadora a cada caractere da string original de forma indexada.
* ft_striteri: Aplica uma função modificadora diretamente na string original passando o endereço de cada caractere.
* ft_putchar_fd: Escreve um caractere único no descritor de arquivo (file descriptor) especificado.
* ft_putstr_fd: Escreve uma string completa no descritor de arquivo especificado.
* ft_putendl_fd: Escreve uma string seguida de uma quebra de linha (\n) no descritor de arquivo especificado.
* ft_putnbr_fd: Escreve um número inteiro convertido em caracteres no descritor de arquivo especificado.

## Última Etapa: Funções de Listas Ligadas
Estas funções gerenciam a estrutura de dados dinâmica do projeto (t_list), permitindo a criação de nós, encadeamento, navegação em memória e destruição segura de estruturas sem deixar resíduos de vazamento de memória.

* ft_lstnew: Aloca e inicializa um novo nó de lista com um conteúdo fornecido e define o ponteiro next como NULL.
* ft_lstadd_front: Adiciona um nó de lista existente no início (topo) de uma lista ligada.
* ft_lstsize: Conta e retorna o número total de nós contidos dentro de uma lista ligada.
* ft_lstlast: Navega pela lista e retorna um ponteiro para o último nó existente.
* ft_lstadd_back: Adiciona um nó de lista existente no final da estrutura da lista ligada.
* ft_lstdelone: Libera a memória de um nó individual usando uma função de deletar passada como parâmetro para limpar o conteúdo.
* ft_lstclear: Remove e limpa todos os nós de uma lista a partir de um ponteiro, aplicando free sequencialmente.
* ft_lstiter: Navega por toda a lista aplicando uma função específica sobre o conteúdo de cada nó.
* ft_lstmap: Cria uma nova lista gerada pela aplicação de uma função sobre cada nó da lista original, limpando tudo se falhar.

------------------------------
## O Arquivo de Cabeçalho (libft.h)
O arquivo libft.h centraliza a estrutura do nó da lista ligada, as inclusões das macroinstruções externas autorizadas e os protótipos de todas as funções do projeto. Ele utiliza Header Guards para prevenir erros de redefinição múltipla.

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
int		ft_isalpha(int c);int		ft_isdigit(int c);int		ft_isalnum(int c);int		ft_isascii(int c);int		ft_isprint(int c);size_t	ft_strlen(const char *s);void	*ft_memset(void *b, int c, size_t len);void	ft_bzero(void *s, size_t n);void	*ft_memcpy(void *dst, const void *src, size_t n);void	*ft_memmove(void *dst, const void *src, size_t len);size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);int		ft_toupper(int c);int		ft_tolower(int c);char	*ft_strchr(const char *s, int c);char	*ft_strrchr(const char *s, int c);int		ft_strncmp(const char *s1, const char *s2, size_t n);void	*ft_memchr(const void *s, int c, size_t n);int		ft_memcmp(const void *s1, const void *s2, size_t n);char	*ft_strnstr(const char *haystack, const char *needle, size_t len);int		ft_atoi(const char *str);void	*ft_calloc(size_t count, size_t size);char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);char	*ft_strjoin(char const *s1, char const *s2);char	*ft_strtrim(char const *s1, char const *set);char	**ft_split(char const *s, char c);char	*ft_itoa(int n);char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));void	ft_striteri(char *s, void (*f)(unsigned int, char*));void	ft_putchar_fd(char c, int fd);void	ft_putstr_fd(char *s, int fd);void	ft_putendl_fd(char *s, int fd);void	ft_putnbr_fd(int n, int fd);
t_list	*ft_lstnew(void *content);void	ft_lstadd_front(t_list **lst, t_list *new);int		ft_lstsize(t_list *lst);t_list	*ft_lstlast(t_list *lst);void	ft_lstadd_back(t_list **lst, t_list *new);void	ft_lstdelone(t_list *lst, void (*del)(void*));void	ft_lstclear(t_list **lst, void (*del)(void*));void	ft_lstiter(t_list *lst, void (*f)(void *));t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
#endif

------------------------------
## O Automação com Makefile
O arquivo Makefile gerencia a compilação de forma incremental. A regra padrão mapeia os arquivos .c em .o por meio de uma regra de padrão (.o: .c), o que previne o fenômeno do relink (recompilação de arquivos intocados).

NAME    = libft.a
CC      = cc
CFLAGS  = -Wall -Wextra -Werror
LIB     = ar rcs
RM      = rm -f

FILES   = ft_isalpha.c\
	  ft_isdigit.c\
		  ft_isalnum.c\
		  ft_isascii.c\
		  ft_isprint.c\
		  ft_strlen.c\
		  ft_memset.c\
		  ft_bzero.c\
		  ft_memcpy.c\
		  ft_memmove.c\
		  ft_strlcpy.c\
		  ft_strlcat.c\
		  ft_toupper.c\
		  ft_tolower.c\
		  ft_strchr.c \
		  ft_strrchr.c\
		  ft_strncmp.c\
		  ft_memchr.c\
		  ft_memcmp.c\
		  ft_strnstr.c \
          	  ft_atoi.c\
		  ft_calloc.c\
		  ft_strdup.c\
		  ft_substr.c\
		  ft_strjoin.c\
		  ft_strtrim.c\ 
		  ft_split.c\
		  ft_itoa.c \
		  ft_strmapi.c\
		  ft_striteri.c\
		  ft_putchar_fd.c\
		  ft_putstr_fd.c\
		  ft_putendl_fd.c\
		  ft_putnbr_fd.c\
		  ft_lstnew.c\
		  ft_lstadd_front.c\ 
		  ft_lstsize.c\
		  ft_lstlast.c\
		  ft_lstadd_back.c\
		  ft_lstdelone.c\
		  ft_lstclear.c\
		  ft_lstiter.c\
		  ft_lstmap.c\

OBJS    = $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(LIB) $(NAME) $(OBJS)

.o: .c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

------------------------------
## Instructions## Compilação
Para compilar as 43 funções e gerar o arquivo de biblioteca estática libft.a, executa no terminal:

make

## Regras de Limpeza
Para remover todos os arquivos de objeto intermediários (.o) gerados na compilação, executa:

make clean

Para remover todos os arquivos de objeto e eliminar também o arquivo binário final (libft.a), executa:

make fclean

Para forçar uma limpeza completa seguida de uma nova recompilação do zero, executa:

make re

------------------------------
## Exemplo de Uso Prático (main_teste.c)
Para validar o funcionamento da biblioteca localmente, você pode criar um arquivo de teste isolado na raiz do diretório. O exemplo abaixo demonstra a inclusão do arquivo de cabeçalho e a validação do comportamento da função ft_strlen.

#include <stdio.h>
#include "libft.h"
int	main(void)
{
	char	*string_teste;
	size_t	tamanho;

	string_teste = "42 Luanda Angola";
	tamanho = ft_strlen(string_teste);
	printf("--- Teste de Execucao da Biblioteca ---\n");
	printf("String de teste: %s\n", string_teste);
	printf("Tamanho obtido por ft_strlen: %zu\n", tamanho);
	return (0);
}

Para compilar este arquivo de testes linkando diretamente com o arquivo binário da sua biblioteca (libft.a), use o comando abaixo no terminal:

cc -Wall -Wextra -Werror main_teste.c libft.a -o executavel_teste && ./executavel_teste

------------------------------
## Resources
## Referências & Documentação

### Referências & Documentação

- **ft_isalpha / ft_isdigit / ft_isalnum / ft_isascii / ft_isprint / ft_toupper / ft_tolower:** [Linux man-pages: isalpha(3)](https://man7.org)
- **ft_strlen:** [Linux man-pages: strlen(3)](https://man7.org)
- **ft_memset:** [Linux man-pages: memset(3)](https://man7.org)
- **ft_bzero:** [Linux man-pages: bzero(3)](https://man7.org)
- **ft_memcpy:** [Linux man-pages: memcpy(3)](https://man7.org)
- **ft_memmove:** [Linux man-pages: memmove(3)](https://man7.org)
- **ft_strlcpy / ft_strlcat:** [Linux man-pages: strlcpy(3)](https://die.net)
- **ft_strchr / ft_strrchr:** [Linux man-pages: strchr(3)](https://man7.org)
- **ft_strncmp:** [Linux man-pages: strncmp(3)](https://man7.org)
- **ft_memchr:** [Linux man-pages: memchr(3)](https://man7.org)
- **ft_memcmp:** [Linux man-pages: memcmp(3)](https://man7.org)
- **ft_strnstr:** [Arch Linux man-pages: strnstr(3bsd)](https://archlinux.org)
- **ft_atoi:** [Linux man-pages: atoi(3)](https://man7.org)
- **ft_calloc:** [Linux man-pages: calloc(3)](https://man7.org)
- **ft_strdup:** [Linux man-pages: strdup(3)](https://man7.org)

- **Playlist de Referência no YouTube:** [Assista à Playlist de Estudos e Tutoriais Utilizados](https://youtube.com)
- **Páginas de Manual Padrão do Linux:** `man strncmp`, `man strlcat`, `man malloc`
- **Documentação da 42:** Common Core e Guias de Abordagem do Projeto da 42.

## Descrição do Uso de IA

A Inteligência Artificial foi incorporada estritamente como uma ferramenta consultiva, de depuração (*debugging*) e mentoria técnica ao longo do desenvolvimento das funções. O uso da tecnologia foi direcionado para os seguintes propósitos:

- **Resolução de Dúvidas Específicas:** Esclarecimento de conceitos profundos de arquitetura da linguagem C, como o comportamento das *lists* e a diferença conceitual na manipulação prática de ponteiros simples (`t_list *`) vs. ponteiros para ponteiros (`t_list **`).
- **Identificação de Erros de Bloqueio:** Análise crítica e correção de falhas de lógica em cenários complexos que travavam o progresso do código.
- **Otimização de Código:** Sugestões pontuais para refatorar e limpar estruturas redundantes, garantindo que algoritmos como o `ft_split` se mantivessem performáticos, seguros contra vazamento de memória (*Memory Leaks*) e em total conformidade com as restrições da Norminette.
- **Estruturação de Documentação:** Orientação técnica na criação e organização deste arquivo de documentação em formato Markdown (`.md`), fornecendo os comandos corretos de sintaxe para renderização de tabelas, blocos de código e links de referência externa exigidos pelo currículo da 42.

*Nota: A IA **não** foi utilizada para gerar arquivos ou códigos cegamente de forma automatizada, servindo unicamente para guiar o raciocínio analítico necessário para atingir o sucesso nos testes de validação.*
