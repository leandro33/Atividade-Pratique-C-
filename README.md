
# 🎉 Sistema de Cadastro e Notificação de Eventos (C++ Console)

Este projeto é uma aplicação de console em C++ com orientação a objetos para cadastro de usuários, eventos e confirmação de presença. Ideal para gerenciamento de eventos locais!

---

## 📁 Estrutura de Arquivos

```
SistemaEventosCPP/
├── main.cpp
├── Usuario.hpp / Usuario.cpp
├── Evento.hpp / Evento.cpp
├── SistemaEventos.hpp / SistemaEventos.cpp (em breve)
└── events.data (criado automaticamente)
```

---

## 🚀 Funcionalidades

- Cadastro de usuários com nome, email e telefone.
- Criação de eventos com nome, endereço, categoria, horário e descrição.
- Participação e cancelamento em eventos.
- Verificação de eventos ocorrendo agora ou já ocorridos.
- Ordenação por horário.
- Persistência automática em arquivo `events.data`.

---

## 🛠 Como Rodar no VSCode

1. **Instale o compilador C++ (g++)**
   - Windows: use o [MinGW](https://www.mingw-w64.org/)
   - Linux: `sudo apt install g++`
   - MacOS: `xcode-select --install`

2. **Abra o VSCode**
   - Instale a extensão: **C/C++ (ms-vscode.cpptools)**

3. **Abra a pasta do projeto**
   - Vá em `Arquivo > Abrir Pasta` e selecione `SistemaEventosCPP`.

4. **Compile o projeto**
   - Abra o terminal integrado do VSCode (`Ctrl + aspas`)
   - Rode o seguinte comando:
     ```bash
     g++ main.cpp Usuario.cpp Evento.cpp -o sistema
     ```

5. **Execute o programa**
   ```bash
   ./sistema
   ```

---

## 📝 Observações

- O arquivo `events.data` será criado automaticamente para armazenar os eventos.
- Em breve a versão completa terá `SistemaEventos.cpp` com o menu interativo e persistência.

---

Desenvolvido com 💙 para fins acadêmicos.
