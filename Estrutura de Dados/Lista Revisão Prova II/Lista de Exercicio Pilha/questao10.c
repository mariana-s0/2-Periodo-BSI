/*Questão 10 
Na notação pós-fixa, o operador vem depois dos operandos: a expressão 
(5 + 3) * 2 é escrita como 5 3 + 2 *. Usando o TAD Pilha, implemente 
a função int avalia_posfixa(char *expr), que calcula o valor de uma 
expressão pós-fixa com operandos de um dígito (0 a 9) e os operadores 
+, -, * e /, separados por espaços. Ex.: avalia_posfixa("5 3 + 2 *") 
devolve 16. Indique o que sua função faz se a expressão estiver mal 
formada (por exemplo, "5 +").*/