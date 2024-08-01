SELECT * FROM Evento
WHERE GETDATE() BETWEEN DthrInicio AND DtHrFim

UPDATE EVENTO SET
	DtHrInicio = '01-08-2024 13:00', DtHrFim = '01-08-2024 17:00'
	WHERE IDEvento = '01964C5JMFTJ'

SELECT
    CONVERT(VARCHAR(10), IDEvento, 103)
	FROM EVENTO


SELECT
	IDEvento,
	Descricao 'Descrição do Evento',
    CONVERT(VARCHAR(10), DtHrInicio, 103) AS 'Data Inicio',
    CONVERT(VARCHAR(5), DtHrInicio, 108) AS 'Hora Inicio',
	CONVERT(VARCHAR(10), DtHrFim, 103) AS 'Data Fim',
    CONVERT(VARCHAR(5), DtHrFim, 108) AS 'Hora Fim',
	S.Nome 'Nome da Sala'
FROM Evento E 
	LEFT JOIN Sala S 
	ON E.IDSala = S.IDSala


SELECT * FROM Evento E -- apelido de E pra tabela Evento
	LEFT JOIN Sala S -- Apelido de S pra tabela Sala
	ON E.IDSala = S.IDSala -- Junta onde os IDs sao iguais

	
SELECT
	E.Descricao, -- Pega a descricao da tabela E
	S.Capacidade -- Pega a capacidade da tabela S
FROM Evento E 
	LEFT JOIN Sala S 
	ON E.IDSala = S.IDSala
ORDER BY S.Nome