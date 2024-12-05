float MediaDig(int Numero, unsigned int Tamanho, float Soma) {
    if (Numero == 0) {
        return Tamanho == 0 ? 0 : Soma / Tamanho;
    }
    return MediaDig(Numero / 10, Tamanho + 1, Soma + (Numero % 10));
}
