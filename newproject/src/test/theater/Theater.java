package test.theater;

//import java.lang.*;
import java.util.*;

import test.movie.Movie;
import test.show.Show;

public abstract class Theater {

   
    Integer _3Dcost=null;
    Integer normal_cost=null;
    String name;
    String location;
    Map<String,List<Show>> show= new HashMap<String,List<Show>>();

    public Theater(String name,String location)
    {
        this.name=name;
        this.location=location;
    }
    
    @Override
    public String toString()
    {
        String str="";
        str +="name"+this.name+"\n";
        str +="location"+this.location+"\n";
        str +="showlist"+this.show;
        return str;
    }

    protected abstract void setcost(int threeD,int normal);

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getLocation() {
        return location;
    }

    public void setLocation(String location) {
        this.location = location;
    }
                                             // cost method
    
    public int cost(String type)throws Exception{

        switch (type) {
            case "normal":
               return this.normal_cost;
            case "3D":
               return this._3Dcost;
        
            default:
                throw new Exception("Invalied Show type");
        }
    }                                                              // add show method

    public Show addshow(
        Movie movie,
        String language,
        String date,
        String time,
        String type
    )
    throws Exception {
        Show show = new Show(time, type, language, movie, this.cost(type));

        if(this.show.get(date) == null) {
            this.show.put(date, new ArrayList<Show>() );
        }

        List<Show> shows = this.show.get(date);
        shows.add(show);
        this.show.put(date, shows);
        return show;
    }
}