-- DESAFIO 2

SELECT * FROM Itens_Notas_Fiscais -- Codigo_do_Produto - Quantidade - Numero                     --> INF
SELECT * FROM Notas_Fiscais -- Numero - Data_Venda																	 --> NF
SELECT * FROM Tabela_De_Produtos -- Codigo_do_Produto - Nome_do_Produto - Sabor			 --> TP

ALTER FUNCTION fVenda_ano(@bibibi varchar(100))
RETURNS TABLE AS 
RETURN(
SELECT
	TP.sabor,
	CONVERT(VARCHAR(4), NF.Data_Venda, 120) as Ano, 
	SUM(INF.Quantidade) as Venda_Ano,
	ROUND((CONVERT(FLOAT, SUM(INF.Quantidade))*100) /  (SELECT SUM(INF.Quantidade) -- esse eh o tal do subselect
FROM Itens_Notas_Fiscais INF
	INNER JOIN Notas_Fiscais NF
	ON INF.Numero = NF.Numero
WHERE CONVERT(VARCHAR(4), NF.Data_Venda, 120) = @bibibi),2) as 'Percentual'
	-- Percentual -- quantidade em relacao ao total do ano

FROM Itens_Notas_Fiscais INF
	INNER JOIN Notas_Fiscais NF
	ON INF.Numero = NF.Numero

	INNER JOIN Tabela_de_Produtos TP
	ON INF.Codigo_do_Produto = TP.Codigo_do_Produto

	WHERE CONVERT(VARCHAR(4), NF.Data_Venda, 120) = @bibibi
	GROUP BY TP.sabor,  CONVERT(VARCHAR(4), NF.Data_Venda, 120)
)

SELECT * FROM fVenda_ano(2015)
ORDER BY Venda_Ano desc

