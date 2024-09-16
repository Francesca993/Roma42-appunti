# Comandi importanti:

- **ls** : elenca i file e le directory
  (ls -l //elenco dettagliato
  ls -a // mostra anche file nascosti)
- **cd** : cambia directory corrente
- **pwd** :mostra la directory corrente
- **mkdir** : crea una nuova directory
- **rmdir** : rimuove una directory vuota
- **rm** : cancella file o directory
- **cp** : copia file o directory
- **mv** sposta o rinomina file o directory
- **touch** : crea un nuovo file vuoto o aggiorna la data di modifica di un file
- **find** : cerca il file o la directory nel filesystem
- **du** : mostra l'utilizzo dello spazio su disco di file e directory
- **truncate** -s 40 nomefile : imposta la dimensione di 40 byte
- **touch** -t 202306012342 nomefile : cambia la data

## Visualizzazione e modifica dei file

- **cat** : legge, concatena e scrive il contenuto di file
- **less** : visualizza il contenuto di file pagina per pagina
- **vim** + nome file : creo il file editabile + "i" per insert per scrivere + "esc" + ":x" per chiudere e salvare

## Aggiungere dei permessi

- **chmod**: ci sono tre tipi di permessi:
  -r > lettura
- w > scrittura
- x > esecuzione

Gli **utenti** si dividono in tre categorie: utenti normali, gruppi e altri.
Ci sono tre comandi per la gestione dei permessi sui file:

- chmod > cambia modalità
- chown > cambia proprietà
- chgrp > cambia gruppo
  Le opzioni per controllare i permessi a livello utente sono:
- **u** > concede permessi a un utente
- **g** > concede permessi a un gruppo
- **o** > concede permessi agli altri
  Queste opzioni devono essere precedute dall'operatore "+" che aggiunge un nuovo permesso o "-" che lo revoca
  es: chmod +r sample.tx > comando per aggiungere permessi di lettura a un file

-possiamo usare numeri **(modalità ottale**) per rappresentare i permessi dei file:

- lettura: 4
- scrittura: 2
- esecuzione: 1

ES gestire i permessi in modalità SIMBOLICA
chmod u+rwx, go+r install.sh // u+rwx > aggiunta scrittura, lettura esecuzione per gli utenti, go+r > aggiunta lettura per gli altri
ES gestire i permessi in modalità OTTALE:
chmod 744 install.sh // il primo numero 7 da tutti i permessi all'utente perchè la somma di 4(lettura)+2(scrittura)+1(esecuzione), il secondo (4) rappresenta i permessi per i gruppi (4 solo lettura), il terzo numero è per gli altri

nella versione simbolica si possono mascherare i bit di permesso che vogliamo cambiare mentre nella modalità ottale i permessi sono assoluti e non possono essere usati per modificare i singoli bit

**- ls -l nomefile** > per leggere i permessi di un file o una directory
