package modele;

import java.util.ArrayList;
import java.util.List;

public class Inventory {

    private List<Instrument> instruments;

    public Inventory() {
        instruments = new ArrayList<>();
    }

    public void addInstrument(String serialNumber, double price, InstrumentSpec spec) {
        Instrument instrument;
        if (spec instanceof GuitarSpec) {
            instrument = new Guitar(serialNumber, price, (GuitarSpec) spec);
        } else if (spec instanceof MandolinSpec) {
            instrument = new Mandolin(serialNumber, price, (MandolinSpec) spec);
        } else {
            throw new IllegalArgumentException("Type de spec inconnu : " + spec);
        }
        instruments.add(instrument);
    }

    public Instrument get(String serialNumber) {
        for (Instrument instrument : instruments) {
            if (instrument.getSerialNumber().equals(serialNumber)) {
                return instrument;
            }
        }
        return null;
    }

    public List<Instrument> getInstruments() {
        return instruments;
    }

    public List<Instrument> search(InstrumentSpec searchSpec) {
        List<Instrument> matching = new ArrayList<>();
        for (Instrument instrument : instruments) {
            if (instrument.getInstrumentSpec().matches(searchSpec)) {
                matching.add(instrument);
            }
        }
        return matching;
    }
}
