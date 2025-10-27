# 💀 The Walking Dead - Jogo em C

Um jogo de sobrevivência inspirado em **The Walking Dead**, desenvolvido em **C**.  
Controle o **Rick** em um mundo cheio de zumbis, colete balas, desvie de obstáculos e encontre a saída para sobreviver! 🧟‍♂️🔫  

---

## 🎮 Como jogar

O objetivo é guiar o personagem `R` (Rick) até a saída `S` sem morrer para os zumbis.  
O cenário é gerado aleatoriamente a cada partida!

Durante o jogo, você encontrará:

| Símbolo | Significado |
|:--------:|:-------------|
| `R` | Rick (você) |
| `Z` | Zumbi — se encostar sem balas, você morre |
| `B` | Bala — aumenta sua munição |
| `C` | Carro — bloqueia o caminho |
| `A` | Árvore — bloqueia o caminho |
| `P` | Pedra — bloqueia o caminho |
| `_` | Espaço livre |
| `S` | Saída do mapa |

---

## ⌨️ Controles

Use as teclas abaixo para se mover:

W → mover para cima
S → mover para baixo
A → mover para a esquerda
D → mover para a direita


---

## 🧠 Regras do jogo

1. **Colete balas (`B`)** para poder enfrentar os zumbis (`Z`);  
2. **Sem balas = morte instantânea** se encontrar um zumbi;  
3. **Carros (`C`), árvores (`A`) e pedras (`P`)** são obstáculos — não dá pra passar por eles;  
4. Alcance a **saída (`S`)** para vencer o jogo;  
5. Cada jogada gera um novo mapa aleatório!  

---

## 🧰 Como compilar e executar

No terminal, use os comandos:

```bash
gcc The.Walking_Dead.c -o walking_dead
./walking_dead

📸 Exemplo de execução
_ _ Z _ C _ A _ _ _
_ _ _ _ _ _ _ _ _ _
_ _ _ _ P _ Z _ _ _
_ _ _ B _ _ _ Z _ _
_ A _ Z _ P _ A _ _
_ _ C _ _ _ _ _ _ Z
_ _ _ _ _ _ Z _ _ _
_ _ _ _ _ _ _ S _ _
_ _ _ _ _ _ _ _ _ _
_ _ _ R _ _ _ _ _ _

Mova o Rick (w = cima, s = baixo, a = esquerda, d = direita):
🏁 Objetivo final

Chegar até a saída (S) com vida!
Se Rick for cercado ou ficar sem balas, o jogo termina com:
Rick foi atacado, fim de jogo!!
Se sobreviver, verá:
Parabéns, Rick encontrou a saída!!

👩‍💻 Autores

Projeto desenvolvido por:
Giovanna Costa da Silva
Caio Vinícius Marinho

Feito para praticar lógica de programação e uso de matrizes em C, com foco em aleatoriedade, colisão e movimentação no mapa.

