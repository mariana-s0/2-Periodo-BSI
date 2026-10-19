const nome = document.getElementById("nome");
const numero = document.getElementById("numero");
const validade = document.getElementById("validade");
const tipo = document.getElementById("tipo");
const modelos = document.querySelectorAll('input[name="modelo"]');
const cartao = document.querySelector(".cartao");
const beneficios = document.querySelectorAll('input[name="beneficio"]');
const contactless = document.querySelector("#contactless");
const internacional = document.querySelector("#internacional");
const cashback = document.querySelector("#cashback");

nome.addEventListener("input", function(){
    document.getElementById("nomeCartao").textContent = nome.value;
});

numero.addEventListener("input", function(){
    document.getElementById("numeroCartao").textContent = numero.value;
});

validade.addEventListener("input", function(){
    document.getElementById("validadeCartao").textContent = validade.value;
});
tipo.addEventListener("input", function(){
    document.getElementById("bandeiraCartao").textContent = tipo.value;
    document.querySelector(".bancoExemplo").textContent = tipo.value;
});
modelos.forEach(function(modelo){
    modelo.addEventListener("change", function(){
        if(modelo.value === "classico"){
            cartao.style.backgroundColor = '#375bac';
        }else
            if(modelo.value === "gold"){
                cartao.style.backgroundColor = 'yellow';
            }else
                if(modelo.value === "platinum"){
                    cartao.style.backgroundColor = 'gray';
                }
})
});
beneficios.forEach(function(beneficio){
    beneficio.addEventListener("change",function(){
        if(beneficio.checked && beneficio.value ==="contactless"){
            contactless.style.display = "block";
            contactless.style.display = "inline-block";
        }
        if(beneficio.checked && beneficio.value === "internacional"){
            internacional.style.display = "block";
            internacional.style.display = "inline-block";
        }
        if(beneficio.checked && beneficio.value === "cashback"){
            cashback.style.display = "block";
            cashback.style.display = "inline-block";
        }
    })
})
