SELECT
	TOP 3  -- Seleciona as 3 salas com maior capacidade
	Nome 'Nome da sala',
	Capacidade 'Maiores capacidades'
	
	FROM Sala

--UPDATE Sala  -- Altera dado (sempre colocar where pra n alterar tudo
--WHERE

--ALTER TABLE -- Altera tabela


-----------------------------------
-- JUNCAO DE TABELAS
-----------------------------------
-- INNER JOIN -- Instersecçao das tabelas pela ligação entre elas (se tem um evento e uma sala 
-- ele vai mostrar as salas e eventos q tem ligacao, se tiver um evento sem sala ele n aparece)

-- RIGHT JOIN -- Junta todos os dados da tabela da direita, com as intercecções da tabela da esquerda

-- LEFT JOIN -- Junta todos os dados da tabela da esquerda, com as intercecções da tabela da direita

-- FULL JOIN -- Junta tudo


SELECT Tipo , COUNT(*)  -- Conta qnts equipamentos tem de cada tipo
FROM Equipamento
GROUP BY Tipo


SELECT * FROM Pessoa
SELECT * FROM Sala
SELECT * FROM Evento
SELECT * FROM EventoPessoa

----------------------------------------------------------
-- Tempo de uso de cada sala no total
SELECT
	S.Nome,
	SUM(DATEDIFF(MINUTE,DtHrInicio, DtHrFim)) Tempo
FROM Evento E 
	LEFT JOIN Sala S 
	ON E.IDSala = S.IDSala
GROUP BY S.Nome
ORDER BY Tempo

----------------------------------------------------------
-- Participações de cada pessoa

SELECT
	P.Nome,
	COUNT(EP.Presenca) Participacoes

FROM Pessoa P 
	LEFT JOIN EventoPessoa EP
	ON EP.IDPessoa = P.IDPessoa
GROUP BY P.Nome
ORDER BY Participacoes desc

----------------------------------------------------------
-- Ver se as reunioes estao com a capacidade correta

SELECT
	S.Nome 'Sala',
	E.Descricao 'Evento',
	S.Capacidade,

	CASE WHEN COUNT(EP.Presenca)>S.Capacidade THEN 'NOP' -- Comparation (tipo um if else)
	ELSE 'OK'
	END AS 'Avaliacao da capacidade'

FROM Pessoa P 
	LEFT JOIN EventoPessoa EP
	ON EP.IDPessoa = P.IDPessoa

	LEFT JOIN Evento E
	ON E.IDEvento = EP.IDEvento

	LEFT JOIN Sala S
	ON S.IDSala = E.IDSala

GROUP BY S.Nome, E.Descricao, S.capacidade
ORDER BY S.Nome