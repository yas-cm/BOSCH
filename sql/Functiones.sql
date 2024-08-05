--Crie uma fun��o cujo o retorno dever� ser um �nico select e retornar uma tabela com:
--1- Quantidade de pessoas presentes no primeiro evento (mais antigo) que ocorreu.

--2- Nome da sala em que esse evento ocorreu.

--3- A Fun��o ser� chamada com um par�metro de busca. Como Aula, Palestra ou Reuni�o.

--Nome Evento, Nome Sala, Qtd Pessoas, Data In�cio, Hora In�cio.

CREATE FUNCTION fEventoAntigo(@Valor float) -- Cria a funcao (ta la agr)
RETURNS TABLE AS
RETURN(SELECT * FROM Evento)

ALTER FUNCTION fEventoAntigo(@bibibi varchar(100)) -- Altera a funcao q ta la
RETURNS TABLE AS -- sla
RETURN(
SELECT TOP 1 * FROM Evento -- Select normal
WHERE Descricao like '%'+@bibibi+'%'  -- Procura a variavel (pode ter coisa antes ou dps)
ORDER BY DtHrInicio asc)

SELECT * FROM fEventoAntigo('Aula') -- Ler a funcao com a variavel aula 

-- Peguei a visao --


--------------------------------------------------------------------------------------------------
-- Codigo do don (entendi nd) --

-- Criando a fun��o
CREATE FUNCTION fnEventoAntigo (@Valor Varchar(20))
RETURNS TABLE AS
RETURN(
    SELECT TOP 1
        E.Descricao AS 'Evento',
        S.Nome      AS 'Sala',
        COUNT(EP.IDPessoa) AS 'Qtd Pessoas',
        Convert(Varchar(10), E.DtHrInicio, 103) AS 'Data de In�cio', -- ??
        Convert(Varchar(10), E.DtHrInicio, 108) AS 'Hora In�cio' 
    FROM Evento E
    INNER JOIN Sala S
        ON S.IDSala = E.IDSala
    INNER JOIN EventoPessoa EP
        ON EP.IDEvento = E.IDEvento
    WHERE E.Descricao LIKE @Valor+'%'
    GROUP BY E.Descricao, S.Nome, E.DtHrInicio
    ORDER BY E.DtHrInicio
)
 
-- Verificando os dados
SELECT * FROM fnEventoAntigo('Aula')
