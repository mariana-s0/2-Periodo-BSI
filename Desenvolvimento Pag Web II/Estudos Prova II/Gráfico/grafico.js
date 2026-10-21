const x = document.querySelector(".x");
const y = document.querySelector(".y");
const botao = document.getElementById("gerar");
const inverte = document.querySelector(".inverte");
const grafico = document.querySelector(".grafico");

botao.addEventListener("click", function (){
    let valoresX = x.value.split(",").map(Number);
    let valoresY = y.value.split(",").map(Number);
    
    //Verificando o tamanho do gráfico

    if (x.value.trim() === "" ||y.value.trim() === "" ||valoresX.length !== valoresY.length){
        alert("Digite a mesma quantidade de valores nos dois eixos!");
        return;
    }

    //Inverter os eixos 

    if(inverte.checked){
        [valoresX, valoresY] = [valoresY, valoresX];
    }

    //Limpar pontos anteriores

    grafico.innerHTML = "";

    //Descobrir os maiores valores

    const maxX = Math.max(...valoresX,1);
    const maxY = Math.max(...valoresY,1);

    //Criar os pontos

    valoresX.forEach(function (valorX, i){
        const ponto = document.createElement("div");
        ponto.classList.add("ponto");

        ponto.style.left = (valorX/ maxX) * 100 + "%";
        ponto.style.bottom = (valoresY[i]/maxY) * 100 + "%";

        grafico.appendChild(ponto);
    });

    grafico.style.display = "block";
});

/*Trim = Remove os espaços em branco do início e do final de uma string.
  innerHTML = Apaga o conteúdo do HTML.
  Math.max = Retorna o maior valor entre os números que você passar para ele.
  forEach = é um método do JavaScript que percorre cada elemento de um array e executa uma função para cada um deles.
  appendChild = serve para adicionar um elemento HTML dentro de outro elemento HTML usando JavaScript.*/