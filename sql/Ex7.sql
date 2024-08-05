-- lista com os eventos que a capacidade ia ultrapassar mas n ultrapassou pq gnt faltou

SELECT
    E.Descricao,
    S.Capacidade,
    COUNT(EP.IDPessoa) AS 'Presentes'
FROM Evento E
INNER JOIN EventoPessoa EP
    ON E.IDEvento = EP.IDEvento
INNER JOIN Sala S
    ON S.IDSala = E.IDSala
GROUP BY E.IDEvento, S.Capacidade, EP.Presenca, E.Descricao
HAVING -- ??
    COUNT(EP.IDPessoa) <= S.Capacidade AND
    EP.Presenca = 1 AND
    E.IDEvento IN  -- ??
(  
    SELECT
        E.IDEvento
    FROM Evento E
    INNER JOIN EventoPessoa EP
        ON E.IDEvento = EP.IDEvento
    INNER JOIN Sala S
        ON S.IDSala = E.IDSala
    GROUP BY E.IDEvento, S.Capacidade
    HAVING COUNT(EP.IDPessoa) > S.Capacidade
)
