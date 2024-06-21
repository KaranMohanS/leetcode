package com.user;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

public class UserService {

    //static List<User> users = new ArrayList<>();
    //HashMap<Long, User> users = new HashMap<>();

    static String usersFilePath = "users.txt";

    public static long addUser(User user) throws IOException {
        File file = new File(usersFilePath);

        //write user to file as csv
        FileWriter fileWriter = new FileWriter(file,true);
        fileWriter.write(user.getId() + "," + user.getName() + "," + user.getEmail() + "," + user.getPassword() + "\n");
        fileWriter.close();
        return user.getId();
    }

    public static User getUser(long id) throws Exception {
        //read from file and return matching user id

        User user = null;

        BufferedReader bufferedReader =  new BufferedReader(
            new FileReader(
                new File(usersFilePath)
            )
        );

        String line;
        while ((line = bufferedReader.readLine()) != null) {
            String[] userString = line.split(",");
            if (Long.parseLong(userString[0]) == id) {
                user = new User(Long.parseLong(userString[0]), userString[1], userString[2], userString[3]);
                break;
            }
        }

        return user;
    }

      public static boolean deleteUser(long id) throws IOException {
        File file = new File(usersFilePath);
        File tempFile = new File("users_temp.txt");

        BufferedReader bufferedReader = new BufferedReader(new FileReader(file));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(tempFile));

        String line;
        boolean userFound = false;

        while ((line = bufferedReader.readLine()) != null) {
            String[] userString = line.split(",");
            if (Long.parseLong(userString[0]) == id) {
                userFound = true;
                continue; // Skip the line with the user to be deleted
            }
            bufferedWriter.write(line + System.lineSeparator());
        }

        bufferedReader.close();
        bufferedWriter.close();

        // Replace the original file with the updated one
        if (!file.delete()) {
            throw new IOException("Failed to delete the original file");
        }
        if (!tempFile.renameTo(file)) {
            throw new IOException("Failed to rename the temp file to original file name");
        }

        return userFound;
    }
    
    public static void printUsers() throws Exception {
        File file = new File(usersFilePath);
        FileReader fileReader = new FileReader(file);
        int i;
        while ((i = fileReader.read()) != -1) {
            System.out.print((char) i);
        }
    }

}
