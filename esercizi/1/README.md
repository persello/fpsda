# 1. Esercizio 1

Questo esercizio consiste in un rapido controllo di funzionamento del compilatore e di altro software. Sarà richiesta una banale modifica al programma soltanto per imparare l'uso di git. Tutti i successivi esercizi saranno corretti per comodità via pull request, in quanto visualizza immediatamente tutte e sole le modifiche effettuate da un determinato utente.

## 1.1. Compilazione

Navigare nella cartella del primo esercizio ed invocare il compilatore col seguente comando:

```zsh
clang test_compilatore.c -o test_compilatore
```

Come noterai, `clang` fornisce degli errori un po' più leggibili di `gcc`.

Apri VS Code da terminale nella cartella radice della repository (torna indietro alla cartella che contiene `esercizi/` e `README.md`). Puoi aprire questi file `.md` dentro Visual Studio Code premendo tasto destro e "Open preview". Puoi anche spostare la finestra di preview in una tab sulla destra.

![Screenshot di VS Code](../../resources/code-1.png)

Correggi l'errore, apri un terminale integrato (Terminal > New Terminal) e prova a compilare nuovamente. Esegui il file prodotto e controlla che funzioni.

## 1.2. Invio del programma corretto

Come noterai, i file nella barra di sinistra hanno vari colori (rosso e giallo per errori, verde in caso di modifiche). Occorre inviare tutte le modifiche al server di *GitHub*.

Aspetta, io non uso Linux, cosa me ne faccio del tuo eseguibile? Come vedi è grigio, e questo è dovuto al [file di configurazione `.gitignore`](../../.gitignore) (i file che iniziano per '.' sono nascosti su sistemi Linux e Darwin, ma visibili in Code).

Grazie a questo file, `git` sa di ignorare quanto specificato al suo interno, in questo caso tutti i prodotti di un compilatore. Puoi quindi tranquillamente inviare tutto, senza preoccuparti dei file oggetto o eseguibili (che è sbagliato includere in `git`).

Dal terminale, da dentro una delle cartelle della repo, indipendentemente da quale, scrivi:

```zsh
git status
```

### 1.2.1. Staging dei file

Apparirà un elenco di file modificati, con il percorso *relativo alla cartella corrente*. Dovresti avere tra le modifiche soltanto il file `test_compilatore.c`.

Ora dobbiamo dire a `git` che la prossima istantanea includerà tutti i file modificati.

```zsh
git add .
```

È bene fare attenzione ad includere tutti i file che ci interessano. Ad esempio, se siamo a due cartelle di profondità, specificare `.` come cartella di inclusione includerà solo le modifiche in questa cartella (quella data dal comando `pwd`), quindi si dovrà usare `../..` per considerare i due livelli superiori. Controllare con un nuovo `git status` che non ci siano "Untracked files" ma solo "Changes to be committed".

Quando si è soddisfatti del numero di file inclusi (spesso se si hanno molti file modificati non li si include tutti in un colpo, ma si opera in più blocchi di modifiche correlate tra loro), è ora di effettuare un commit, ovvero di registrare un istantanea dello stato corrente della repository.

Verranno registrati soltanti i file aggiunti in questo passaggio, chiamato "staging".

### 1.2.2. Commit

Per registrare un'istantanea, usare il seguente comando:

```zsh
git commit -m "<MESSAGGIO>"
```

Un buon messaggio per questo commit può essere "Fixed missing semicolon." (notare il punto, la maiuscola e la lunghezza non eccessiva del messaggio). Non serve raccontare molto per piccole modifiche come questa, in quanto tutte le righe modificate sono visualizzabili facilmente.

### 1.2.3. Altre modifiche

Per vedere cos'è cambiato tra l'ultima e la penultima istantanea, usare `git show`.

Per vedere cos'è cambiato tra i file attuali non "fotografati" e l'ultima istantanea, usare `git diff`.

> **Nota**: Per uscire da questi comandi, premere <kbd>q</kbd>.

`git diff` non dovrebbe mostrare modifiche.

Cambia il messaggio stampato dalla `printf()` in qualcosa di non scandaloso. Effettua un altro commit e controlla che la modifica sia stata fatta con `git show`. Passa al prossimo passo, hah.

### 1.2.4. Invio al server

È ora di inviare due commit al server. I server hanno un nome, e il nome del primo server, se non cambiato, è `origin`.

Eseguire il seguente comando per inviare al server `origin` (ovvero quello da cui hai clonato, con riferimento al tuo account, non il mio, perché altrimenti non funzionerà a causa di un accesso negato) il ramo di sviluppo `master`, che per ora fai finta di sapere cosa sia (annuisci vistosamente). Useremo solo `master` per un po', troppa carne al fuoco se no.

```zsh
git push origin master
```

## 1.3. Proposta di cambiamento al proprietario

È ora di effettuare una pull request per chiedere al proprietario della repository di revisionare le modifiche proposte ed eventualmente accettarle. Vai su *GitHub* dal tuo browser ed avvia una nuova pull request dal tuo ramo `master` verso il mio ramo `master`. Non è difficile, prova a vedere se riesci da solo e fai solo attenzione a selezionare il giusto mittente e destinatario (non scambiarli). Inserisci un commento se necessario.

## 1.4. Ricevere aggiornamenti

Quando pubblicherò aggiornamenti a questa repository, non saranno automaticamente passati al tuo fork. Devi dunque aggiungere il mio server, clonare i cambiamenti dal mio server e caricarli sul tuo. Come si fa?

### 1.4.1. Aggiungere un server

```zsh
git remote add <nome server> <url server>
```

Normalmente, al server della copia di provenienza "originale" si dà il nome `upstream`. L'url del server lo devi copiare dalla mia repository, selezionando "Clone" e copiando il link SSH.

Controlla di avere aggiunto il server scrivendo `git remote`. Dovresti avere `origin` ed `upstream`.

Ora occorre fare l'azione opposta al `push`... `pull`.

### 1.4.2. Pull

```zsh
git pull <nome server> <nome ramo>
```

Abbiamo detto che useremo sempre il ramo `master`. Da che server devi scaricare i dati? Da `upstream`.

Una volta scaricati, ti conviene immediatamente aggiornare il tuo server [facendo un `push`](#invio-al-server) verso `origin`.

Questo è quanto, forse vedremo il concetto di rami ma per ora non serve.

```zsh
# Fondamentali:
git clone   # Clona una repository (ricezione iniziale)
git add     # Staging delle modifiche
git commit  # Istantanea delle modifiche in staging
git push    # Invio al server
git pull    # Ricezione dal server

# Utili:
git status  # Stato attuale della repo locale
git diff    # Differenza tra i file che vedi rispetto all'ultima istantanea
git show    # Differenza tra le ultime due istantanee
git remote  # Gestisci i server
```

Passa all'[esercizio 2](../2/README.md).
