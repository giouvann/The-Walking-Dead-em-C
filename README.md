# The Walking Dead (C)

**Jogo simples em C — versão de terminal**

Um pequeno jogo estilo "Escape" feito em C. Você controla o personagem **Rick (R)** em um mapa 10×10 e precisa alcançar a **Saída (S)**. Pelo caminho há zumbis (Z), carros (C), árvores (A), pedras (P) e balas (B). O jogador pode coletar balas para matar zumbis — sem balas, encontrar um zumbi resultará na morte do seu personagem e o jogo terminará.

---

## Como compilar

Recomendo usar o `gcc` para compilar no Linux, macOS ou WSL no Windows:

```bash
gcc The.Walking_Dead.c -o walking_dead
```

Se preferir, compile com flags para avisos e padrão C mais recente:

```bash
gcc -Wall -Wextra -std=c11 The.Walking_Dead.c -o walking_dead
```

---

## Como executar

No terminal, execute:

```bash
./walking_dead
```

(No Windows, rode `walking_dead.exe`.)

---

## Controles

* `w` ou `W` — mover para cima
* `s` ou `S` — mover para baixo
* `a` ou `A` — mover para a esquerda
* `d` ou `D` — mover para a direita

Digite a tecla e pressione Enter quando for solicitado.

---

## Objetivo e regras

* Alcance a saída `S` para vencer.
* Coletar `B` (balas) aumenta seu contador de munição.
* Ao encontrar `Z` (zumbi):

  * Se tiver bala(s), o zumbi é eliminado e uma bala é consumida.
  * Se não tiver balas, o jogo termina imediatamente.
* Outros caracteres:

  * `_` — espaço livre
  * `C` — carro (obstáculo)
  * `A` — árvore (obstáculo)
  * `P` — pedra (obstáculo)


## Créditos

* **Autores:** Giovanna Costa da Silva, Caio Vinícius Marinho
* **Arquivo do jogo:** `The.Walking_Dead.c`


