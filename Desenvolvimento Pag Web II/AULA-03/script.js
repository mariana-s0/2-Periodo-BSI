/*let turma = {
    'id': '1454542',
    'ano': '2026',
    'alunos': [
         {
            "nome": "Maria",
            "matriculado": true,
            "disciplinas": ["EDI"],
            "idade": 42,
            "telefones": []
          },
          {
            "nome": "João",
            "matriculado": true,
            "disciplinas": ["WebII", "BancoDados"],
            "idade": 25,
            "telefones": ["32111111"]
          },
          {
            "nome": "Ana",
            "matriculado": false,
            "disciplinas": ["EDI", "WebII", "POO"],
            "idade": 31,
            "telefones": ["329889898", "32333333"]
          },
          {
            "nome": "Carlos",
            "matriculado": true,
            "disciplinas": ["EDI", "WebII", "POO", "BancoDados"],
            "idade": 28,
            "telefones": ["32444444", "32555555", "32666666"]
          },
          {
            "nome": "Juliana",
            "matriculado": true,
            "disciplinas": ["EDI", "WebII", "POO", "BancoDados", "Redes"],
            "idade": 35,
            "telefones": ["32777777", "32888888"]
          },
          {
            "nome": "Pedro",
            "matriculado": false,
            "disciplinas": ["WebII"],
            "idade": 22,
            "telefones": ["32999999", "32123456", "32765432"]
          },
          {
            "nome": "Fernanda",
            "matriculado": true,
            "disciplinas": ["EDI", "POO"],
            "idade": 39,
            "telefones": []
          },
          {
            "nome": "Rafael",
            "matriculado": true,
            "disciplinas": ["BancoDados", "Redes", "WebII"],
            "idade": 27,
            "telefones": ["32345678"]
          },
          {
            "nome": "Camila",
            "matriculado": false,
            "disciplinas": ["EDI", "WebII", "POO", "Redes"],
            "idade": 30,
            "telefones": ["32456789", "32567890"]
          },
          {
            "nome": "Lucas",
            "matriculado": true,
            "disciplinas": ["EDI", "WebII", "POO", "BancoDados", "Redes"],
            "idade": 24,
            "telefones": ["32678901", "32789012", "32890123"]
          }
    ]
};
1.Qual o ano da turma ?
2.Quantos alunos a turma tem ?
3.Quantos alunos matriculados a turma tem ?
4.O nome dos alunos matriculados que estão na disciplina de EDI.
5.O nome e a idade dos alunos maiores de idade .
6.A quantidade de alunos matriculados em cada disciplina



1.turma ['ano']

2.turma['alunos'].length

3.cont =0;
for(let i of turma['alunos']){
             if(i['matriculado']==true){
            cont++;
        }
}
        console.log(cont);

4.for(let i of turma['alunos']){
             if(i['matriculado']==true )
                 if(i['disciplinas'].includes("EDI")){
                    console.log(i['nome']);
        }
}

5.for(let i of turma['alunos']){
             if(i['idade']>=18 )
                  console.log(i['nome']);
                    console.log(i['idade']);
}

6.for(let i of turma['alunos']){
             if(i['matriculado']==true )
                 console.log(i['nome'])
                     for(let disc of i['disciplinas']){
                         if(Object.keys(cont_disc).includes(disc)){
                             cont_disc[disc] +=1;
                         }else{
                             cont_disc[disc]=1;
                         }
                     }
        }
                     for(let k of Object.keys(cont_disc)){
conso
*/ 