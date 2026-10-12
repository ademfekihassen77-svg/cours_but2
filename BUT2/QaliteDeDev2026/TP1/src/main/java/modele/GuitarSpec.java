package modele;

import enumere.Builder;
import enumere.Type;
import enumere.Wood;

public class GuitarSpec extends InstrumentSpec {
    private int numString;

    public GuitarSpec(Builder builder, String model, Type type, Wood backWood, Wood topWood, int numString) {
        super(builder, model, type, backWood, topWood);
        this.numString = numString;
    }

    public Integer getNumString() {
        return numString;
    }

    @Override
    public boolean matches(InstrumentSpec otherSpec) {
        if (!(otherSpec instanceof GuitarSpec)) return false;
        if (!super.matches(otherSpec)) return false;
        return numString == ((GuitarSpec) otherSpec).numString;
    }

    @Override
    public String toString() {
        return super.toString() + ", numString=" + numString;
    }
}
