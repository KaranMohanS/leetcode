package test;

//import java.lang.reflect.Array;
import java.util.*;

import test.movie.Movie;
//import test.show.Show;
//import test.user.User;
import test.theater.Theater;
import test.user.User;
import test.theater.Multiplex;

public class Test {
    
    public static void main(String[] args) throws Exception{

        User user=new User(1, "karan", "9360728854", 23);
        //System.out.println(user);

        String[] language={"Tanil","English"};
        List<String> lang=Arrays.asList(language);
        
        Movie movie = new Movie(user,101, "leo","Action", lang);

        Theater pvrCoimbatore = new Multiplex("PVR", "Coimbatore", 300, 200);

        pvrCoimbatore.addshow(movie, "TAMIL", "17-JUL", "15:00", "3D");
        pvrCoimbatore.addshow(movie, "TAMIL", "17-JUL", "19:00", "Normal");

        System.out.println(pvrCoimbatore);

}
}
