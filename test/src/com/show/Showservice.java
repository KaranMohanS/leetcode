package com.show;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

import com.movie.Movie;

public class Showservice {

    static String showpath="show.txt";                   // addshow
    public static void addshow(Show show) throws IOException
    {
        File file=new File(showpath);
        if (!file.exists()) {
            file.createNewFile();
        }
        FileWriter fileWriter=new FileWriter(file,true);

        Movie movie=show.getMovie();

        fileWriter.write(show.getShowid()+","+show.getTime()+","+show.getType()+","+movie.getMovie_id()+","+movie.getMovie_name()+","+movie.getMovie_genre()+","+movie.getMovie_lang()+","+show.getCost()+"\n");

        fileWriter.close();
    }
                                                                       // getshow
    public static Show getshow(long showid ,long movie_id) throws IOException
    {
        File file=new File(showpath);
        if (!file.exists()) {
            file.createNewFile();
        }
        BufferedReader bufferedReader=new BufferedReader(new FileReader(file));

       
        
        Show show=null;
        String line;
        while ((line=bufferedReader.readLine())!=null) {
            {
                String arr[]=line.split(",");
                if(Long.parseLong(arr[0])==showid && Long.parseLong(arr[3])==movie_id)//optinal movie_id
                {
                    Movie movie=new Movie(Long.parseLong(arr[3]),arr[4],arr[5],arr[6]);
                    show=new Show(Long.parseLong(arr[0]),arr[1],arr[2],movie,Integer.parseInt(arr[7]));
                    break;
                }
            }
        }
        bufferedReader.close();
        return show;
    }

                                                                 // delete
    public static Boolean deleteshow(long showid) throws IOException
    {
        File file=new File(showpath);
       
        File filetemp=new File("show_temp.txt");
        if (!file.exists()) {
            file.createNewFile();
        }

        BufferedReader bufferedReader=new BufferedReader(new FileReader(file));
        BufferedWriter bufferedWriter=new BufferedWriter(new FileWriter(filetemp));

        String line;
        boolean showfound=false;

        while ((line=bufferedReader.readLine())!=null) {

            String arr[]=line.split(",");
            if(Long.parseLong(arr[0])==showid)
            {
                showfound=true;
                continue;
            }
            bufferedWriter.write(line+System.lineSeparator());
        }
        bufferedReader.close();
        bufferedWriter.close();

        if(!file.delete())
        {
            throw new IOException("Failed to delete the original file");
        }
        if (!filetemp.renameTo(file)) {
            throw new IOException("Failed to rename the temp file to original file name");
        }
        return showfound;
    }
                                                // print
    public static void printshow() throws IOException
    {
        File file=new File(showpath);
        if (!file.exists()) {
            file.createNewFile();
        }
        FileReader fileReader=new FileReader(file);

        int show;
        while ((show=fileReader.read())!=-1) {

            System.out.print((char) show);
        }
        fileReader.close();
    }
}


