package modele;

import enumere.Builder;
import enumere.Type;
import enumere.Wood;

public abstract class InstrumentSpec {
    private Builder builder;
    private String model;
    private Type type;
    private Wood backWood;
    private Wood topWood;

    public InstrumentSpec(Builder builder, String model, Type type, Wood backWood, Wood topWood) {
        this.builder = builder;
        this.model = model;
        this.type = type;
        this.backWood = backWood;
        this.topWood = topWood;
    }

    public Builder getBuilder() {
        return builder;
    }

    public String getModel() {
        return model;
    }

    public Type getType() {
        return type;
    }

    public Wood getBackWood() {
        return backWood;
    }

    public Wood getTopWood() {
        return topWood;
    }

    /** Vrai si cette spec (celle de l'inventaire) correspond à la spec recherchée. */
    public boolean matches(InstrumentSpec otherSpec) {
        if (otherSpec == null) return false;
        if (builder != otherSpec.builder) return false;
        if (model != null && !model.isEmpty()
                && !model.equalsIgnoreCase(otherSpec.model)) return false;
        if (type != otherSpec.type) return false;
        if (backWood != otherSpec.backWood) return false;
        if (topWood != otherSpec.topWood) return false;
        return true;
    }

    @Override
    public String toString() {
        return "builder=" + builder + ", model=" + model + ", type=" + type
                + ", backWood=" + backWood + ", topWood=" + topWood;
    }
}
