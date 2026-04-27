# The Walking Dead - Jogo em C

Um jogo de sobrevivência inspirado em **The Walking Dead**, desenvolvido em **C**.  
Controle o **Rick** em um mundo cheio de zumbis, colete balas, desvie de obstáculos e encontre a saída para sobreviver!   

---

## Como jogar

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

## Controles

Use as teclas abaixo para se mover:

W → mover para cima
S → mover para baixo
A → mover para a esquerda
D → mover para a direita


---

## Regras do jogo

1. **Colete balas (`B`)** para poder enfrentar os zumbis (`Z`);  
2. **Sem balas = morte instantânea** se encontrar um zumbi;  
3. **Carros (`C`), árvores (`A`) e pedras (`P`)** são obstáculos — não dá pra passar por eles;  
4. Alcance a **saída (`S`)** para vencer o jogo;  
5. Cada jogada gera um novo mapa aleatório!  

---

## Como compilar e executar

No terminal, use os comandos:

```bash
gcc The.Walking_Dead.c -o walking_dead
./walking_dead

---

## Exemplo de mapa em execução

Ao iniciar o jogo, um mapa é gerado aleatoriamente.
Abaixo está um exemplo visual de como o cenário pode aparecer no terminal:

 _ _ _ _ _ _ _ _ _ _
 _ _ Z _ _ _ _ _ _ _
 _ _ _ _ A _ _ _ _ _
 _ Z _ _ P _ Z _ _ _
 _ _ _ R _ _ B _ _ _
 _ _ _ _ _ _ _ _ _ _
 _ _ C _ _ Z _ _ _ _
 _ _ _ A _ _ _ _ _ _
 _ _ _ _ _ _ _ _ _ S
 _ _ _ _ _ _ _ _ _ _


💡 Dica: Cada vez que você joga, o mapa muda completamente — novos obstáculos, novas posições e novos desafios!

---

## Autores

Projeto desenvolvido por:
Giovanna Costa da Silva
Caio Vinícius Marinho

---




