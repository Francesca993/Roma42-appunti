 <h1 align="center">Basi e fondamenti di C</h1>  
  
Il **compilatore** gcc -Wall -Wextra -Werror rende il file scritto leggibile dalla macchia.  

### Direttive 
precedute da # del tipo #include perche non ha comandi incorporati di lettura e scrittura e quindi include delle librerie. 
### Funzioni
blocchi per mezzo dei quali i programmi venhoko costruiti, semplicemente un raggruppamento di una serie di istruzioni al  quale è stato assegnato un nome
### Istruzioni
una istruzione è un comando che biene eseguito quando il programma è in funzione. Il c ha bisogno che ogni istruzione termini con ";". 

## Variabili e assegnamenti
Le variabkli sono un modo dei probrammi per memorizzare temporaneamente i dati in un luogo durante l'esecuzione di un programma.
Questi luoghi di memorizzazione sono chiamsti ** variabili. **  
### Tipi di variabili
Ogni variabile deve avere un ** tipo **  che specifichi la tipologia di dato che dovrà contenere. È importante scegliere il tipo appropriato: da esso dipende il modo in cui la variabile
viene memorizzata e le operazioni che si possono compiere su essa.   
    - Una variabile di tipo ** int ** può memorizzare un numero intero come 0, 1, 392...
    - Una variabkle di tipo ** float ** può memorizzare numeri piu grandi e può contenere numeri con cifre dopo la virgola.
Le variabili devono essere ** dichiarate ** prima di poter essere utilizzate, specificando il tipo e successivamente il nome
```
int height;
float profit;
 // Possonoessere combinate se sono dello stesso tipo.
int height, lenght, width;
float profit, loss;
```
Si può conferire un valore a una variabile tramite un ** assegnamento. **
I nomi delle variabili vengono chiamati ** identificatori **.  
Il valore in esso contenuto viene definito ** costante **.  

### Operatori aritmetici
- Unario: "+" e "-"  richiedono un solo operando.
- Binario: " + - / * % " (% restituisce il resto).  
### Operatori di assegnamento
- L'assegnamento semplice con l'operatore "="  per memorizzare il suo valore all'interno di una vadiabile.
- Assegnamento composto: ovvero i+=2 è lo stesso di i= i + 2;
### Operatori di incremento e devremento
```
i= i+1; è uguale a i+=1
```
- Incremento ++
- Decremento --
### Operatori relazionali
< minore di
> maggiore di
<= minore uguale a
=> maggiore uguale a
== uguale a
!= diverso da 

### Operatori logici
! negazione logica
&& and logico
|| or logico

### Istruzioni di selezione
- Istruzioni di selezione: if, switch
- Istruzioni di iterazione: while, do, for
- Istruzioni di salto: breack, comtinue, goto
- Istruzione composta

### I booleani
In c non restituisce vero o falso, ma un valore intero:
- 0 pee falso
- 1 per vero

## L'istruzione "IF"
Permette al programma di scegliere tra due alternative sulla base del valore di una espressione.  
if(espressione)istruzione  
La clausola "else": l'istruzione che segue la clausola else viene eseguota se il ritorno dell'if e valore 0.  
```
if (i > j) 
{
  max = i;
}
else
{
max = j;
}
```
### Operatori condizionali
espr1 ? espr2 : espr3
return i > j ? i : j;
tradotto: se i è meaggiore di j allora esegui la i, altrkmenti la j.



```
```
