# Gestione della memoria in C 

La memoria è lo spazio dove il computer salva i dati, come numeri e stringhe, necessari per eseguire il programma. 
La gestione della memoria riguarda il modo in cui un programma richiede, usa e libera questa memoria per evitare sprechi e errori.

La memoria in un programma C è divisa principalmente in quattro sezioni:

**Stack**: qui vengono salvate le variabili locali e le chiamate a funzioni. È gestito automaticamente; ogni volta che entri in una funzione, le variabili locali vengono allocate, e quando esci dalla funzione, vengono automaticamente liberate.  
**Heap**: è lo spazio dove possiamo allocare memoria dinamicamente (quando non sappiamo in anticipo di quanto spazio abbiamo bisogno). La gestione del heap è manuale, il che significa che dobbiamo richiedere memoria e ricordarci di liberarla.  
**Data segment** (segmento dei dati): qui vanno le variabili globali e statiche.  
**Code segmen**t (segmento del codice): qui viene salvato il codice del programma, ovvero le istruzioni da eseguire    

### Allocazione dinamica della memoria in C
L'allocazione dinamica ci permette di ottenere memoria dallo spazio **heap** quando il programma è in esecuzione. Questo è utile quando non sappiamo in anticipo quanta memoria ci servirà.

### Funzioni per l'allocazione dinamica
Funzioni specifiche per l'allocazione e la gestione della memoria dinamica:  
- **malloc** (memory allocation): malloc ci permette di richiedere un blocco di memoria di una certa dimensione. Restituisce un puntatore all'inizio della memoria allocata, che possiamo usare nel programma.  
Nell'esempio malloc riserva memoria per 10 interi, e il puntatore ptr punta all'inizio di questo blocco di memoria.
```
int *ptr = (int *)malloc(sizeof(int) * 10);
```
- **calloc** (contiguous allocation): calloc funziona come malloc, ma riempie la memoria allocata con zeri.  
Questo alloca memoria per 10 interi e inizializza ogni elemento a zero.
```
int *ptr = (int *)calloc(10, sizeof(int));
```
- **realloc*** (re-allocation): realloc è utile se vogliamo cambiare la dimensione di un blocco di memoria già allocato se abbiamo bisogno di più spazio.
Qui aumentiamo lo spazio da 10 a 20 interi.
```
ptr = (int *)realloc(ptr, sizeof(int) * 20);
```
- **free**: Una volta che abbiamo finito di usare la memoria, dobbiamo liberarla usando free. Questo è importante per evitare memory leak, cioè sprechi di memoria che rimane occupata anche se non serve più.
```
free(ptr);
```
## Ricapitolando:
- Usare malloc o calloc per richiedere memoria.
- Se necessario, ridimensionare con realloc.
- Sempre, alla fine, ricordarsi di usare free per liberare la memoria.



