package test.show;

import test.movie.Movie;

public class Show {
    
    String time;
    String type;
    String language;
    Movie movie;
    int cost;

    public Show(String time,String type,String language,Movie movie,int cost)
    {
        this.time=time;
        this.type=type;
        this.language=language;
        this.movie=movie;
        this.cost=cost;
    }

    @Override
    public String toString()
    {
        String str ="";
        str +="time :"+this.time+"\n";
        str +="type :"+this.type+"\n";
        str +="language :"+this.language+"\n";
        str +="movie :"+this.movie+"\n";
        str +="cost :"+this.cost+"\n";
        return str;
    }

    public String gettime()
    {
        return time;
    }
    public void settime(String time)
    {
        this.time=time;
    }
    public String gettype()
    {
        return type;
    }
    public void settype(String type)
    {
        this.type=type;
    }
    public String getlanguage()
    {
        return language;
    }
    public void setlanguage(String language)
    {
        this.language=language;
    }
    public Movie getmovie()
    {
        return movie;
    }
    public void setmovie(Movie movie)
    {
        this.movie=movie;
    }
    public int getcost()
    {
        return cost;
    }
    public void setcost(int cost)
    {
        this.cost=cost;
    }
}
