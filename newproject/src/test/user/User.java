package test.user;

public class User {

    int user_id;
    String user_name;
    String ph_no;
    int age;

    public User(int user_id,String user_name,String ph_no,int age)
    {
        this.user_id=user_id;
        this.user_name=user_name;
        this.ph_no=ph_no;
        this.age=age;
    }

    @Override
    public String toString()
    {
        return "id :"+this.user_id+"\n"
        +"name :"+this.user_name+"\n"
        +"ph_no :"+this.ph_no+"\n"
        +"age :"+this.age+"\n";
    }

    public int getid()
    {
       return user_id;
    }
    public void setid(int user_id)
    {
        this.user_id=user_id;
    }
    public String getuser_name()
    {
        return user_name;
    }
    public void setuser_name(String user_name)
    {
        this.user_name=user_name;
    }
    public String getph()
    {
        return ph_no;
    }
    public void setph(String pn_no)
    {
        this.ph_no=pn_no;
    }
    public int getage()
    {
        return age;
    }
    public void setage(int age)
    {
        this.age=age;
    }
    
}
