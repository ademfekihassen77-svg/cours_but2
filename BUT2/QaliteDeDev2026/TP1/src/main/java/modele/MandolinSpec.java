package modele;

import enumere.Builder;
import enumere.Style;
import enumere.Type;
import enumere.Wood;

public class MandolinSpec extends InstrumentSpec {
    private Style style;

    public MandolinSpec(Builder builder, String model, Type type, Wood backWood, Wood topWood, Style style) {
        super(builder, model, type, backWood, topWood);
        this.style = style;
    }

    public Style getStyle() {
        return style;
    }

    @Override
    public boolean matches(InstrumentSpec otherSpec) {
        if (!(otherSpec instanceof MandolinSpec)) return false;
        if (!super.matches(otherSpec)) return false;
        return style == ((MandolinSpec) otherSpec).style;
    }

    @Override
    public String toString() {
        return super.toString() + ", style=" + style;
    }
}
