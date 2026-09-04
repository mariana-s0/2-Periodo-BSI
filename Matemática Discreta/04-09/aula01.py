pecas_pc = {"monitor", "teclado", "mouse"}
peca_note = {"teclado", "tela", "touchpad"}

uniao = pecas_pc.union(peca_note)
uniao_2 = pecas_pc | peca_note

#União: reúne todos os elementos de dois ou mais conjuntos, sem repetir.
print(uniao)
print(uniao_2)

intersecao = pecas_pc.intersection(peca_note)
intersecao_2 = pecas_pc & peca_note

#Interseção: reúne apenas os elementos que pertencem aos dois conjuntos ao mesmo tempo.
print(intersecao)
print(intersecao_2)

diferenca = pecas_pc.difference(peca_note)
diferenca_2 = pecas_pc - peca_note

#Diferença: pega os elementos que estão em um conjunto, mas não no outro.
print(diferenca)
print(diferenca_2)

diff_simetrica = pecas_pc.symmetric_difference(peca_note)
diff_simetrica_2 = pecas_pc ^ peca_note

#diferença simétrica: união − interseção.
print(diff_simetrica)
print(diff_simetrica_2)

print("mouse" in pecas_pc)
is_mouse_note = "mouse" in peca_note
print(is_mouse_note)

a = {1,2,3}
b = {3,2,1}

print("Sao iguais?" , a == b)

a = {1,2,3}
b = {1,2,3,4,5}

print("a é subconjunto de b?", a.issubset(b))
print("a é subconjunto de b?", a <= b)

print("a é subconjunto de b?", b.issuperset(a))
print("a é subconjunto de b?", b >= a)