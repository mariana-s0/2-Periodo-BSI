
const usuarios = [
    {
        id: 1,
        dados: {
            nome: 'Maria',
            sexo: 'F',
            idade: 42,
            endereco: {
                rua: 'Getúlio Vargas',
                numero: 5,
                bairro: 'São José'
            }
        }
    },
    {
        id: 2,
        dados: {
            nome: 'João',
            sexo: 'M',
            idade: 28,
            endereco: {
                rua: 'Dom Pedro II',
                numero: 120,
                bairro: 'Centro'
            }
        }
    },
    {
        id: 3,
        dados: {
            nome: 'Ana',
            sexo: 'F',
            idade: 35,
            endereco: {
                rua: 'Tiradentes',
                numero: 87,
                bairro: 'Santa Tereza'
            }
        }
    },
    {
        id: 4,
        dados: {
            nome: 'Carlos',
            sexo: 'M',
            idade: 51,
            endereco: {
                rua: 'Presidente Kennedy',
                numero: 214,
                bairro: 'São Pedro'
            }
        }
    },
    {
        id: 5,
        dados: {
            nome: 'Lucas',
            sexo: 'M',
            idade: 19,
            endereco: {
                rua: 'Nossa Senhora da Conceição',
                numero: 43,
                bairro: 'Funcionários'
            }
        }
    }
];


// QUESTÃO 1 - CONTADOR

const menos = document.querySelector("#menos");
const mais = document.querySelector("#mais");
const valor = document.querySelector("#valor");

menos.onclick = () => {
    valor.value = Number(valor.value) - 1;
};

mais.onclick = () => {
    valor.value = Number(valor.value) + 1;
};


// QUESTÃO 2 - BARRA DE PROGRESSO

const configurar = document.querySelector("#configurar");
const progresso = document.querySelector("#progresso");

configurar.onclick = () => {
    const resposta = prompt("Digite o novo valor");

    if (
        resposta === null ||
        resposta.trim() === "" ||
        !Number.isFinite(Number(resposta)) ||
        Number(resposta) < 0 ||
        Number(resposta) > 100
    ) {
        alert("Valor inválido");
    } else {
        const valorProgresso = Number(resposta);

        progresso.style.width = valorProgresso + "%";
        progresso.textContent = valorProgresso + "%";
    }
};


// QUESTÃO 3 - a) MÉDIA DAS IDADES MASCULINAS

const media = document.querySelector("#media");

media.onclick = () => {
    let soma = 0;
    let quantidade = 0;

    usuarios.forEach(function(usuario) {
        if (usuario.dados.sexo === "M") {
            soma += usuario.dados.idade;
            quantidade++;
        }
    });

    console.log("Média das idades masculinas:", soma / quantidade);
};


// QUESTÃO 3 - b) ENDEREÇOS PARES OU ÍMPARES

const enderecos = document.querySelector("#enderecos");

enderecos.onclick = () => {
    let pares = 0;
    let impares = 0;

    usuarios.forEach(function(usuario) {
        if (usuario.dados.endereco.numero % 2 === 0) {
            pares++;
        } else {
            impares++;
        }
    });

    console.log("Quantidade de endereços pares:", pares);
    console.log("Quantidade de endereços ímpares:", impares);

    if (pares > impares) {
        console.log("Existem mais endereços pares.");
    } else if (impares > pares) {
        console.log("Existem mais endereços ímpares.");
    } else {
        console.log("Existe a mesma quantidade de endereços pares e ímpares.");
    }
};


// QUESTÃO 3 - c) PESSOA MAIS VELHA COM NOME TERMINADO EM "a"

const maisVelha = document.querySelector("#maisVelha");

maisVelha.onclick = () => {
    let pessoaMaisVelha = null;

    usuarios.forEach(function(usuario) {
        if (usuario.dados.nome.toLowerCase().endsWith("a")) {
            if (
                pessoaMaisVelha === null ||
                usuario.dados.idade > pessoaMaisVelha.dados.idade
            ) {
                pessoaMaisVelha = usuario;
            }
        }
    });

    if (pessoaMaisVelha !== null) {
        console.log("Nome:", pessoaMaisVelha.dados.nome);
        console.log("Idade:", pessoaMaisVelha.dados.idade);
    }
};
