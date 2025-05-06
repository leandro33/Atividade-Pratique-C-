
#include "Evento.hpp"
#include <sstream>
#include <iomanip>
#include <ctime>
#include <algorithm>

Evento::Evento(int id, const std::string& nome, const std::string& endereco,
               const std::string& categoria, const std::string& descricao, std::tm horario)
    : id(id), nome(nome), endereco(endereco), categoria(categoria), descricao(descricao), horario(horario) {}

int Evento::getId() const { return id; }
std::string Evento::getNome() const { return nome; }
std::tm Evento::getHorario() const { return horario; }

std::string Evento::getHorarioStr() const {
    std::ostringstream oss;
    oss << std::put_time(&horario, "%Y-%m-%d %H:%M:%S");
    return oss.str();
}

bool Evento::estaOcorrendo() const {
    std::time_t now = std::time(nullptr);
    std::tm current = *std::localtime(&now);
    return std::difftime(std::mktime(&current), std::mktime(const_cast<std::tm*>(&horario))) >= 0 &&
           std::difftime(std::mktime(&current), std::mktime(const_cast<std::tm*>(&horario))) <= 3600;
}

bool Evento::jaOcorreu() const {
    std::time_t now = std::time(nullptr);
    return std::difftime(now, std::mktime(const_cast<std::tm*>(&horario))) > 3600;
}

void Evento::adicionarParticipante(const std::string& email) {
    participantes.push_back(email);
}

void Evento::removerParticipante(const std::string& email) {
    participantes.erase(std::remove(participantes.begin(), participantes.end(), email), participantes.end());
}

bool Evento::possuiParticipante(const std::string& email) const {
    return std::find(participantes.begin(), participantes.end(), email) != participantes.end();
}
