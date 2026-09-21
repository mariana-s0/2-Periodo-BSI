const p1 = document.querySelector('#paragrafo')
const div1 = document.querySelector('.abc')
const btn = document.querySelector('#btn')
const btn1 = document.querySelector('#btn1')


btn.addEventListener("click", function() {
    const selecionado = document.querySelector(
    'input[name="sexo"]:checked'
);

    console.log(selecionado.value);
});

btn.addEventListener("click", function() {
    console.log(curso.value);
});

console.log(curso.options[0].value);
console.log(curso.options[0].text);
console.log(curso.options[0].selected);

const opcao = curso.options[curso.selectedIndex];
console.log(opcao.value); console.log(opcao.text);

btn1.addEventListener("click", function(){
    console.log(nada.value);
    if(nada.value=="nada"){
        gato.style.display="none";
        cachorro.style.display="none";
    }
     if(nada.value=="gato"){
        gato.style.display="block";
        cachorro.style.display="none";
    }
       if(nada.value=="cachorro"){
        gato.style.display="none";
        cachorro.style.display="block";
    }
});



