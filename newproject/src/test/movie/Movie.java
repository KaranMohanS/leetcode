package test.movie;

import java.util.List;

import test.user.User;

//import java.util.ArrayList;

public class Movie {
    User user;
    int movie_id;
    String movie_name;
    String genre;
    List<String> lang;

    public Movie(User user,int movie_id,String movie_name,String genre,List<String> lang)
    {
        this.user=user;
        this.movie_id=movie_id;
        this.movie_name=movie_name;
        this.genre=genre;
        this.lang=lang;
    }
    
    @Override
    public String toString()
    {
        String str="";
        str +="User"+this.user+"\n";
        str +="movie_id :"+this.movie_id+"\n";
        str +="movie_name :"+this.movie_name+"\n";
        str +="movie_genre :"+this.genre+"\n";
        //str +="movie_lang :"+this.lang+"\n";
        return str;
    }
    public User getuser()
    {
        return user;
    }
    public void setuser(User user)
    {
        this.user=user;
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
    public List<String> getleng()
    {
        return lang;
    }
    public void setleng(List<String> lang)
    {
        this.lang=lang;
    }
}
