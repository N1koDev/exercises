def to_rna(dna_strand):
    # Cria um dicionário que mapeia cada nucleotídeo de DNA ao seu complemento de RNA
    map = {'G': 'C', 'C': 'G', 'T': 'A', 'A': 'U'}

    # Usa uma compreensão de lista para iterar sobre cada nucleotídeo na strand de DNA
    # Para cada nucleotídeo, busca seu complemento no dicionário `map`
    # O resultado é uma lista de nucleotídeos de RNA
    # O método join() é usado para juntar todos os nucleotídeos de RNA em uma única string
    return ''.join(map[nucleotide] for nucleotide in dna_strand)
