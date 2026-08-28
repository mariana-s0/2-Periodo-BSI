const celulares = [
    {
        nome: "iPhone 17",
        fabricante: "Apple",
        sistema_operacional: "iOS",
        suporte_5g: true,
        resistente_agua: true,
        peso_gramas: 177,
        ram_gb: 8,
        processador: "Apple A19",

        cores: ["preto", "branco", "azul", "rosa"],

        tela: {
            tamanho_polegadas: 6.3,
            tecnologia: "OLED",
            taxa_atualizacao_hz: 120,
            tela_sempre_ligada: true
        },

        cameras: {
            frontal_mp: 18,
            traseiras: [
                {
                    tipo: "principal",
                    megapixels: 48
                },
                {
                    tipo: "ultrawide",
                    megapixels: 48
                }
            ],
            resolucao_maxima_video: "4K"
        },

        armazenamento_gb: 256,

        bateria: {
            capacidade_mah: 3692,
            carregamento_sem_fio: true
        }
    },

    {
        nome: "Galaxy S26 Ultra",
        fabricante: "Samsung",
        sistema_operacional: "Android",
        suporte_5g: true,
        resistente_agua: true,
        peso_gramas: 214,
        ram_gb: 12,
        processador: "Snapdragon 8 Elite Gen 5",

        cores: ["preto", "branco", "azul", "violeta"],

        tela: {
            tamanho_polegadas: 6.9,
            tecnologia: "AMOLED",
            taxa_atualizacao_hz: 120,
            tela_sempre_ligada: true
        },

        cameras: {
            frontal_mp: 12,
            traseiras: [
                {
                    tipo: "principal",
                    megapixels: 200
                },
                {
                    tipo: "ultrawide",
                    megapixels: 50
                },
                {
                    tipo: "teleobjetiva",
                    megapixels: 50
                },
                {
                    tipo: "teleobjetiva",
                    megapixels: 10
                }
            ],
            resolucao_maxima_video: "8K"
        },

        armazenamento_gb: 512,

        bateria: {
            capacidade_mah: 5000,
            carregamento_sem_fio: true
        }
    },

    {
        nome: "Google Pixel 10 Pro XL",
        fabricante: "Google",
        sistema_operacional: "Android",
        suporte_5g: true,
        resistente_agua: true,
        peso_gramas: 232,
        ram_gb: 16,
        processador: "Google Tensor G5",

        cores: ["preto", "branco", "cinza"],

        tela: {
            tamanho_polegadas: 6.8,
            tecnologia: "OLED",
            taxa_atualizacao_hz: 120,
            tela_sempre_ligada: true
        },

        cameras: {
            frontal_mp: 42,
            traseiras: [
                {
                    tipo: "principal",
                    megapixels: 50
                },
                {
                    tipo: "ultrawide",
                    megapixels: 48
                },
                {
                    tipo: "teleobjetiva",
                    megapixels: 48
                }
            ],
            resolucao_maxima_video: "8K"
        },

        armazenamento_gb: 512,

        bateria: {
            capacidade_mah: 5200,
            carregamento_sem_fio: true
        }
    },

    {
        nome: "OnePlus 15",
        fabricante: "OnePlus",
        sistema_operacional: "Android",
        suporte_5g: true,
        resistente_agua: true,
        peso_gramas: 215,
        ram_gb: 16,
        processador: "Snapdragon 8 Elite Gen 5",

        cores: ["preto", "violeta", "dourado"],

        tela: {
            tamanho_polegadas: 6.78,
            tecnologia: "AMOLED",
            taxa_atualizacao_hz: 165,
            tela_sempre_ligada: true
        },

        cameras: {
            frontal_mp: 32,
            traseiras: [
                {
                    tipo: "principal",
                    megapixels: 50
                },
                {
                    tipo: "ultrawide",
                    megapixels: 50
                },
                {
                    tipo: "teleobjetiva",
                    megapixels: 50
                }
            ],
            resolucao_maxima_video: "4K"
        },

        armazenamento_gb: 512,

        bateria: {
            capacidade_mah: 7300,
            carregamento_sem_fio: true
        }
    },

    {
        nome: "Xiaomi 15 Ultra",
        fabricante: "Xiaomi",
        sistema_operacional: "Android",
        suporte_5g: true,
        resistente_agua: true,
        peso_gramas: 226,
        ram_gb: 16,
        processador: "Snapdragon 8 Elite",

        cores: ["preto", "branco", "prata"],

        tela: {
            tamanho_polegadas: 6.73,
            tecnologia: "AMOLED",
            taxa_atualizacao_hz: 120,
            tela_sempre_ligada: true
        },

        cameras: {
            frontal_mp: 32,
            traseiras: [
                {
                    tipo: "principal",
                    megapixels: 50
                },
                {
                    tipo: "ultrawide",
                    megapixels: 50
                },
                {
                    tipo: "teleobjetiva",
                    megapixels: 200
                },
                {
                    tipo: "teleobjetiva",
                    megapixels: 50
                }
            ],
            resolucao_maxima_video: "8K"
        },

        armazenamento_gb: 512,

        bateria: {
            capacidade_mah: 5410,
            carregamento_sem_fio: true
        }
    },

    {
        nome: "Galaxy Z Fold7",
        fabricante: "Samsung",
        sistema_operacional: "Android",
        suporte_5g: true,
        resistente_agua: true,
        peso_gramas: 215,
        ram_gb: 12,
        processador: "Snapdragon 8 Elite",

        cores: ["preto", "azul", "prata"],

        tela: {
            tamanho_polegadas: 8.0,
            tecnologia: "AMOLED",
            taxa_atualizacao_hz: 120,
            tela_sempre_ligada: true
        },

        cameras: {
            frontal_mp: 10,
            traseiras: [
                {
                    tipo: "principal",
                    megapixels: 200
                },
                {
                    tipo: "ultrawide",
                    megapixels: 12
                },
                {
                    tipo: "teleobjetiva",
                    megapixels: 10
                }
            ],
            resolucao_maxima_video: "8K"
        },

        armazenamento_gb: 256,

        bateria: {
            capacidade_mah: 4400,
            carregamento_sem_fio: true
        }
    },

    {
        nome: "Motorola Edge 60 Pro",
        fabricante: "Motorola",
        sistema_operacional: "Android",
        suporte_5g: true,
        resistente_agua: true,
        peso_gramas: 186,
        ram_gb: 12,
        processador: "MediaTek Dimensity 8350",

        cores: ["azul", "verde", "roxo"],

        tela: {
            tamanho_polegadas: 6.7,
            tecnologia: "pOLED",
            taxa_atualizacao_hz: 120,
            tela_sempre_ligada: false
        },

        cameras: {
            frontal_mp: 50,
            traseiras: [
                {
                    tipo: "principal",
                    megapixels: 50
                },
                {
                    tipo: "ultrawide",
                    megapixels: 50
                },
                {
                    tipo: "teleobjetiva",
                    megapixels: 10
                }
            ],
            resolucao_maxima_video: "4K"
        },

        armazenamento_gb: 256,

        bateria: {
            capacidade_mah: 6000,
            carregamento_sem_fio: true
        }
    },

    {
        nome: "Nothing Phone 3",
        fabricante: "Nothing",
        sistema_operacional: "Android",
        suporte_5g: true,
        resistente_agua: true,
        peso_gramas: 218,
        ram_gb: 12,
        processador: "Snapdragon 8s Gen 4",

        cores: ["preto", "branco"],

        tela: {
            tamanho_polegadas: 6.67,
            tecnologia: "AMOLED",
            taxa_atualizacao_hz: 120,
            tela_sempre_ligada: true
        },

        cameras: {
            frontal_mp: 50,
            traseiras: [
                {
                    tipo: "principal",
                    megapixels: 50
                },
                {
                    tipo: "ultrawide",
                    megapixels: 50
                },
                {
                    tipo: "teleobjetiva",
                    megapixels: 50
                }
            ],
            resolucao_maxima_video: "4K"
        },

        armazenamento_gb: 256,

        bateria: {
            capacidade_mah: 5150,
            carregamento_sem_fio: true
        }
    },

    {
        nome: "Redmi Note 14 Pro+ 5G",
        fabricante: "Xiaomi",
        sistema_operacional: "Android",
        suporte_5g: true,
        resistente_agua: true,
        peso_gramas: 210,
        ram_gb: 8,
        processador: "Snapdragon 7s Gen 3",

        cores: ["preto", "branco", "roxo"],

        tela: {
            tamanho_polegadas: 6.67,
            tecnologia: "AMOLED",
            taxa_atualizacao_hz: 120,
            tela_sempre_ligada: true
        },

        cameras: {
            frontal_mp: 20,
            traseiras: [
                {
                    tipo: "principal",
                    megapixels: 200
                },
                {
                    tipo: "ultrawide",
                    megapixels: 8
                },
                {
                    tipo: "macro",
                    megapixels: 2
                }
            ],
            resolucao_maxima_video: "4K"
        },

        armazenamento_gb: 256,

        bateria: {
            capacidade_mah: 5110,
            carregamento_sem_fio: false
        }
    },

    {
        nome: "iPhone 16e",
        fabricante: "Apple",
        sistema_operacional: "iOS",
        suporte_5g: true,
        resistente_agua: true,
        peso_gramas: 167,
        ram_gb: 8,
        processador: "Apple A18",

        cores: ["preto", "branco"],

        tela: {
            tamanho_polegadas: 6.1,
            tecnologia: "OLED",
            taxa_atualizacao_hz: 60,
            tela_sempre_ligada: false
        },

        cameras: {
            frontal_mp: 12,
            traseiras: [
                {
                    tipo: "principal",
                    megapixels: 48
                }
            ],
            resolucao_maxima_video: "4K"
        },

        armazenamento_gb: 128,

        bateria: {
            capacidade_mah: 4005,
            carregamento_sem_fio: false
        }
    }
];
/*
a) O nome e a fabricante do(s) celular(es) com menor tela

b) O nome e o sistema operacional dos celulares que possuem versão na cor branca

c) O nome dos celulares que possuem 512 GB de armazenamento

d) A média de peso dos celulares fabricados pela Apple

e) A quantidade de câmeras traseiras de cada celular

f) Para cada celular, escrever seu nome e se a média da resolução das câmeras traseiras é maior ou menor que a resolução da câmera frontal

g) O nome dos celulares que possuem mais de uma câmera teleobjetiva traseira*/ 

/*a) O nome e a fabricante do(s) celular(es) com menor tela*/ 
let menorTela=celulares[0].tela.tamanho_polegadas;
for(let cel of celulares){
    if(cel["tela"]["tamanho_polegadas"]<menorTela){
        menorTela=cel["tela"]["tamanho_polegadas"];
        console.log(menorTela);
    }
        if(cel["tela"]["tamanho_polegadas"]==menorTela){
            console.log(cel['nome']);
            console.log(cel['fabricante']);
        }
}
/*b) O nome e o sistema operacional dos celulares que possuem versão na cor branca*/ 
for(let cor of celulares){
    if(cor['cores'].includes('branco')){
        console.log(cor['nome']);
        console.log(cor['sistema_operacional']);
    }
}
/*c) O nome dos celulares que possuem 512 GB de armazenamento*/
for(let arm of celulares){
    if(arm['armazenamento_gb']==512){
        console.log(arm['nome']);
    }
}
/*d) A média de peso dos celulares fabricados pela Apple*/
let pesoM=0,soma=0,cont=0;
for(let peso of celulares){
    if(peso["fabricante"].includes("Apple")){
        soma+=peso["peso_gramas"];
        cont+=1;
    }
}
pesoM=soma/cont;
console.log(pesoM);
/*e) A quantidade de câmeras traseiras de cada celular*/
for(let cam of celulares){
    console.log(cam["nome"] + ": " + cam["cameras"]["traseiras"].length);
}
/*f) Para cada celular, escrever seu nome e se a média da resolução das câmeras traseiras é maior ou menor que a resolução da câmera frontal*/

for(let celular of celulares){
    let traseira=0;
    for(let camera of celular["cameras"]["traseiras"]){
        traseira+= camera["megapixels"];
    }
    let media = traseira/celular.cameras.traseiras.length;
    if(media < celular["cameras"]["frontal_mp"]){
        console.log(celular["nome"], ":" , 'Maior');
    }else{
        console.log(celular["nome"],":","Menor");
    }
        
}
/*g) O nome dos celulares que possuem mais de uma câmera teleobjetiva traseira*/
for(let cel of celulares){
    let cont=0;
    for(let cam of cel["cameras"]["traseiras"]){
            if(cam.tipo.includes('teleobjetiva')){
                cont++;
            }
    }
    if(cont > 1){
        console.log(cel["nome"]);
    }
 
}