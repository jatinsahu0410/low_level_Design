
public class AircraftOne {
    private static AircraftOne aircarftOneInstance;

    private AircraftOne(){}

    public static AircraftOne getInstnace(){
        if(aircarftOneInstance == null){
            aircarftOneInstance = new AircraftOne();
        }
        return aircarftOneInstance;
    }
}
