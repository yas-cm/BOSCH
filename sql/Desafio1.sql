-- DESAFIO 1

CREATE FUNCTION ffVolumeCompras(@bibibi varchar(100)) 
RETURNS TABLE AS 
RETURN(
SELECT 
	P.Cpf,
	P.Nome,
	P.Volume_de_Compra,
	CONVERT(VARCHAR(7), NF.Data_Venda, 120) as Data_Venda,
	SUM(INF.Quantidade) as 'Quantidade_Total',
	CASE WHEN SUM(INF.Quantidade) > Volume_de_Compra THEN 'Vendas Inválidas'
	ELSE 'Vendas ´Válidas' END AS 'Resultado'

FROM Notas_Fiscais NF -- Select normal
	INNER JOIN Itens_Notas_Fiscais INF
		ON NF.Numero = INF.Numero

	INNER JOIN Tabela_De_Clientes P
		ON NF.Cpf = P.Cpf

WHERE CONVERT(VARCHAR(7), NF.Data_Venda, 120) = @bibibi
GROUP BY P.Cpf, P.Nome, P.Volume_de_Compra, CONVERT(VARCHAR(7), NF.Data_Venda, 120) 
)

SELECT * FROM ffVolumeCompras('2015-01')

SELECT * FROM Itens_Notas_Fiscais -- cogido_do_produto - quantidade - numero    ---> INF
SELECT * FROM Notas_Fiscais -- cpf - matricula - data_venda - numero                     ---> NF
SELECT * FROM Tabela_De_Clientes -- cpf - nome - volume_de_compra					 ---> P
SELECT * FROM Tabela_De_Produtos
SELECT * FROM Tabela_De_Vendedores

