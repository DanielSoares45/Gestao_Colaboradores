[readme_gest_o_de_colaboradores.md](https://github.com/user-attachments/files/33758148/readme_gest_o_de_colaboradores.md)
# Gestao_Colaboradores# 🏢 Sistema de Gestão de Colaboradores (CLI em C)

Um sistema interativo em Linha de Comando (CLI) desenvolvido em linguagem **C** purista, focado na gestão inicial de colaboradores, controle de ponto eletrônico e aplicação rigorosa de conceitos de **Programação Defensiva** e **Controle de Fluxo Persistente**.

## 📌 Sumário

* [Sobre o Projeto](#-sobre-o-projeto)

* [Destaques Técnicos & Boas Práticas](#-destaques-técnicos--boas-práticas)

* [Funcionalidades](#-funcionalidades)

* [Como Executar](#-como-executar)

* [Estrutura do Código](#-estrutura-do-código)

* [Autor](#-autor)

## 🚀 Sobre o Projeto

Este projeto foi construído com o objetivo de demonstrar o uso prático dos fundamentos da computação e estruturas fundamentais da linguagem C. O software simula uma aplicação em produção onde a resiliência contra erros do usuário, o tratamento de memória e a clareza de navegação são prioridades absolutas.

## 🛠️ Destaques Técnicos & Boas Práticas

* **Persistência de Estado (Laço de Repetição):** Implementação de laço `do-while` para garantir que o menu permaneça ativo até uma ação voluntária de encerramento (`opcao != 0`).

* **Programação Defensiva & Tratamento de Buffer:** Uso de sanitização via `while(getchar() != '\n');` logo após as leituras de dados (`scanf`). Isso previne *crashes*, corrupção de memória e loops infinitos provocados pela inserção acidental de caracteres não numéricos.

* **Roteamento Limpo (`switch-case`):** Separação clara de responsabilidades por módulos de menu e uso da instrução `default` como *fallback* universal para tratar entradas fora do escopo (ex: números inexistentes).

* **Lógica Analítica de Negócios:** Módulo de Ponto Eletrônico com avaliação em tempo de execução via `if / else if` para cálculo de horas extras, horas pendentes e cumprimento de jornada.

* **Auditoria de Sessão:** Contador de operações que compila métricas de produtividade e exibe um relatório sucinto na tela de encerramento do sistema.

## 💻 Funcionalidades

1. **Cadastrar novo colaborador:** Módulo para registro inicial.

2. **Listar colaboradores ativos:** Consulta rápida da equipe.

3. **Atualizar dados:** Módulo de manutenção de registros.

4. **Registrar ponto eletrônico:** Sistema de apuração de horas trabalhadas com cálculo automático de horas extras ou déficit de jornada.

5. **Encerrar sistema:** Encerramento seguro da aplicação exibindo métricas da sessão.

## ⚙️ Como Executar

### Pré-requisitos

Possuir um compilador C instalado no sistema (como o **GCC** através do MinGW/MSYS2 no Windows, Xcode Command Line Tools no Mac, ou build-essential no Linux).

### Passos para Compilação e Execução

1. **Clone este repositório:**

   ```
   git clone https://github.com/seu-usuario/gestao-colaboradores-c.git
   
   ```

2. **Acesse a pasta do projeto:**

   ```
   cd gestao-colaboradores-c
   
   ```

3. **Compile o código fonte:**

   ```
   gcc main.c -o sistema
   
   ```

4. **Execute a aplicação:**

   * **Windows:**

     ```
     .\sistema.exe
     
     ```

   * **Linux / macOS:**

     ```
     ./sistema
     
     ```

## 📂 Estrutura do Código

```
├── main.c           # Código fonte principal contendo a lógica e interface CLI
└── README.md        # Documentação do projeto

```

## 👤 Autor

Desenvolvido por **\[Daniel Soares\]**

Estudante de Análise e Desenvolvimento de Sistemas / Engenharia de Software.

* **LinkedIn:** linkedin.com/in/daniel-soares-610804379

* **GitHub: github.com/DanielSoares45**
