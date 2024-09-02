void salvarEmOrdem(FILE *arquivo, tree t)
{
    if (t != NULL)
    {
        salvarEmOrdem(arquivo, t->esq);
        fprintf(arquivo, "%s %.2f\n", t->info.data_coleta, t->info.valor_venda);
        salvarEmOrdem(arquivo, t->dir);
    }
}

// Função para salvar a árvore em um arquivo
void salvarArvoreEmArquivo(tree t, const char *nomeArquivo)
{
    FILE *arquivo = fopen(nomeArquivo, "w");

    if (arquivo == NULL)
    {
        fprintf(stderr, "Erro ao abrir o arquivo para escrita.\n");
        return;
    }

    salvarEmOrdem(arquivo, t);

    fclose(arquivo);
}