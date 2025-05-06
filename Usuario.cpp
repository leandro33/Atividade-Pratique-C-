
#include "Usuario.hpp"

Usuario::Usuario(const std::string& nome, const std::string& email, const std::string& telefone)
    : nome(nome), email(email), telefone(telefone) {}

std::string Usuario::getNome() const { return nome; }
std::string Usuario::getEmail() const { return email; }
std::string Usuario::getTelefone() const { return telefone; }

void Usuario::confirmarEvento(int eventoId) {
    eventosConfirmados.push_back(eventoId);
}

void Usuario::cancelarEvento(int eventoId) {
    eventosConfirmados.erase(std::remove(eventosConfirmados.begin(), eventosConfirmados.end(), eventoId), eventosConfirmados.end());
}

const std::vector<int>& Usuario::getEventosConfirmados() const {
    return eventosConfirmados;
}
