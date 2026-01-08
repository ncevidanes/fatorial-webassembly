#include <stdio.h>
#include <emscripten.h>

// EMSCRIPTEN_KEEPALIVE diz ao compilador para não descartar essa função
// e deixá-la acessível para o JavaScript.
EMSCRIPTEN_KEEPALIVE
long long calcular_fatorial(int n) {
    if (n <= 1) return 1;
    long long resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

// Uma função principal simples, caso queira testar localmente
int main() {
    printf("Módulo WebAssembly carregado com sucesso!\n");
    return 0;
}