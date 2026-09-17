
*1.Crie um botão centralizado (na horizontal e vertical) que quando clicado 
muda a cor de fundo da página na seguinte sequência : azul -> verde -> amarelo -> vermelho ->
rosa -> azul ...

2.Crie um botão e um parágrafo de texto. A cada clique no botão, se o texto estiver visível, ele é
ocultado, e se estiver oculto, torna-se visível.

3.Crie dois inputs de texto e um botão. O usuário digita um texto no primeiro input e um número
no segundo. Ao clicar no botão exibido no console o texto do primeiro input N vezes, onde N é o
número digitado no segundo input.

4.Adicione o seguinte object ao seu código JavaScript :

const box = { 
    "largura":"150px"
    "altura":"200px"
    "cores":{
        "fundo":"blue"
        "borda":"red"
        }
};

E no HTML :
<div id="html_box"></div>

Adicione um botão que quando o usuário clicar, aplique os estilos definidos na variável box na div do HTML.
*/ 

// ==========================
// QUESTÃO 1
// ==========================

const btnCor = document.getElementById("btnCor");

const cores = [
    "blue",
    "green",
    "yellow",
    "red",
    "pink"
];

let indiceCor = 0;

btnCor.addEventListener("click", () => {
    document.body.style.backgroundColor = cores[indiceCor];

    indiceCor++;

    if(indiceCor >= cores.length){
        indiceCor = 0;
    }
});


// ==========================
// QUESTÃO 2
// ==========================

const btnTexto = document.getElementById("btnTexto");
const paragrafo = document.getElementById("paragrafo");

btnTexto.addEventListener("click", () => {

    if(paragrafo.style.display === "none"){
        paragrafo.style.display = "block";
    }else{
        paragrafo.style.display = "none";
    }

});


// ==========================
// QUESTÃO 3
// ==========================

const btnRepetir = document.getElementById("btnRepetir");
const txtTexto = document.getElementById("txtTexto");
const txtNumero = document.getElementById("txtNumero");

btnRepetir.addEventListener("click", () => {

    let texto = txtTexto.value;
    let numero = Number(txtNumero.value);

    for(let i = 0; i < numero; i++){
        console.log(texto);
    }

});


// ==========================
// QUESTÃO 4
// ==========================

const box = {
    largura: "150px",
    altura: "200px",
    cores: {
        fundo: "blue",
        borda: "red"
    }
};

const btnBox = document.getElementById("btnBox");
const htmlBox = document.getElementById("html_box");

btnBox.addEventListener("click", () => {

    htmlBox.style.width = box.largura;
    htmlBox.style.height = box.altura;
    htmlBox.style.backgroundColor = box.cores.fundo;
    htmlBox.style.border = `3px solid ${box.cores.borda}`;

});
