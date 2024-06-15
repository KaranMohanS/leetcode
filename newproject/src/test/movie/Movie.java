package test.movie;

//import java.util.ArrayList;

public class Movie {
    
    int movie_id;
    String movie_name;
    String genre;
    String lang;

    public Movie(int movie_id,String movie_name,String genre,String lang)
    {
        this.movie_id=movie_id;
        this.movie_name=movie_name;
        this.genre=genre;
        this.lang=lang;
    }
    
    @Override
    public String toString()
    {
        String str="";
        str +="id"+this.movie_id+"\n";
        str +="name"+this.movie_name+"\n";
        str +="genre"+this.genre+"\n";
        str +="lang"+this.lang+"\n";
        return str;
    }

    public int getid()
    {
        return movie_id;
    }
    public void setid(int movie_id)
    {
        this.movie_id=movie_id;
    }
    public String getname()
    {
        return movie_name;
    }
    public void setname(String movie_name)
    {
        this.movie_name=movie_name;
    }
    public String getgenre()
    {
        return genre;
    }
    public void setgender(String genre)
    {
        this.genre=genre;
    }
    public String getleng()
    {
        return lang;
    }
    public void setleng(String lang)
    {
        this.lang=lang;
    }
}
