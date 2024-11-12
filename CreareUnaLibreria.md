# CREARE UNA LIBRERIA IN C
Creare una libreria in C significa mettere insieme diverse funzioni in un unico file che può essere usato da altri programmi.  
Ci sono due tipi di librerie in C:
- Librerie Statiche (.a): Quando compili un programma con una libreria statica, tutto il codice della libreria viene incluso direttamente nell’eseguibile.
- Librerie Dinamiche (.so o .dll): Sono separate dal programma e vengono caricate solo quando il programma è in esecuzione. 
Creare una libreria statica in C:
- **Scrivi le Funzioni nei File .c**  
Ogni funzione che vuoi includere nella tua libreria deve essere scritta in un file .c.
Ad esempio, se vuoi avere una funzione ft_strlen e una ft_strcpy, crea dei file chiamati ft_strlen.c e ft_strcpy.c.
- **Crea un File Header .h**  
Il file header (.h) è dove dichiari tutte le tue funzioni, in modo che chiunque usi la libreria sappia quali funzioni ci sono e come chiamarle. In questo caso, chiamalo libft.h.
  
```
// libft.h
#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>  // per il tipo size_t

size_t ft_strlen(const char *s);
char *ft_strcpy(char *dest, const char *src);

#endif
```

- **Compila i File .c in File Oggetto .o**
Ogni file .c deve essere compilato in un file oggetto (.o). Un file oggetto contiene il codice compilato, ma non è ancora una libreria o un programma eseguibile.  
Esegui il seguente comando per ogni file .c:
```
gcc -Wall -Wextra -Werror -c ft_strlen.c ft_strcpy.c

```
L’opzione -c indica al compilatore di creare file .o anziché un eseguibile. Questo comando creerà ft_strlen.o e ft_strcpy.o.
 
- **Usa il Comando ar per Creare la Libreria**  
Ora che hai i file oggetto, puoi creare la libreria statica usando il comando ar, che sta per "archiver".
Questo comando raggruppa i file .o in un unico file .a (archivio), che è la libreria vera e propria.
  
```
ar rcs libft.a ft_strlen.o ft_strcpy.o
```

**r** significa "inserire" i file oggetto nella libreria.  
**c** significa "creare" la libreria se non esiste.  
**s** crea un indice per velocizzare l’accesso alle funzioni nella libreria.   
Dopo aver eseguito questo comando, otterrai un file chiamato libft.a, che è la tua libreria statica.  

-  **Usa il Makefile per Automatizzare il Processo**
Scrivi un Makefile per automatizzare tutto il processo di compilazione e creazione della libreria.
Ecco un esempio di Makefile per il progetto libft:
```
# Nome della libreria
NAME = libft.a

# Compiler e opzioni
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# File sorgente e oggetto
SRCS = ft_strlen.c ft_strcpy.c
OBJS = $(SRCS:.c=.o)

# Regola per creare la libreria
$(NAME): $(OBJS)
    ar rcs $(NAME) $(OBJS)

# Regola per compilare i file oggetto
%.o: %.c
    $(CC) $(CFLAGS) -c $< -o $@

# Regola per pulire i file oggetto
clean:
    rm -f $(OBJS)

# Regola per pulire tutto (file oggetto e libreria)
fclean: clean
    rm -f $(NAME)

# Regola per ricompilare tutto
re: fclean $(NAME)
```
  
- **Usa la Libreria nel Tuo Programma**
Per usare la libreria in un programma, compila il programma includendo la libreria libft.a. Ad esempio, se hai un file main.c che usa ft_strlen e ft_strcpy, compila così:
  
```
gcc main.c -L. -lft -o my_program

```
- L. dice al compilatore di cercare librerie nella directory corrente.
- lft indica il nome della libreria senza il prefisso lib e l’estensione .a.
