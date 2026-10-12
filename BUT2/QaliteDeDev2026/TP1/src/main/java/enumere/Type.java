package enumere;

public enum Type {
    ELECTRIC,ACOUSTIC;
    public String ToString() {
        switch (this) {
            case ACOUSTIC:
                return "Acoustique";
            case ELECTRIC:
                return "Electrique";

            default: return "Unknown";

        }
    }
}
