public class Box {

    
    int width, length, height;

    void setwidth(int c) {
        width = c;
    }

    void setlength(int c) {
        length = c;
    }

    void setheight(int c) {
        height = c;
    }

    int getwidth() {
        return width;
    }

    int getlength() {
        return length;
    }

    int getheight() {
        return height;
    }

    void display_all()
    {
        System.out.println("Width : " + getwidth());
        System.out.println("Length : " + getlength());
        System.out.println("Height : " + getheight());
    }

    public static void main(String[] args) {
        Box ob = new Box();
        ob.setheight(100);
        ob.setlength(200);
        ob.setwidth(300);
        ob.display_all();
    }
}
