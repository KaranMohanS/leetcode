package test.theater;
//import test.theater.*;

public class Multiplex extends Theater {
   
    public Multiplex(String name, String location, int threeDcost, int normalcost) {
        
        super(name, location);
        this.setcost(threeDcost,normalcost);
    }

    @Override
    protected void setcost(int threeD, int normal) {
        this._3Dcost = threeD;
        this.normal_cost = normal;
    }
}
