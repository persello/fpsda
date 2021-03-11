# 1. Esercizio 2

Creiamo una semplice libreria per effettuare lo scambio di due variabili.
Come puoi vedere, esiste un programma `main.c` che chiama una funzione `swap(int*, int*)` non esistente. Devi crearla e fare in modo di non modificare `main.c`.

## 1.1. Requisiti per la libreria

Come vedi, la funzione deve essere del tipo

```c
void swap(int*, int*)
```

che deve essere dichiarata (non **definita**) nel file `libswap/include/libswap.h`.

Quindi dovrai creare una cartella `libswap` che include (te lo suggerisco) una cartella `src` per i file sorgente ed una cartella `include` per gli header. Questa è soltanto una delle strutture che si vedono in giro per le librerie (e non mi piace molto).

### 1.1.1. Dichiarazione

Crea un file `libswap.h` in `include` ed aggiungi la dichiarazione della funzione.

> **Suggerimento 1**: Copia circa quanto scritto nel blocco di codice precedente.
>
> **Suggerimento 2**: Formatta sempre il codice prima di inviarlo. Usa la palette dei comandi di VS Code per capire quale sia la scorciatoia per farlo (Format document).

Una volta creato il file e la dichiarazione della funzione, dovresti non dover ricevere errori riguardo l'inclusione. Dovresti vedere invece un errore del tipo:

```zsh
$ clang main.c                
Undefined symbols for architecture arm64:
  "_swap", referenced from:
      _main in main-364f14.o
ld: symbol(s) not found for architecture arm64
clang: error: linker command failed with exit code 1 (use -v to see invocation)
```

Che significa che la compilazione è andata a buon fine ma il linker non è stato in grado di trovare la funzione `swap` compilata.

### 1.1.2. Implementazione

Crea il file `swap_int.c` nella cartella `src`, ricordati di includere ciò che va incluso ed implementa la funzione.

### 1.1.3. Compilazione

Invoca il compilatore elencando entrambi i file sorgente. I file vengono compilati individualmente, e se hai incluso il file `libswap.h` in `swap_int.c`, questi vengono compilati entrambi correttamente anche separatamente, perché tutti e due includono la dichiarazione di una funzioe che gli serve conoscere. Una volta compilati separatamente come file oggetto, il linker sa che la funzione a cui si fa riferimento in `main.o` è implementata in `swap_int.o` e genera un unico file eseguibile completo.

Fai un commit dopo aver verificato il funzionamento del programma. Non serve fare un push per ogni commit, ma se vuoi fallo. Controlla che la repo sia pulita (`git status` deve dire che tutto è aggiornato).

## 1.2. Aggiunta di uno swap per stringhe

Aggiungi una funzione `swap_string`. Ti è consentito creare un nuovo file `swap_string.c` ma non un nuovo file header. Puoi modificare il file `main.c` aggiungendo una nuova parte per lo swap di due stringhe dopo quella degli interi. Non modificare la prima parte. Puoi modificare il file `libswap.h`.

> **Nota**: Una stringa è rappresentata dall'indirizzo in memoria del suo primo carattere. Fare lo swap significa scambiare i due indirizzi. I due indirizzi sono salvati a loro volta in una locazione di memoria. Queste locazioni di memoria contengono un numero intero, quindi alla fine andrebbe bene la funzione swap esistente. Prova a usare la funzione esistente, e vedi cosa dice il compilatore. Il programma deve funzionare comunque, quelli del compilatore sono solo warning, non errori.

Rinomina la vecchia funzione in `swap_int` (puoi modificare quella parte di `main.c`), e prova la nuova `swap_string`. Assicurati che il test funzioni e che il compilatore non dia nessun warning.

Effettua un commit.

## 1.3. Spostamento della libreria

Crea una cartella `lib/` alla radice di questa repository. Sposta `libswap` nella cartella `lib/`, ricompila il secondo esercizio e correggi tutti gli errori, se ce ne sono.

Effettua un commit, push e una nuova merge request.

> **Trucco**: Per non stare a fare `git add .` e `git commit -m "<MESSAGGIO>"` fai direttamente `git commit -a -m "<MESSAGGIO>"`.
>
> Il parametro `-a` sta per "all" ed include tutti i file modificati. Non abusarne quando hai decine o centinaia di file modificati.

Passa all'[esercizio 3](../3/README.md).
