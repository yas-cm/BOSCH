-- SUB SELECT (IN) -- entendi nd


SELECT * FROM Evento E
INNER JOIN EventoEquipamento EQ
	ON E.IDEvento = EQ.IDEvento

WHERE EQ.IDEquipamento IN  
(SELECT IDEquipamento FROM Equipamento
WHERE Tipo IN ('Informatica','Multimidia'))

--------------------------------------------------------------

--SELECT * FROM Evento E
--INNER JOIN EventoEquipamento EQ
	--ON E.IDEvento = EQ.IDEvento
--INNER JOIN
--(SELECT IDEquipamento,Nome FROM Equipamento
--WHERE Tipo IN ('Informatica','Multimidia')) T
-- ON EQ.IDEquipamento IN -- Nao consegui copiar o resto

--------------------------------------------------------------
-- LIKE --

SELECT * FROM Evento
	WHERE Descricao like '%DevOps' -- Dizendo que no final tem DevOps

SELECT * FROM Evento
	WHERE Descricao like '%Industria%' -- Dizendo que no meio e no final tem DevOps