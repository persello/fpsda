[gh-git-config-user]: https://docs.github.com/en/github/using-git/setting-your-username-in-git#setting-your-git-username-for-every-repository-on-your-computer

[gh-git-config-email]: https://docs.github.com/en/github/setting-up-and-managing-your-github-user-account/setting-your-commit-email-address#setting-your-email-address-for-every-repository-on-your-computer

[gh-ssh-config]: https://docs.github.com/en/github/authenticating-to-github/connecting-to-github-with-ssh

# 1. Esercizi di programmazione e varie

## 1.1. Preparazione

Gli esercizi vanno suddivisi in cartelle numerate all'interno della cartella `esercizi`. È già presente la cartella `esercizi/1`.

### 1.1.1. Software

Assicurati di avere installati i seguenti programmi: `git`, `clang` (al posto di `gcc`, si usa allo stesso modo), `make`.
Si consiglia di usare la shell `zsh`, e di configurarla come shell di default del sistema. Ci sono numerose guide su come fare una simile operazione, e in alcuni casi è necessario installare `zsh`.

Si consiglia anche di usare Visual Studio Code, e di autorizzarlo ad installare gli strumenti adeguati per la modifica di file C/C++ alla prima apertura di un file sorgente C.
Per usare il comando `code` nel terminale è necessario eseguire il comando "Install 'code' command in PATH" attraverso la palette dei comandi di Code <kbd>Ctrl</kbd>+<kbd>Shift</kbd>+<kbd>P</kbd>.

Prima di iniziare, aprire un terminale in una cartella adatta al contenimento di progetti e codice (ad esempio `~/Projects` o `~/Developer`, dove `~` è la cartella home dell'utente).

### 1.1.2. Preparare `git`

Una volta pronti col terminale in una cartella scelta, occorre configurare `git` (il software locale, da non confondere con *GitHub* o *GitLab*). Si consiglia di seguire la seguente [guida](gh-git-config-user) per il nome utente e [questa](gh-git-config-email) per l'indirizzo mail, facendo attenzione ad usare lo stesso indirizzo con cui ci si è registrati a *GitHub*, altrimenti potrebbero esserci problemi di autenticazione o riconoscimento del lavoro svolto.

### 1.1.3. Configurare una chiave `ssh`

`SSH` è una tecnologia di shell remota, usata per accedere al terminale di un altro computer. Per potersi collegare al server di *GitHub*, occorre fornire a quel server la tua chiave pubblica (**non quella privata**). Se la chiave non esiste, è opportuno crearne una adeguata.

Per fare ciò, seguire [questa guida per *GitHub*](gh-ssh-config). Una volta accertato che la connessione funziona, si può passare a clonare la repository.

### 1.1.4. Fare un fork (*GitHub*)

Visto che dovrai effettuare delle modifiche a questa repository, e non sei autorizzato a scrivere in quella originale, dovrai farne una copia nel tuo account.

Premi "Fork" in alto a destra e scegli il tuo account (se richiesto). Dovresti essere alla pagina `https://github.com/<tuo nome utente>/<nome repository copiata>`.

### 1.1.5. Clonare la repository

Cliccare sul pulsante verde "Clone" (potrebbe scrivere "Code" se rileva un'installazione di VS Code) e copiare il link specifico per `SSH` (evitare per ora l'apertura automatica in VS Code o i link HTTPS).

Digitare in un terminale (aperto nella cartella desiderata) il seguente comando:

```zsh
git clone <link copiato>
```

Questo clonerà tutti i file della repository in una cartella con lo stesso nome all'interno del direttorio corrente. Ora puoi entrare nella cartella ed aprirla col comando `code .` (notare il punto, e se non funziona ricontrollare [il primo paragrafo](#software)).

## 1.2. Continuare con gli esercizi

Per continuare, naviga al [README del primo esercizio](esercizi/1/README.md).

# 2. Indice degli esercizi

|          Numero           |                   Descrizione                   |
| :-----------------------: | ----------------------------------------------- |
| [1](esercizi/1/README.md) | Test compilatore.                               |
| [2](esercizi/2/README.md) | Libreria di swap di vario tipo.                 |
