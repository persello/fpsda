# Esercizio 1

Questo esercizio consiste in un rapido controllo di funzionamento del compilatore. Sarà richiesta una banale modifica al programma soltanto per imparare l'uso di git. Tutti i successivi esercizi saranno corretti per comodità via merge request in quanto mostra tutte e sole le modifiche effettuate (*pull request* su *GitHub*).

## Compilazione

Navigare nella cartella del primo esercizio ed invocare il compilatore col seguente comando:

```zsh
clang test_compilatore.c -o test_compilatore
```

Come noterai, `clang` fornisce degli errori molto più leggibili di `gcc`.

Apri VS Code da terminale nella cartella radice della repository (torna indietro alla cartella che contiene `esercizi/` e `README.md`). Puoi aprire questi file `.md` dentro Visual Studio Code premendo tasto destro e "Open preview". Puoi anche spostare la finestra di preview in una tab sulla destra.

![Screenshot di VS Code](../../resources/code-1.png)

Correggi l'errore, apri un terminale integrato (Terminal > New Terminal) e prova a compilare nuovamente. Esegui il file prodotto e controlla che funzioni.

## Invio del programma corretto

Come noterai, i file nella barra di sinistra hanno vari colori (rosso e giallo per errori, verde in caso di modifiche). Occorre inviare tutte le modifiche al server di *GitLab*.

Aspetta, io non uso Linux, cosa me ne faccio del tuo eseguibile? Come vedi è grigio, e questo è dovuto al [file di configurazione `.gitignore`](../../.gitignore) (i file che iniziano per '.' sono nascosti su sistemi Linux e Darwin, ma visibili in Code). `git` ora sa di ignorare questo tipo di file. Puoi quindi tranquillamente inviare tutto, senza preoccuparti dei file oggetto o eseguibili (che è sbagliato includere in `git`).

Dal terminale, da dentro una delle cartelle della repo, indipendentemente da quale, scrivi:

```zsh
git status
```

### Staging dei file

Apparirà un elenco di file modificati. Dovresti avere soltanto il file `test_compilatore.c`.

Ora dobbiamo dire a `git` che la prossima modifica includerà tutti i file elencati. 

```zsh
git add .
```

È bene fare attenzione ad includere tutta la repo. Se siamo a due cartelle di profondità, specificare `.` come cartella di inclusione includerà solo le modifiche in questa cartella, quindi si dovrà usare `../..` per considerare i due livelli superiori. Controllare con un nuovo `git status` che non ci siano "Untracked files" ma solo "Changes to be committed".

Quando si è soddisfatti del numero di file inclusi (spesso se si hanno molti file modificati si opera in più parti correlate tra loro), è ora di effettuare un commit, ovvero di registrare un istantanea dello stato corrente della repository.

Verranno registrati soltanti i file aggiunti in questo passaggio, chiamato "staging".

### Commit

Per registrare un'istantanea, usare il seguente comando:

```zsh
git commit -m "<MESSAGGIO>"
```

Un buon messaggio per questo commit può essere "Fixed missing semicolon." (notare il punto, la maiuscola e la lunghezza non eccessiva del messaggio). Non serve raccontare molto, in quanto tutte le modifiche sono facilmente visibili.

Per vedere cos'è cambiato, usare `git diff`.
