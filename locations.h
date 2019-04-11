
 public void Start (){ 
          System.out.println ("Hello...Welcome to The Lone Wanderer.\n");
          System.out.println("You wake up from a deep slumber in a small forest clearing,\n");
          System.out.println("quickly realizing nothing around you seems familiar,\nyou stumble to your feet and begin dusting yourself off to take a look around...\n\n");
          System.out.println("Directly in front of you there is a dirt road that cuts between the trees.\n");
          System.out.println("You notice a hill with a small cottage at the top to your left.\n");
          System.out.println("Looking towards your right you notice a small stream.\n");
          System.out.println("(Hint: try testing out commands like: go east or go right to begin exploring!)\n");
          System.out.println("What would you like to do?\n");
          
          
          choice = scan.nextLine();
          
          If(choice=="east") {
              
              Stream (); }
          
          else if (choice == "west") { 
                  
                  Small Cottage();
                  }
          else {
                  
                  Start (); /** comment**/ 
                  }
          
