// =====================
// QUESTÃO 1
// =====================

const btnTexto = document.getElementById("btnTexto");
const texto = document.getElementById("texto");

btnTexto.addEventListener("click", () => {

    if(texto.style.display === "none"){
        texto.style.display = "block";
    }else{
        texto.style.display = "none";
    }

});

// =====================
// QUESTÃO 2
// =====================

const btnCor = document.getElementById("btnCor");

const cores = [
    "blue",
    "green",
    "yellow",
    "red",
    "pink"
];

let indice = 0;

btnCor.addEventListener("click", () => {

    document.body.style.backgroundColor =
        cores[indice];

    indice++;

    if(indice >= cores.length){
        indice = 0;
    }

});

// =====================
// QUESTÃO 3
// =====================

const btnNome = document.getElementById("btnNome");

btnNome.addEventListener("click", () => {

    let nome =
        document.getElementById("nome").value;

    document.getElementById("saidaNome")
        .textContent = nome;

});

// =====================
// QUESTÃO 4
// =====================

const btnFor =
    document.getElementById("btnFor");

btnFor.addEventListener("click", () => {

    let texto =
        document.getElementById("textoFor").value;

    let numero =
        Number(document.getElementById("numeroFor").value);

    for(let i=0;i<numero;i++){
        console.log(texto);
    }

});

// =====================
// ARRAY
// =====================

const btnArray =
    document.getElementById("btnArray");

btnArray.addEventListener("click", () => {

    let numeros = [10,20,30,40,50];

    for(let n of numeros){
        console.log(n);
    }

});

// =====================
// OBJETOS
// =====================

const btnObjeto =
    document.getElementById("btnObjeto");

btnObjeto.addEventListener("click", () => {

    const aluno = {

        nome:"Mariana",
        idade:18,

        curso:{
            nome:"BSI",
            periodo:2
        }

    };

    console.log(aluno.nome);
    console.log(aluno.curso.nome);

});

// =====================
// BOX
// =====================

const box = {

    largura:"150px",
    altura:"200px",

    cores:{
        fundo:"blue",
        borda:"red"
    }

};

const btnBox =
    document.getElementById("btnBox");

btnBox.addEventListener("click", () => {

    const div =
        document.getElementById("box");

    div.style.width =
        box.largura;

    div.style.height =
        box.altura;

    div.style.backgroundColor =
        box.cores.fundo;

    div.style.border =
        `3px solid ${box.cores.borda}`;

});

// =====================
// CRIAR ELEMENTO
// =====================

const btnCriar =
    document.getElementById("btnCriar");

btnCriar.addEventListener("click", () => {

    let p =
        document.createElement("p");

    p.textContent =
        "Parágrafo criado pelo JavaScript";

    p.classList.add("novoParagrafo");

    document
        .getElementById("area")
        .appendChild(p);

});
