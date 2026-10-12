package modele;

public class InstrumentFactory {

    public Instrument create(double price, String SerialNumber, InstrumentSpec instrumentSpec) {
        if (instrumentSpec instanceof GuitarSpec ){
            return new Guitar()


        }
    }
}
