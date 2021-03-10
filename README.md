[gh-git-config-user]: https://docs.github.com/en/github/using-git/setting-your-username-in-git#setting-your-git-username-for-every-repository-on-your-computer

[gh-git-config-email]: https://docs.github.com/en/github/setting-up-and-managing-your-github-user-account/setting-your-commit-email-address#setting-your-email-address-for-every-repository-on-your-computer

[gl-ssh-config]: https://docs.gitlab.com/ee/ssh/#see-if-you-have-an-existing-ssh-key-pair

# 1. Esercizi di programmazione e varie

## 1.1. Preparazione

Gli esercizi vanno suddivisi in cartelle numerate all'interno della cartella `esercizi`. È già presente la cartella `esercizi/1`.

### 1.1.1. Software

Assicurati di avere installati i seguenti programmi: `git`, `clang` (al posto di `gcc`, si usa allo stesso modo), `make`.
Si consiglia di usare la shell `zsh`, e di configurarla come shell di default del sistema.

Si consiglia anche di usare Visual Studio Code, e di attendere che installi gli strumenti adeguati per la compilazione di file C/C++.
Per usare il comando `code` nel terminale è necessario eseguire il comando "Install 'code' command in PATH" attraverso la palette dei comandi di Code.

Prima di iniziare, aprire un terminale in una cartella adatta al contenimento di progetti e codice (ad esempio `~/Projects` o `~/Developer`, dove `~` è la cartella home dell'utente).

### 1.1.2. Preparare `git`

Una volta pronti col terminale in una cartella scelta, occorre configurare `git` (il software locale, da non confondere con *GitHub* o *GitLab*). Si consiglia di seguire la seguente [guida](gh-git-config-user) per il nome utente e [questa](gh-git-config-email) per l'indirizzo mail, facendo attenzione ad usare lo stesso indirizzo con cui ci si è registrati a *GitHub*/*GitLab*, altrimenti potrebbero esserci problemi di autenticazione o riconoscimento del lavoro svolto.

### 1.1.3. Configurare una chiave `ssh`

`SSH` è una tecnologia di shell remota, usata per accedere al terminale di un altro computer. Per potersi collegare al server di *GitLab*/*GitHub* scelto, occorre fornire a quel server la tua chiave univoca. Se la chiave non esiste, è opportuno crearne una adeguata.

Per fare ciò, seguire [questa guida per *GitLab*](gl-ssh-config) fino al punto "Verify that you can connect" (incluso) o cercare la documentazione adeguata per *GitHub*. Una volta accertato che la connessione funziona, si può passare a clonare la repository.

### 1.1.4. Fare un fork (*GitLab*)

Visto che dovrai effettuare delle modifiche a questa repository, e non sei autorizzato a scrivere in quella originale, dovrai farne una copia nel tuo account.

Premi "Fork" in alto a destra e scegli il tuo account. Dovresti essere alla pagina `https://gitlab.com/<tuo nome utente>/<nome repository clonata>`.

### 1.1.5. Clonare la repository

Cliccare sul pulsante "Clone" in alto a destra e copiare il link specifico per `SSH` (evitare per ora l'apertura automatica in VS Code).

Digitare nel terminale (aperto nella cartella desiderata) il seguente comando:

```zsh
git clone <link copiato>
```

Questo clonerà tutti i file della repository in una cartella con lo stesso nome all'interno del direttorio corrente. Ora puoi entrare nella cartella ed aprirla col comando `code .` (notare il punto, se non funziona ricontrollare [il primo paragrafo](#software)).

## 1.2. Continuare con gli esercizi

Per continuare, naviga al [README del primo esercizio](esercizi/1/README.md).

# 2. Indice degli esercizi

|          Numero           |                   Descrizione                   |
| :-----------------------: | ----------------------------------------------- |
| [1](esercizi/1/README.md) | Test compilatore.                               |
| [2](esercizi/2/README.md) | Libreria di swap di vario tipo.                 |
