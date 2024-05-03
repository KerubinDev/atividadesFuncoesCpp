#include <iostream>
#include <cstring>

using namespace std;

int main() {
    // Nível 1:
    // Declare uma variável do tipo String chamada nome e armazene seu nome nela. Imprima o valor de nome usando cout.
    string nome = "João";
    cout << "Nome: " << nome << endl;

    // Declare um array de caracteres vogais com 5 posições. Insira manualmente as vogais ('a', 'e', 'i', 'o', 'u') nas posições do array. Imprima cada vogal em uma linha usando cout.
    char vogais[5] = {'a', 'e', 'i', 'o', 'u'};
    cout << "Vogais:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << vogais[i] << endl;
    }

    // Declare uma variável do tipo String chamada letra. Leia um caractere do usuário usando cin e armazene-o em letra. Verifique se letra é uma vogal usando a estrutura if e imprima uma mensagem informando se é ou não.
    char letra;
    cout << "Digite uma letra: ";
    cin >> letra;
    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        cout << letra << " é uma vogal." << endl;
    } else {
        cout << letra << " não é uma vogal." << endl;
    }

    // Declare um array de caracteres palavra com 10 posições. Leia uma palavra do usuário usando cin e armazene-a em palavra. Imprima a palavra usando cout.
    char palavra[10];
    cout << "Digite uma palavra: ";
    cin >> palavra;
    cout << "Palavra: " << palavra << endl;

    // Declare um array de caracteres frase com 20 posições. Leia uma frase do usuário usando cin e armazene-a em frase. Imprima a frase usando cout.
    char frase[20];
    cout << "Digite uma frase: ";
    cin.ignore(); // Limpa o buffer do teclado
    cin.getline(frase, 20);
    cout << "Frase: " << frase << endl;

    // Nível 2:
    // Declare um array de caracteres numeros com 10 posições. Armazene manualmente os números de 1 a 10 nas posições do array. Imprima os números pares do array em linhas separadas usando cout.
    int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Números pares:" << endl;
    for(int i = 0; i < 10; i++) {
        if(numeros[i] % 2 == 0) {
            cout << numeros[i] << endl;
        }
    }

    // Declare um array de caracteres frutas com 5 posições. Armazene manualmente os nomes de 5 frutas nas posições do array. Imprima a fruta que está na posição 3 do array usando cout.
    char frutas[5][10] = {"Banana", "Maçã", "Pera", "Uva", "Morango"};
    cout << "Fruta na posição 3: " << frutas[2] << endl;

    // Declare um array de caracteres cores com 7 posições. Armazene manualmente os nomes de 7 cores nas posições do array. Leia um número do usuário entre 1 e 7 usando cin. Imprima a cor que está na posição informada pelo usuário usando cout.
    char cores[7][10] = {"Vermelho", "Laranja", "Amarelo", "Verde", "Azul", "Anil", "Violeta"};
    int posicao;
    cout << "Digite um número entre 1 e 7: ";
    cin >> posicao;
    cout << "Cor na posição " << posicao << ": " << cores[posicao - 1] << endl;

    // Declare um array de caracteres animais com 10 posições. Armazene manualmente os nomes de 10 animais nas posições do array. Leia um caractere do usuário usando cin. Verifique se o caractere é a primeira letra de um animal do array. Se for, imprima o nome do animal completo.
    char animais[10][15] = {"Cachorro", "Gato", "Elefante", "Leão", "Tigre", "Girafa", "Zebra", "Macaco", "Panda", "Urso"};
    char letraAnimal;
    cout << "Digite uma letra: ";
    cin >> letraAnimal;
    for(int i = 0; i < 10; i++) {
        if(animais[i][0] == letraAnimal) {
            cout << "Animal completo: " << animais[i] << endl;
        }
    }

    // Declare um array de caracteres dias com 7 posições. Armazene manualmente os nomes dos 7 dias da semana nas posições do array. Leia um número do usuário entre 1 e 7 usando cin. Imprima o dia da semana que está na posição informada pelo usuário usando cout.
    char dias[7][15] = {"Domingo", "Segunda", "Terça", "Quarta", "Quinta", "Sexta", "Sábado"};
    int posicaoDia;
    cout << "Digite um número entre 1 e 7: ";
    cin >> posicaoDia;
    cout << "Dia da semana na posição " << posicaoDia << ": " << dias[posicaoDia - 1] << endl;

    // Nível 3:
    // Declare um array de caracteres palavra1 e palavra2 com 10 posições cada. Leia duas palavras do usuário usando cin e armazene-as em palavra1 e palavra2. Compare as duas palavras usando a estrutura if e imprima qual palavra é maior em ordem alfabética.
    char palavra1[10], palavra2[10];
    cout << "Digite a primeira palavra: ";
    cin >> palavra1;
    cout << "Digite a segunda palavra: ";
    cin >> palavra2;
    if(strcmp(palavra1, palavra2) < 0) {
        cout << "A primeira palavra vem antes em ordem alfabética." << endl;
    } else if(strcmp(palavra1, palavra2) > 0) {
        cout << "A segunda palavra vem antes em ordem alfabética." << endl;
    } else {
        cout << "As palavras são iguais em ordem alfabética." << endl;
    }

    // Declare um array de caracteres frase com 20 posições. Leia uma frase do usuário usando cin e armazene-a em frase. Conte o número de vogais na frase e imprima o resultado usando cout.
    char fraseVogais[20];
    cout << "Digite uma frase: ";
    cin.ignore(); // Limpa o buffer do teclado
    cin.getline(fraseVogais, 20);
    int countVogais = 0;
    for(int i = 0; i < strlen(fraseVogais); i++) {
        if(fraseVogais[i] == 'a' || fraseVogais[i] == 'e' || fraseVogais[i] == 'i' || fraseVogais[i] == 'o' || fraseVogais[i] == 'u' ||
           fraseVogais[i] == 'A' || fraseVogais[i] == 'E' || fraseVogais[i] == 'I' || fraseVogais[i] == 'O' || fraseVogais[i] == 'U') {
            countVogais++;
        }
    }
    cout << "Número de vogais na frase: " << countVogais << endl;

    // Declare um array de caracteres texto com 50 posições. Leia um texto do usuário usando cin e armazene-o em texto. Encontre a primeira ocorrência da letra 'a' no texto e imprima a posição da letra.
    char texto[50];
    cout << "Digite um texto: ";
    cin.ignore(); // Limpa o buffer do teclado
    cin.getline(texto, 50);
    char *ptr = strchr(texto, 'a');
    if(ptr != nullptr) {
        cout << "Posição da primeira ocorrência de 'a': " << ptr - texto + 1 << endl;
    } else {
        cout << "'a' não encontrado no texto." << endl;
    }

    // Declare um array de caracteres palavra com 10 posições. Leia uma palavra do usuário usando cin e armazene-a em palavra. Inverta a ordem dos caracteres da palavra e imprima a palavra invertida usando cout.
    char palavraInvertida[10];
    cout << "Digite uma palavra: ";
    cin >> palavraInvertida;
    cout << "Palavra invertida: ";
    for(int i = strlen(palavraInvertida) - 1; i >= 0; i--) {
        cout << palavraInvertida[i];
    }
    cout << endl;

    // Declare um array de caracteres frase com 20 posições. Leia uma frase do usuário usando cin e armazene-a em frase. Substitua todas as vogais da frase por '*'. Imprima a frase com as vogais substituídas usando cout.
    char fraseSubstituida[20];
    cout << "Digite uma frase: ";
    cin.ignore(); // Limpa o buffer do teclado
    cin.getline(fraseSubstituida, 20);
    for(int i = 0; i < strlen(fraseSubstituida); i++) {
        if(fraseSubstituida[i] == 'a' || fraseSubstituida[i] == 'e' || fraseSubstituida[i] == 'i' || fraseSubstituida[i] == 'o' || fraseSubstituida[i] == 'u' ||
           fraseSubstituida[i] == 'A' || fraseSubstituida[i] == 'E' || fraseSubstituida[i] == 'I' || fraseSubstituida[i] == 'O' || fraseSubstituida[i] == 'U') {
            fraseSubstituida[i] = '*';
        }
    }
    cout << "Frase com vogais substituídas: " << fraseSubstituida << endl;

    // Nível 4:
    // Declare um array de caracteres nomes com 10 posições e um array de inteiros idades com 10 posições. Leia os nomes e idades de 10 pessoas usando cin e armazene-os nos arrays. Imprima a lista de nomes e idades em colunas usando cout.
    char nomes[10][30];
    int idades[10];
    for(int i = 0; i < 10; i++) {
        cout << "Digite o nome da pessoa " << i+1 << ": ";
        cin.ignore(); // Limpa o buffer do teclado
        cin.getline(nomes[i], 30);
        cout << "Digite a idade da pessoa " << i+1 << ": ";
        cin >> idades[i];
    }
    cout << "Nomes e idades:" << endl;
    for(int i = 0; i < 10; i++) {
        cout << nomes[i] << "\t" << idades[i] << endl;
    }

    // Declare um array de caracteres produtos com 20 posições e um array de floats precos com 20 posições. Leia os nomes e preços de 10 produtos usando cin e armazene-os nos arrays. Imprima a lista de produtos e preços em colunas usando cout.
    char produtos[10][50];
    float precos[10];
    for(int i = 0; i < 10; i++) {
        cout << "Digite o nome do produto " << i+1 << ": ";
        cin.ignore(); // Limpa o buffer do teclado
        cin.getline(produtos[i], 50);
        cout << "Digite o preço do produto " << i+1 << ": ";
        cin >> precos[i];
    }
    cout << "Produtos e preços:" << endl;
    for(int i = 0; i < 10; i++) {
        cout << produtos[i] << "\tR$ " << precos[i] << endl;
    }

    // Declare um array de caracteres cidades com 15 posições. Leia os nomes de 15 cidades do usuário usando cin e armazene-as no array. Ordene as cidades em ordem alfabética e imprima a lista ordenada usando cout.
    char cidades[15][50];
    for(int i = 0; i < 15; i++) {
        cout << "Digite o nome da cidade " << i+1 << ": ";
        cin.ignore(); // Limpa o buffer do teclado
        cin.getline(cidades[i], 50);
    }
    // Ordenando as cidades
    for(int i = 0; i < 14; i++) {
        for(int j = i+1; j < 15; j++) {
            if(strcmp(cidades[i], cidades[j]) > 0) {
                char temp[50];
                strcpy(temp, cidades[i]);
                strcpy(cidades[i], cidades[j]);
                strcpy(cidades[j], temp);
            }
        }
    }
    cout << "Cidades em ordem alfabética:" << endl;
    for(int i = 0; i < 15; i++) {
        cout << cidades[i] << endl;
    }

    // Declare um array de caracteres texto com 50 posições. Leia um texto do usuário usando cin e armazene-o em texto. Conte o número de palavras no texto e imprima o resultado usando cout.
    char textoContagem[50];
    cout << "Digite um texto: ";
    cin.ignore(); // Limpa o buffer do teclado
    cin.getline(textoContagem, 50);
    int countPalavras = 0;
    for(int i = 0; i < strlen(textoContagem); i++) {
        if(textoContagem[i] == ' ') {
            countPalavras++;
        }
    }
    // Adicionando 1 para contar a última palavra
    countPalavras++;
    cout << "Número de palavras no texto: " << countPalavras << endl;

    // Declare um array de caracteres frase com 20 posições. Leia uma frase do usuário usando cin e armazene-a em frase. Encontre a palavra mais longa da frase e imprima a palavra usando cout.
    char fraseLonga[20];
    cout << "Digite uma frase: ";
    cin.ignore(); // Limpa o buffer do teclado
    cin.getline(fraseLonga, 20);
    char *ptrPalavra = strtok(fraseLonga, " ");
    char palavraMaisLonga[20];
    strcpy(palavraMaisLonga, ptrPalavra);
    while(ptrPalavra != nullptr) {
        ptrPalavra = strtok(nullptr, " ");
        if(ptrPalavra != nullptr && strlen(ptrPalavra) > strlen(palavraMaisLonga)) {
            strcpy(palavraMaisLonga, ptrPalavra);
        }
    }
    cout << "Palavra mais longa: " << palavraMaisLonga << endl;

    return 0;
}

using namespace std;

// Função para imprimir tamanho do array de caracteres
void imprimirTamanhoArray(char array[], int tamanho) {
    cout << "Tamanho do array: " << tamanho << endl;
}

    // Declaração e Impressão de Array (Utilizando For)
    int array1[5] = {1, 2, 3, 4, 5};
    cout << "Array 1:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << array1[i] << " ";

    cout << endl;

    // Declaração e Impressão de Array (Utilizando While)
    char array2[6] = {'a', 'b', 'c', 'd', 'e', 'f'};
    cout << "Array 2:" << endl;
    int j = 0;
    while(j < 6) {
        cout << array2[j] << " ";
        j++;
    }
    cout << endl;

    // Condicional com Array (Utilizando For)
    int array3[7] = {1, 2, 3, 4, 5, 6, 7};
    cout << "Números pares do Array 3:" << endl;
    for(int k = 0; k < 7; k++) {
        if(array3[k] % 2 == 0) {
            cout << array3[k] << " ";
        }
    }
    cout << endl;

    // Condicional com Array (Utilizando While)
    float array4[8] = {2.3, 5.7, 8.9, 4.5, 6.8, 10.2, 12.1, 3.6};
    cout << "Valores maiores que 5 do Array 4:" << endl;
    int l = 0;
    while(l < 8) {
        if(array4[l] > 5) {
            cout << array4[l] << " ";
        }
        l++;
    }
    cout << endl;

    // Atribuição de Valores e Impressão com For
    int array5[10];
    cout << "Insira 10 valores para o Array 5:" << endl;
    for(int m = 0; m < 10; m++) {
        cin >> array5[m];
    }
    cout << "Array 5:" << endl;
    for(int n = 0; n < 10; n++) {
        cout << array5[n] << " ";
    }
    cout << endl;

    // Impressão de Propriedades do Array
    char array6[5] = {'a', 'b', 'c', 'd', 'e'};
    imprimirTamanhoArray(array6, 5);

    // Acesso a Elementos Específicos do Array
    int array7[] = {3, 7, 9, 12, 4, 6, 8, 10};
    cout << "Terceiro elemento do Array 7: " << array7[2] << endl;
    cout << "Soma do sexto e oitavo elemento do Array 7: " << array7[5] + array7[7] << endl;
    cout << "Diferença entre o segundo e o primeiro elemento do Array 7: " << array7[1] - array7[0] << endl;
    if(array7[3] > 6) {
        cout << "Quarto elemento do Array 7: " << array7[3] << endl;
    }
    if(array7[7] % 2 == 0) {
        cout << "Último elemento do Array 7 (se o primeiro for par): " << array7[7] << endl;
    }
    if(array7[0] + array7[6] > 22) {
        cout << "Primeiro elemento do Array 7 (se a soma do quarto com o oitavo for maior que 22): " << array7[0] << endl;
    }

    // Entrada de Dados do Usuário e Cálculo da Média
    float array8[10];
    float soma = 0;
    cout << "Insira 10 valores para o Array 8:" << endl;
    for(int p = 0; p < 10; p++) {
        cin >> array8[p];
        soma += array8[p];
    }
    float media = soma / 10;
    cout << "Média dos valores do Array 8: " << media << endl;

    // Cálculo da Soma dos Elementos do Array
    int array9[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int somaArray9 = 0;
    for(int q = 0; q < 10; q++) {
        somaArray9 += array9[q];
    }
    cout << "Soma dos elementos do Array 9: " << somaArray9 << endl;

    // Condicional Aninhado com Array (Utilizando For)
    int array10[8] = {12, 15, 18, 9, 21, 24, 27, 30};
    cout << "Números múltiplos de 3 e maiores que 10 do Array 10:" << endl;
    for(int r = 0; r < 8; r++) {
        if(array10[r] % 3 == 0 && array10[r] > 10) {
            cout << array10[r] << " ";
        }
    }
    cout << endl;

    // Busca por Valor Máximo e Mínimo no Array
    int array11[12] = {5, 10, 2, 15, 7, 20, 1, 18, 3, 12, 6, 9};
    int maximo = array11[0];
    int minimo = array11[0];
    for(int s = 1; s < 12; s++) {
        if(array11[s] > maximo) {
            maximo = array11[s];
        }
        if(array11[s] < minimo) {
            minimo = array11[s];
        }
    }
    cout << "Valor máximo do Array 11: " << maximo << endl;
    cout << "Valor mínimo do Array 11: " << minimo << endl;

    // Cálculo da Média Ponderada dos Elementos do Array
    float notas[5];
    float pesos[5];
    float somaPonderada = 0;
    float somaPesos = 0;
    cout << "Insira 5 notas e seus respectivos pesos:" << endl;
    for(int t = 0; t < 5; t++) {
        cout << "Nota " << t+1 << ": ";
        cin >> notas[t];
        cout << "Peso da nota " << t+1 << ": ";
        cin >> pesos[t];
        somaPonderada += notas[t] * pesos[t];
        somaPesos += pesos[t];
    }
    float mediaPonderada = somaPonderada / somaPesos;
    cout << "Média ponderada das notas: " << mediaPonderada << endl;

    return 0;
}
