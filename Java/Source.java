import java.util.Scanner;
class Source{
    private String name;
    private int calories;
    
    public Source(String name,int calories)
    {
        this.name=name;
        this.calories=calories;
    }
    
    @Override
    public String toString()
    {
        return String.format("Fruit [name = "+this.name+"; calories = " +this.calories+"]");
    }
    
    public String getCalorieLevel()
    {
        if(this.calories>=150)
        {
            return "HIGH";
        }
        else if(this.calories>=75 && this.calories<150)
        {
            return "MEDIUM";
        }
        else
        {
            return "LOW";
        }
    }
    
    public static void main(String[] args){
    Scanner input=new Scanner(System.in);
    String fruit_name=input.next();
    int fruit_calories=input.nextInt();
    Source s=new Source(fruit_name,fruit_calories);
    System.out.println(s);
    System.out.println("Calorie Level : "+s.getCalorieLevel());
    }
}