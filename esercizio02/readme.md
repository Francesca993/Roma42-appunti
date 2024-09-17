%> ls -l
total XX
drwx--xr-x 2 XX XX XX Jun 1 20:47 test0 // cartella che utente ouò rwx, il gruppo può eseguire e leggere, gli utenti solo eseguire, il numero sta per il link simbolico
-rwx--xr-- 1 XX XX 4 Jun 1 21:46 test1 // a questo file devo impostare anche i byte
dr-x---r-- 2 XX XX XX Jun 1 22:45 test2
-r-----r-- 2 XX XX 1 Jun 1 23:44 test3
-rw-r----x 1 XX XX 2 Jun 1 23:43 test4
-r-----r-- 2 XX XX 1 Jun 1 23:44 test5
lrwxrwxrwx 1 XX XX 5 Jun 1 22:20 test6 -> test0
%>
