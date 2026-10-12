package enumere;

public enum Style {

    A,F;
    public String ToString(){

        switch(this){

            case A: return "Amande";
            case F: return "Florentine";
            default: return "Unknown";




        }

    }

}
