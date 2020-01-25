import java.util.*;
class Main
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        boolean l = true;
        while(sc.hasNextLine())
        {
            String line = sc.nextLine();
            while(line.contains("\""))
            {
                if(l)
                {
                    line = line.replaceFirst("\"", "``");
                } else
                    line = line.replaceFirst("\"", "''");
                l = !l;
            }
            System.out.println(line);
        }
    }
}
