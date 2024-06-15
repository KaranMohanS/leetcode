package test;

import test.movie.Movie;
import test.show.Show;
import test.user.User;

public class Test {
    
     public static void main(String[] args) {
        User u2=new User(1,"karan","9360728854",23);
        System.out.println(u2);

       /*  ArrayList<User> u1=new ArrayList<User>();
        u1.add(new User(2,"mohan","73738839",22));
        u1.add(new User(3, "karthi", "763838236", 25));
        for(User x:u1)
        {
            System.out.println(x);
        }*/
        

        Movie obj = new Movie(101, "Leo", "Action", "Tamil");
        System.out.println("Movie created: " + obj);

        Show s1=new Show("11.0 am","normal","Tamil",obj, 250);
        System.out.println(s1);
    }
}
