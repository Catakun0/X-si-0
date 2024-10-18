# Jocul X si 0   

## Constructori si Operatorii
# Construcotrii 
Aveam mai multe tipuri de constructoria acestea fiind   
1. Constructorul implicit
2. Constructorul de copiere
3. Constructorul cu parametri   
* 1. Constructorul implicit, aceste este creat in mod implicit de catre copilator dar poate fi declarat si explicit de programator ca instr-un exemplu Board():
* 2. Constructorul de copiere, acesta poate copia un obect prin primirea unui parametru Ca de exemplu cand creem obectul respectiv puteam sa iitrimitem ca parametru ce obect sa copie Board board; board(&obectulPentru copiere)   
Acesta este folosit pentru pentru a crea un obiect ca o copie a unui obect existent si apelat atunci cand un obiect este initializat cu un alt obiect
Folosim "&" cand dormi sa trimitem un pointer si pentru a m odica originalul de asemenea
* 3. Constructorul cu parametri detine parametri date de timp int bool float string etc.. sau chiar obecte 
## Operatori
1. Operator de copiere
2. Operator de comparatie
3. Operator de citire 
4. Operator de afisare
* 1. Operatorul de copiere in comparatie spre exemplpu cu constructorul de copiere este folosit pentru a copia valorile dintri-un obiect existent intrun alt obiect dja creat si apelat atunci cand un obiect este trimit unui alt obiect
* 2. Operatorul de comparatie este folosit pentru a compara date si initializat cu bool si deja "operator ==" folosint "==" ce inseamna daca este egal
* 3. Operatorul de citire poate citi niste date introduse de utilizator folosint istream si ">>"
* 4. Operatorul de afisare este folosit deja pentru a afisa spre exemplu date diferenta fiind prin declararea in loc de istream e necesar ostream si semnele "<<"