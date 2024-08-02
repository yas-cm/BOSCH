-- EVENTO E SALA

SELECT
	P.Nome 'Nome do participante responsavel',
	E.Descricao 'Descrição do evento',
	CONVERT(VARCHAR(10), DtHrInicio, 103) AS 'Data doEvento',
	S.Nome 'Nome da sala'

FROM EventoPessoa EP 
	LEFT JOIN Pessoa P
	ON EP.IDPessoa = P.IDPessoa

	LEFT JOIN Evento E
	ON EP.IDEvento = E.IDEvento

	LEFT JOIN Sala S
	ON E.IDSala = S.IDSala

WHERE PapelEvento = 'Responsavel'

