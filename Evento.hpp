
#ifndef EVENTO_HPP
#define EVENTO_HPP

#include <string>
#include <vector>
#include <ctime>

class Evento {
private:
    int id;
    std::string nome;
    std::string endereco;
    std::string categoria;
    std::string descricao;
    std::tm horario;
    std::vector<std::string> participantes;

public:
    Evento(int id, const std::string& nome, const std::string& endereco,
           const std::string& categoria, const std::string& descricao, std::tm horario);

    int getId() const;
    std::string getNome() const;
    std::tm getHorario() const;
    std::string getHorarioStr() const;
    bool estaOcorrendo() const;
    bool jaOcorreu() const;

    void adicionarParticipante(const std::string& email);
    void removerParticipante(const std::string& email);
    bool possuiParticipante(const std::string& email) const;
};

#endif
