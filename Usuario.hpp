
#ifndef USUARIO_HPP
#define USUARIO_HPP

#include <string>
#include <vector>

class Usuario {
private:
    std::string nome;
    std::string email;
    std::string telefone;
    std::vector<int> eventosConfirmados;

public:
    Usuario(const std::string& nome, const std::string& email, const std::string& telefone);
    std::string getNome() const;
    std::string getEmail() const;
    std::string getTelefone() const;
    void confirmarEvento(int eventoId);
    void cancelarEvento(int eventoId);
    const std::vector<int>& getEventosConfirmados() const;
};

#endif
