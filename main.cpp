
#include "SistemaEventos.hpp"

int main() {
    SistemaEventos sistema;
    sistema.carregarEventos("events.data");
    sistema.menuPrincipal();
    sistema.salvarEventos("events.data");
    return 0;
}
