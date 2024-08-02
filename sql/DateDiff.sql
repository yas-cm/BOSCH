-- QUAL DIA E POR QUANTO TEMPO CADA SALA FOI USADA
SELECT * FROM Sala
SELECT * FROM Evento
	
SELECT
	S.Nome,
	CONVERT(VARCHAR(10), DtHrInicio, 103) AS 'Data Inicio',
	CONVERT(VARCHAR(10), DtHrFim, 103) AS 'Data Fim',
	CONVERT(VARCHAR(5), DtHrInicio, 108) AS 'Hora Inicio',
	CONVERT(VARCHAR(5), DtHrFim, 108) AS 'Hora Fim',
	DATEDIFF(MINUTE,DtHrInicio, DtHrFim) AS 'Tempo de duração'
FROM Evento E 
	LEFT JOIN Sala S 
	ON E.IDSala = S.IDSala
ORDER BY S.Nome

