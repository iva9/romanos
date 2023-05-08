// Copyright[2023] <Ivanov M. Santos>
#include "/romanos.hpp"

int romanos_para_decimal(std::string s) {
    int resultado = 0;
    int tamanho = s.length();
    int valor_atual, valor_proximo;

    for (int i = 0; i < tamanho; i++) {
        valor_atual = 0;
        valor_proximo = 0;

        switch (s[i]) {
            case 'I': valor_atual = 1; break;
            case 'V': valor_atual = 5; break;
            case 'X': valor_atual = 10; break;
            case 'L': valor_atual = 50; break;
            case 'C': valor_atual = 100; break;
            case 'D': valor_atual = 500; break;
            case 'M': valor_atual = 1000; break;
            default: return -1;
        }

        if (i+1 < tamanho) {
            switch (s[i+1]) {
                case 'I': valor_proximo = 1; break;
                case 'V': valor_proximo = 5; break;
                case 'X': valor_proximo = 10; break;
                case 'L': valor_proximo = 50; break;
                case 'C': valor_proximo = 100; break;
                case 'D': valor_proximo = 500; break;
                case 'M': valor_proximo = 1000; break;
                default: return -1;
            }
        }

        if (valor_atual >= valor_proximo) {
            resultado += valor_atual;
        } else {
            resultado += valor_proximo - valor_atual;
            i++;  // pula o próximo caractere, já que ele já foi processado
        }
    }

    return resultado;
}
