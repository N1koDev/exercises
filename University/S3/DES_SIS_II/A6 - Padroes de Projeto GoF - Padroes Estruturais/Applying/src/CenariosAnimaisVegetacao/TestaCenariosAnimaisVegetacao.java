package CenariosAnimaisVegetacao;

import CenariosAnimaisVegetacao.AbstractComponent.*;
import CenariosAnimaisVegetacao.Client.MundoAnimal;
import CenariosAnimaisVegetacao.ConcreteComponent.*;
import CenariosAnimaisVegetacao.ConcreteDecorator.*;
import CenariosAnimaisVegetacao.ConcreteFactory.*;

public class TestaCenariosAnimaisVegetacao {
  public static void main(String[] args) {
    // Criando o cenário inicial
    Cenario deserto = new Deserto();

    // Criando a fábrica de animais do deserto
    FabricaDeserto fabricaDeserto = FabricaDeserto.getInstance();

    // Criando o mundo animal com o cenário inicial e a fábrica de animais do deserto
    MundoAnimal mundoAnimal = new MundoAnimal(fabricaDeserto, deserto);

    // Adicionando cactos e arbustos no deserto
    mundoAnimal.setVegetacaoDecorator(new CactosDecorator(deserto));
    mundoAnimal.runAnimalFeatures();

    System.out.println("\n");

    // Alterando para a selva jurássica
    Cenario selvaJurassica = new SelvaJurassica();

    // Criando a fábrica de animais da selva jurássica
    FabricaSelvaJurassica fabricaSelvaJurassica = FabricaSelvaJurassica.getInstance();

    // Alterando o cenário do mundo animal para a selva jurássica e a fábrica de animais da selva jurássica
    mundoAnimal = new MundoAnimal(fabricaSelvaJurassica, selvaJurassica);

    // Adicionando árvores gigantes e grandes folhagens na selva jurássica
    mundoAnimal.setVegetacaoDecorator(new ArvoresGigantesDecorator(selvaJurassica));
    mundoAnimal.runAnimalFeatures();

    System.out.println("\n");

    // Alterando para o fundo do oceano
    Cenario fundoOceano = new FundoOceano();

    // Criando a fábrica de animais do fundo do oceano
    FabricaFundoOceano fabricaFundoOceano = FabricaFundoOceano.getInstance();

    // Alterando o cenário do mundo animal para o fundo do oceano e a fábrica de animais do fundo do oceano
    mundoAnimal = new MundoAnimal(fabricaFundoOceano, fundoOceano);

    // Adicionando algas e cogumelos no fundo do oceano
    mundoAnimal.setVegetacaoDecorator(new AlgaseCogumelosDecorator(fundoOceano));
    mundoAnimal.runAnimalFeatures();
  }
}
