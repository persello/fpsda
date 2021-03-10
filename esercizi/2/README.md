# Esercizio 2

Creiamo una semplice libreria per effettuare lo scambio di due variabili.
Come puoi vedere, esiste un programma `main.c` che chiama una funzione `swap(int*, int*)` non esistente. Devi crearla e fare in modo di non modificare `main.c`.

## Requisiti

Come vedi, la funzione deve essere del tipo

```c
void swap(int*, int*)
```

e deve essere dichiarata (non **definita**) nel file `libswap/include/libswap.h`.

Quindi dovrai creare una cartella `libswap` che include (te lo suggerisco) una cartella `src` per i file sorgente ed una cartella `include` per gli header. Questa è soltanto una delle strutture che si vedono in giro per le librerie (e non mi piace molto).

Crea un file `libswap.h` in `include` ed aggiungi la dichiarazione della funzione.

> **Suggerimento 1**: Copia circa quanto scritto nel blocco di codice precedente.
> **Suggerimento 2**: Formatta sempre il codice prima di inviarlo. Usa la palette dei comandi di VS Code per capire quale sia la scorciatoia per farlo (Format document).

Una volta creato il file e la dichiarazione della funzione, dovresti non dover ricevere errori riguardo l'inclusione
