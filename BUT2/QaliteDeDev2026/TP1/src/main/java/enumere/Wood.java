package enumere;

public enum Wood {
    ADIRONDACK, CEDAR, COCOBOLO, MAHOGANY, MAPLE, SITKA, INDIAN_ROSEWOOD, ALDER, BRAZILIAN_ROSEWOOD;

    public String ToString() {
        switch (this) {
            case ADIRONDACK:
                return "Adirondack";
            case CEDAR:
                return "Cedar";
            case COCOBOLO:
                return "Cocobolo";
            case MAHOGANY:
                return "Mahogany";
            case MAPLE:
                return "Maple";
            case SITKA:
                return "Stika";
            case INDIAN_ROSEWOOD:
                return "Indian Rosewood";
            case ALDER:
                return "Alder";
            case BRAZILIAN_ROSEWOOD:
                return "Brazilian Rosewood";
            default: return "Unknown";

        }
    }
}
