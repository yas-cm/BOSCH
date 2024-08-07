-- TRIGGER -- (tentando entender)

CREATE TRIGGER [Nome_Trigger] -- É o nome definido pelo usuário para o novo trigger
ON [Nome_tabela] -- É a tabela à qual o trigger se aplica.
AFTER DELETE
AS
BEGIN
-- É possível declarar variáveis,
-- inserir, excluir ou alterar dados em outras tabelas.
END

--Crie uma tabela log para armazenar todas as ocorrências de inserção que ocorrer na tabela Pessoa.
--Crie uma trigger que fará isso automaticamente.
--Dica: Utilize INSERTED

CREATE TABLE LogT ( -- Tabela onde vai "avisar" que o dado foi inserido
Data DATETIME,
Operacao VARCHAR(50), -- Foi inserido alguma coisa "Insercao"
Observacao VARCHAR(255) -- O que foi inserido "Inserido Pessoa (Nome)"
PRIMARY KEY (Data, Operacao)) -- Os dois juntos são a Primary Key -- ???

-- Criando Trigger para inserir os dados automaticamente
CREATE TRIGGER tgLogT
ON Tabela_De_Clientes -- Tabela onde vao ser inseridos os dados
FOR INSERT AS -- Quando for inserido (Daria pra colocar mais de um, tipo qnd for inserido mas tbm qnd for deletado?)
BEGIN -- Comece

DECLARE -- Cria variáveis
@Data DATETIME, -- Tem q ter o @? Pq?
@Operacao VARCHAR(50),
@Observacao VARCHAR(255)

-- Atribui valores às variáveis
SELECT
@Data = GETDATE(), -- Pega a data 
@Operacao = 'Inserção', -- A operacao vai ser sempre insercao pq o trigger so ativa com isso
@Observacao = CONCAT('Inserido Cliente ', Nome) -- Daria pra escrever 'Inserido Cliente'+Nome ?
FROM INSERTED -- Vai selecionar da onde tinha sido inserido antes (pega os valores de la)

-- Faz uma inserção em outra tabela utilizando os valores das variáveis
INSERT INTO LogT -- Coloca na tabela q foi criada
VALUES(@Data, @Operacao, @Observacao) -- Valores selecionados antes
END -- Fim!

INSERT INTO Tabela_De_Clientes (Cpf, Nome) VALUES ('07341221233','Fulano') -- Insere na tabela
-- SELECT * FROM Tabela_De_Clientes 
SELECT * FROM LogT -- Printa tabela gerada pelo trigger