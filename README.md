# Salvar Árvore Binária em Ordem em Arquivo em C

## Descrição
Este projeto em C implementa a funcionalidade de salvar os dados de uma árvore binária em um arquivo de texto, preservando a ordem em que os elementos aparecem na árvore. Os dados são salvos em um formato legível, com cada linha representando um nodo da árvore.

## Funcionalidades
- **Salvar Árvore em Ordem**: Percorre a árvore binária em ordem (in-order) e salva cada nodo em um arquivo de texto.
- **Persistência de Dados da Árvore**: Os dados da árvore são salvos em um arquivo, permitindo que a estrutura da árvore seja preservada e analisada posteriormente.

## Como Usar
1. Compile o código utilizando um compilador C. Exemplo:
   ```bash
   gcc -o salvar_arvore salvar_arvore.c
   ```
2. Execute o programa e chame a função `salvarArvoreEmArquivo(tree t, const char *nomeArquivo)` para salvar os dados da árvore em um arquivo:
   ```c
   tree minhaArvore = ...;  // Suponha que a árvore já esteja populada
   salvarArvoreEmArquivo(minhaArvore, "saida.txt");
   ```

## Estrutura de Dados
O projeto utiliza uma estrutura de árvore binária (`tree`), onde cada nodo contém informações como `data_coleta` e `valor_venda`.

### Funções Principais
- **salvarEmOrdem(FILE *arquivo, tree t)**: Percorre a árvore binária em ordem e salva os dados de cada nodo no arquivo especificado.
- **salvarArvoreEmArquivo(tree t, const char *nomeArquivo)**: Abre o arquivo especificado e chama `salvarEmOrdem` para salvar todos os nodos da árvore em ordem.

## Exemplo de Uso
```c
// Exemplo de como salvar uma árvore binária em um arquivo
tree minhaArvore = ...;  // Suponha que a árvore já esteja populada
salvarArvoreEmArquivo(minhaArvore, "saida.txt");
```

## Persistência de Dados
Os dados da árvore binária são salvos em um arquivo de texto, permitindo que sejam recuperados ou analisados posteriormente. Cada linha do arquivo contém informações de um nodo da árvore, representadas pela data de coleta e o valor de venda.

## Contribuições
Contribuições são bem-vindas! Sinta-se à vontade para abrir issues ou enviar pull requests.

## Licença
Este projeto está licenciado sob a [MIT License](LICENSE).
