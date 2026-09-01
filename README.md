# 🧮 Calculadora de IMC (Índice de Massa Corporal) em C

Este projeto foi desenvolvido em linguagem C como parte das atividades práticas e avaliativas do curso de Análise e Desenvolvimento de Sistemas. O objetivo principal foi aplicar conceitos fundamentais de lógica de programação estruturada e manipulação de fluxos condicionais.

## 📝 O que o projeto faz
O programa roda diretamente no terminal e interage com o usuário para calcular o Índice de Massa Corporal (IMC). O sistema realiza as seguintes ações:
1. Solicita a entrada de dados do usuário (Peso em kg e Altura em metros).
2. Processa o cálculo matemático do IMC ($peso / altura^2$).
3. Avalia o resultado com base na tabela oficial da Organização Mundial da Saúde (OMS).
4. Exibe na tela o valor exato do IMC e a classificação correspondente (Ex: Abaixo do peso, Peso normal, Sobrepeso ou Obesidade).

## 🛠️ Conceitos Aplicados
Para a construção deste software em C, utilizei os seguintes conceitos de programação:
- **Entrada e Saída de Dados (`scanf` e `printf`):** Manipulação e formatação de dados no terminal.
- **Tipos de Dados Primitivos:** Uso de variáveis do tipo `float` para garantir a precisão das casas decimais nos cálculos de peso e altura.
- **Operadores Aritméticos e Relacionais:** Aplicação de fórmulas e comparações lógicas.

## 🚀 Como Executar o Programa

### Pré-requisitos
Você precisará de um compilador de C instalado na sua máquina (como o `gcc`).

### Passo a passo no Terminal
1. Clone este repositório:
   ```bash
   git clone https://github.com/calculo-imc-c.git
   ```
2. Acesse a pasta do projeto:
   ```bash
   cd calculo-imc-c
   ```
3. Compile o código fonte:
   ```bash
   gcc main.c -o calculadora_imc
   ```
4. Execute o sistema:
   - No Windows: `calculadora_imc.exe`
   - No Linux/Mac: `./calculadora_imc`

## 🧠 Aprendizados e Desafios
Desenvolver este projeto me ajudou a fixar a importância da validação de dados de entrada (como impedir que o usuário digite altura zero, o que causaria um erro de divisão por zero no sistema) e consolidou minha base em lógica de programação pura.
