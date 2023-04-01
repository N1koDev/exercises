package ApplyingKnowledge.ConcreteFactory;

import ApplyingKnowledge.AbstractFactory.FabricaCenario;
import ApplyingKnowledge.AbstractProduct.AnimalPerigoso;
import ApplyingKnowledge.AbstractProduct.AnimalTransporte;
import ApplyingKnowledge.Product.Dromedário;
import ApplyingKnowledge.Product.Pterodátilo;
import ApplyingKnowledge.Product.Serpente;
import ApplyingKnowledge.Product.TRex;

public class FabricaSelvaJurássica extends FabricaCenario {

  public AnimalPerigoso createAnimalPerigoso() {
    return new TRex();
  }

  public AnimalTransporte createAnimalTransporte() {
    return new Pterodátilo();
  }
}
