package Summer_Assignment_2401921530258.Week2.Oops.live;

import Summer_Assignment_2401921530258.Week2.Oops.music.Playable;
import Summer_Assignment_2401921530258.Week2.Oops.music.string.Veena;
import Summer_Assignment_2401921530258.Week2.Oops.music.wind.Saxophone;

public class Test {
     public static void main(String[] args) {

        // a. Create an instance of Veena and call play()
        Veena v = new Veena();
        v.play();

        // b. Create an instance of Saxophone and call play()
        Saxophone s = new Saxophone();
        s.play();

        // c. Using Playable reference
        Playable p;

        p = new Veena();
        p.play();

        p = new Saxophone();
        p.play();
    }
    
}
