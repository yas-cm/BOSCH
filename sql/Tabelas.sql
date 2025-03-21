CREATE TABLE Sala(
	IDSala INT IDENTITY(1,1) PRIMARY KEY NOT NULL,
	Nome VARCHAR(50) NOT NULL,
	Capacidade INT NOT NULL,
);

CREATE TABLE Evento(
	IDEvento INT IDENTITY(1,1) PRIMARY KEY NOT NULL,
	IDSala INT NOT NULL FOREIGN KEY REFERENCES Sala(IDSala), -- vai referenciar outra tabela -- Tabela(Coluna)
	Descricao VARCHAR(100) NOT NULL,
	DtHrInicio DATETIME NOT NULL,
	DtHrFim DATETIME NOT NULL,
);

CREATE TABLE Equipamento(
	IDEquipamento INT IDENTITY(1,1) PRIMARY KEY NOT NULL,
	IDSala INT FOREIGN KEY REFERENCES Sala(IDSala),
	Nome VARCHAR(50) NOT NULL,
	Tipo VARCHAR(100) NOT NULL,
);

CREATE TABLE EventoEquipamento(
	IDEventoEquipamento INT IDENTITY(1,1) PRIMARY KEY NOT NULL,
	IDEvento INT FOREIGN KEY REFERENCES Evento(IDEvento),
	IDEquipamento INT FOREIGN KEY REFERENCES Equipamento(IDEquipamento),
);

CREATE TABLE Pessoa(
	IDPessoa INT IDENTITY(1,1) PRIMARY KEY NOT NULL,
	Nome VARCHAR(50) NOT NULL,
	Categoria VARCHAR(20) NOT NULL,
);

CREATE TABLE EventoPessoa(
	IDEventoPessoa INT IDENTITY(1,1) PRIMARY KEY,
	IDEvento INT FOREIGN KEY REFERENCES Evento(IDEvento),
	IDPessoa INT FOREIGN KEY REFERENCES Pessoa(IDPessoa),
	PapelEvento VARCHAR(75) NOT NULL, 
	Presenca BIT NOT NULL,
);
