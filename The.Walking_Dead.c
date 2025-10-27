#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
  Alunos:
  Giovanna Costa da Silva
  Caio Vinícius Marinho
*/

int main(void) {
  //乱数の種を初期化
  srand(time(NULL));

  //definindo o tamanho e criando a matriz do cenário
  const int tam = 10;
  char cenario[tam][tam];
  //coordenadas do Rick e saída
  int rick_l, rick_c;
  int exit_l, exit_c;
  //variável das balas
  int balas = 0;

  //vetor com os tipos de objeto
  char itens[5] = {'Z', 'C', 'A', 'P', 'B'};

  //preenchimento do cenário c '_'
  for (int i = 0; i < tam; i++) {
    for (int j = 0; j < tam; j++) {
      cenario[i][j] = '_';
    }
  }

  //posicionando objetos (todos seguem o mesmo padrão)
  for (int z = 0; z < 15; z++) { //15 zumbis
    //gera uma posição aleatória dentro da matriz
    int linha = rand() % tam;
    int coluna = rand() % tam;

    //se a posição tiver c '_' ela preenche
    if (cenario[linha][coluna] == '_') {
      cenario[linha][coluna] = itens[0];
    } else {
      z--; //caso não, ela volta um passo no for
    }
  }
  for (int c = 0; c < 4; c++) { //4 carros
    int linha = rand() % tam;
    int coluna = rand() % tam;

    if (cenario[linha][coluna] == '_') {
      cenario[linha][coluna] = itens[1]; 
    } else {
      c--;
    }
  }
  for (int a = 0; a < 7; a++) { //7 árvores
    int linha = rand() % tam;
    int coluna = rand() % tam;

    if (cenario[linha][coluna] == '_') {
      cenario[linha][coluna] = itens[2]; 
    } else {
      a--;
    }
  }
  for (int p = 0; p < 8; p++) { //8 pedras
    int linha = rand() % tam;
    int coluna = rand() % tam;

    if (cenario[linha][coluna] == '_') {
      cenario[linha][coluna] = itens[3]; 
    } else {
      p--;
    }
  }
  for (int b = 0; b < 4; b++) { //4 balas
    int linha = rand() % tam;
    int coluna = rand() % tam;

      if (cenario[linha][coluna] == '_') {
        cenario[linha][coluna] = itens[4];
      } else {
        b--;
      }
  }

  //posicionando rick em um lugar aleatório do mapa
  while(1){
    rick_l= rand() %tam;
    rick_c = rand() %tam; 
    //caso encontre uma posição válida adiciona o Rick
    if (cenario[rick_l][rick_c] == '_') { //checa se a posição gerada esta vazia
      if (cenario[rick_l+1][rick_c] == '_' && cenario[rick_l-1][rick_c] == '_') { //checa se os espaços acima e abaixo estão livres
        if (cenario[rick_l][rick_c+1] == '_' && cenario[rick_l][rick_c-1] == '_') { //checa se os espaços ao lado estão livres
          cenario[rick_l][rick_c] = 'R';
          break;
        }
      }
    }
  }
  //posicionando a saída em um lugar aleatório do mapa (sem ser na borda)
  while(1){
    exit_l= rand() %tam;
    exit_c = rand() %tam; 
    //caso encontre uma posição válida adiciona a saída
    if (cenario[exit_l][exit_c] == '_') { //checa se a posição gerada esta vazia
      if (cenario[exit_l+1][exit_c] == '_' && cenario[exit_l-1][exit_c] == '_') { //checa se os espaços acima e abaixo estão livres
        if (cenario[exit_l][exit_c+1] == '_' && cenario[exit_l][exit_c-1] == '_') { //checa se os espaços ao lado estão livres
          cenario[exit_l][exit_c] = 'S';
          break;
        }
      }
    }
  }

  //loop do jogo
  while(rick_l != exit_l || rick_c != exit_c) {//repete-se até rick e a saída tenham a mesma coordenada
    //imprime o cenario, já preenchido, na tela
    for (int i = 0; i < tam; i++) {
      for (int j = 0; j < tam; j++) {
        printf(" %c", cenario[i][j]);
        if (j == tam-1) {
          printf("\n");
        }
      }
    }

    //movimentação do Rick
    char movimento;
    printf("\nMova o Rick (w = cima, s = baixo, a = esquerda, d = direita): ");
    scanf(" %c", &movimento);

    //novas coordenadas do Rick
    int nova_l = rick_l; 
    int nova_c = rick_c;

    //WASD das novas coordenadas de Rick
    if (movimento == 'w' || movimento == 'W') {
      nova_l--;
    }
    else if (movimento == 's' || movimento == 'S') {
      nova_l++;
    }
    else if (movimento == 'a' || movimento == 'A') {
      nova_c--;
    }
    else if (movimento == 'd' || movimento == 'D') {
      nova_c++;
    }
    else { //caso a tecla digitada não seja wasd o código se repete
      printf("\nMovimento não reconhecido. Tente novamente.\n");
      continue;
    }

    //movimentação do Rick
    if (nova_l >= 0 && nova_l < tam && nova_c >= 0 && nova_c <tam) { //checa se a movimentação pedida está nos limites da matriz
      //todos os casos seguem um padrão similar
      char novo_local = cenario[nova_l][nova_c]; //recebe o valor contido nas novas coordenadas
      if (novo_local == '_' || novo_local == 'S') { //checa se o novo espaço está vazio ou se é a saída
        cenario[rick_l][rick_c] = '_'; //apaga a antiga coordenada de Rick
        cenario[nova_l][nova_c] = 'R'; //adiciona Rick a uma nova coordenada

        //atualiza as coordenadas de Rick
        rick_l = nova_l;
        rick_c = nova_c;
      }
      //Rick encontrando as balas
      else if (novo_local == 'B') { //checa se o novo espaço possui balas
        cenario[rick_l][rick_c] = '_';
        cenario[nova_l][nova_c] = 'R';

        rick_l = nova_l;
        rick_c = nova_c;

        balas++; //aumenta o número de balas

        printf("\nVocê encontrou uma bala! Balas atual: %i\n", balas);
      }
      //Rick encontra um zumbi
      else if (novo_local == 'Z') { //checa se o novo espaço possui zumbis
        if (balas > 0) { //se Rick estiver com munição
          cenario[rick_l][rick_c] = '_';
          cenario[nova_l][nova_c] = 'R';

          rick_l = nova_l;
          rick_c = nova_c;

          balas--; //diminui o número de balas

          printf("\nRick matou um zumbi! Balas restantes: %i\n", balas);
        }
        else { //se rick estiver sem munição
          printf("\nRick foi atacado, fim de jogo!!\n");
          exit(0);
        }
      }
      //coordenada ocupada
      else {
        printf("\nLado bloqueado por um obstáculo\n");
      }
    }
    //coordenada inválida
    else { 
      printf("\nRick está fora dos limites do mapa! Tente novamente.\n");
    }
  }

  printf("\nParabéns, Rick encontrou a saída!!");

  return 0;
}