/*locations.c, primary author: Damir*/

/*translated from Java to C by Peter*/

#include <stdio.h>
#include <stdlib.h>
#include "include/userinput.h"
#include "include/locations.h"


/*
import java.util.Scanner;

public class Location { 
    
   

        Scanner myScanner = new Scanner(System.in);
	Scanner enterScanner = new Scanner(System.in);
         
      
        String token, inventory; /* This is for me so i can test the logic */
          
    /*
          
          public static void main(String[] args){
          
              Location dublin;
              dublin = new Location();
              
              dublin.Start(); 
              
              /** all the things above this do not worry about it */ 
              /** From the bottom use what ever you can**/
          } 
  
          /*
        
          public void Start (){    
          System.out.println("\n------------------------------------------------------------------\n");    
          System.out.println ("Hello...Welcome to The Lone Wanderer.");
          System.out.println("You wake up from a deep slumber in a small forest clearing,");
          System.out.println("quickly realizing nothing around you seems familiar,\nyou stumble to your feet and begin dusting yourself off to take a look around...");
          System.out.println("Directly in front of you there is a dirt road that cuts between the trees.");
          System.out.println("On 'Left' or 'West' You notice a hill with a small cottage at the top.");
          System.out.println("Looking towards your 'Right' or 'East' you notice a small stream.");
          System.out.println("What would you like to do?");
          System.out.println("\n------------------------------------------------------------------\n");
      
                   
            token = myScanner.nextLine ();
          /*East or right goes to the stream      
          if ("east".equals(token) || "right".equals(token) ) {
            Stream();
          }
          /*west or left goes in fron of cottage
          else if ("west".equals(token) || "left".equals(token)) {
             SmallCottage ();
          }
                     else { System.out.println("\n------------------------------------------------------------------\n");
                            System.out.println("Not the right command Lone Wanderer!!!");    
                            System.out.println("\n------------------------------------------------------------------\n");
                       } 
          
               
                  }
         public void Stream (){ 
    	System.out.println("\n------------------------------------------------------------------\n");
		System.out.println("Upon arriving at the stream, you begin to take a look around. ");
                System.out.println("There doesn't seem to be much nearby, only the stream and some rocks along the nearby shore.");
		System.out.println("Across the stream you hear voices. You could 'Swim' towards them");
		System.out.println("What do you want to do ?");
		System.out.println("\n------------------------------------------------------------------\n");
                
                
               
                   token = myScanner.nextLine ();
                    if ("swim".equals(token) || "stream".equals(token) ) {                    
                    System.out.println("\n------------------------------------------------------------------\n");
                    System.out.println ("The stream is impassable, the stream is too deep and the current is too strong.");
                    System.out.println("When glancing at the rocks at the shore there seems to be a weird object caught between some rocks near the streams edge.\n"
                            + "When you crouch down and inspect it further, you notice that it is a small box.");                  
                    System.out.println("Hint: Try using command 'Move'");
                    System.out.println("\n------------------------------------------------------------------\n");
                    }
                    
                    else if ("move".equals(token)){
                   System.out.println("\n------------------------------------------------------------------\n");
                   System.out.println("You try to move the box, but the box breaks and something shiny glance your eye.");
                   System.out.println("Clearing the remains of the box, you see the shiny key.");
                   System.out.println("Hint: Try using command 'Get'");
                   System.out.println("\n------------------------------------------------------------------\n");
               }
                    else if ("get".equals(token)) {
                        System.out.println("\n------------------------------------------------------------------\n");
                        System.out.println("Key picked up!");
                        System.out.println("\n------------------------------------------------------------------\n");
                     /**put key in inventory 
                            }                               
                    else if ("west".equals(token) || "left".equals(token)) {
                         SmallCottage();
                    }
                   
          
                         else  {   
                           System.out.println("\n------------------------------------------------------------------\n");
                           System.out.println("Not the right command Lone Wanderer!!!");
                           System.out.println("You can go 'West' to Abandoned cottage. ");
                           System.out.println("\n------------------------------------------------------------------\n");    
                                }
                    
         
               
          }
    

         public void SmallCottage (){ 
             
                System.out.println("\n------------------------------------------------------------------\n");
                System.out.println("Heading West from the forest clearing, you arrive to what seems like an old abandoned cottage.");
		System.out.println("You are in front of the small cottage.");
                System.out.println("Doors are in front of you. You could try to 'Open' them.");
                System.out.println("There is a 'Window', on the right that you could peak through, and see what is inside");
                System.out.println("\n------------------------------------------------------------------\n");
                
               
                token=myScanner.nextLine();
                
                if ("open".equals(token) && "key".equals(inventory) ) {
                
                    System.out.println("Doors open with a loud creek.");
                    InsideCottage();
                      
                }
                
                else if ("open".equals(token) && !"key".equals(inventory)) {
                    System.out.println("\n------------------------------------------------------------------\n");
                    System.out.println("Doors are locked, you need to find a key.");
                    System.out.println("Hint: Try Going to the stream ");
                    System.out.println("\n------------------------------------------------------------------\n");
                }
         
                    
                else if ("window".equals(token)) {
                System.out.println("\n------------------------------------------------------------------\n");
                System.out.println("You look through the window, you do not see anything,");
                System.out.println("but you hear some noise, similiar to wood cracking, sound`s like rocking chair.");
                System.out.println("\n------------------------------------------------------------------\n");
                  
                }
                
                else if ("east".equals(token)) {
                    Stream();
                }
                else {
                    System.out.println("\n------------------------------------------------------------------\n");
                    System.out.println("Not the right command Lone Wanderer!!!");
                    System.out.println("Hint: Try going 'East' to the stream, or read the description.");
                    System.out.println("\n------------------------------------------------------------------\n");
                }
                        
                
          }

    public void InsideCottage() {
        System.out.println("\n------------------------------------------------------------------\n");
        System.out.println("Upon entering the cottage you take in your surroundings. The damp musty smell of mold permeates the air.");
        System.out.println("You realize this cottage has been abandoned for quite some time.");
        System.out.println("You can search the cottage, using the commands 'North' or 'Forward, 'South' or 'Down', 'West' or 'Left', 'East' or 'Right'.");
        System.out.println("\n------------------------------------------------------------------\n");
        
          
                    token = myScanner.nextLine ();
            
                if ("north".equals(token) || "forward".equals(token) ) {
                    System.out.println("\n------------------------------------------------------------------\n");
                    System.out.println("On the Western wall of the Cottage there is a fireplace. You notice on this wall there are some hunting trophies.\n"
                                     + "There is also a fireplace," 
                            + " upon closer inspection you notice one of the bricks of the fireplace is slightly loose and can be completely removed.  ");
                    System.out.println("Hint: Try command 'Remove'!!");
                    System.out.println("\n------------------------------------------------------------------\n");
                     }
                else if ("remove".equals(token)){
                    System.out.println("\n------------------------------------------------------------------\n");
                    System.out.println("Upon removing the brick you reach in and start feeling around for anything that you can pick up.  "
                            + "You discover a long metal object and when you pull it out to inspect it, "
                            + "you realize it is an old rusty dagger that still has remnants of some dried blood on the tip.");
                    System.out.println("Do you want 'Throw' the dagger or 'Keep' it?");
                    System.out.println("\n------------------------------------------------------------------\n");
                }
                
                else if ("throw".equals(token)) {
                     System.out.println("\n------------------------------------------------------------------\n");
                     System.out.println("You throwed the dagger away.");
                     System.out.println("You can keep searching the cottage, with commands 'South' or 'Down', 'West' or 'Left', 'East' or 'Right'.\n"
                             + "or you can 'Leave' the cottage. ");
                     System.out.println("\n------------------------------------------------------------------\n");
                }
                else if ("keep".equals(token)){
                    /** put object in inventory
                    System.out.println("\n------------------------------------------------------------------\n");
                    System.out.println("The dagger is in inventory Lone Wanderer.");
                    System.out.println("You can keep searching the cottage, with commands 'South' or 'Down', 'West' or 'Left', 'East' or 'Right'.\n"
                            + "or you can 'Leave' the cottage.");
                    
                    System.out.println("\n------------------------------------------------------------------\n");
                }
                else if ("west".equals(token) || "left".equals(token)) {
                    System.out.println("\n------------------------------------------------------------------\n");
                    System.out.println("On the northern part of the Cottage there is a shelf containing groundskeeping tools. "
                            + " There is a rake, a shovel, and a hacksaw");
                    System.out.println("You can take one of these if you want, just type which one you want, or 'None' if you do not want to carry more stuff.");
                    System.out.println("\n------------------------------------------------------------------\n");
                        
                 }
                else if ("rake".equals(token)){
                    /*put rake in inventory
                      System.out.println("\n------------------------------------------------------------------\n");
                      System.out.println("You have choosen a rake.");
                      System.out.println("You can keep searching the cottage, with commands 'South' or 'Down', 'West' or 'Left', 'East' or 'Right'.\n"
                            + "or you can 'Leave' the cottage.");
                      System.out.println("\n------------------------------------------------------------------\n");
                }
                 else if ("shovel".equals(token)){
                    /*put shovel in inventory
                      System.out.println("\n------------------------------------------------------------------\n");
                      System.out.println("You have choosen a shovel.");
                      System.out.println("You can keep searching the cottage, with commands 'South' or 'Down', 'West' or 'Left', 'East' or 'Right'.\n"
                            + "or you can 'Leave' the cottage.");
                      System.out.println("\n------------------------------------------------------------------\n");
                }
                  else if ("hacksaw".equals(token)){
                    /*put hacksaw in inventory
                      System.out.println("\n------------------------------------------------------------------\n");
                      System.out.println("You have choosen a hacksaw.");
                      System.out.println("You can keep searching the cottage, with commands 'South' or 'Down', 'West' or 'Left', 'East' or 'Right'.\n"
                            + "or you can 'Leave' the cottage.");
                      System.out.println("\n------------------------------------------------------------------\n");
                }
                   else if ("none".equals(token)){
                    /*put rake in inventory
                      System.out.println("\n------------------------------------------------------------------\n");
                      System.out.println("You do not need anything. You ara a strong man.");
                      System.out.println("You can keep searching the cottage, with commands 'South' or 'Down', 'West' or 'Left', 'East' or 'Right'.\n"
                            + "or you can 'Leave' the cottage.");
                      System.out.println("\n------------------------------------------------------------------\n");
                }
                
                else if ("east".equals(token) || "right".equals(token)) { 
                    System.out.println("\n------------------------------------------------------------------\n");
                    System.out.println("Just an old picture of a cat.");
                    System.out.println("You can keep searching the cottage, with commands 'South' or 'Down', 'West' or 'Left', 'East' or 'Right'.\n"
                            + "or you can 'Leave' the cottage.");
                    System.out.println("\n------------------------------------------------------------------\n");
                
                } 
                else if ("south".equals(token) || "down".equals(token)) {
                    System.out.println("\n------------------------------------------------------------------\n");
                    System.out.println("In the southern part of the cottage there lies a makeshift straw bed with a wooden bedside table along next to it.");
                    System.out.println("Hint: Use command 'Open', if you want to open the table.");
                    System.out.println("\n------------------------------------------------------------------\n");
                        
                }
                else if ("open".equals(token)){
                    System.out.println("\n------------------------------------------------------------------\n");
                    /*put map in inventory
                    System.out.println("You discover an old map of the immediate surrounding area.  "
                            + "There seems to be an area circled next to what appears to be an odd shaped tree along the side of the road.");
                    System.out.println("You take the map with you.");
                    System.out.println("You can keep searching the cottage, with commands 'North' or 'Forward', 'West' or 'Left', 'East' or 'Right'.\n"
                            + "or You can 'Leave; the cottage. ");
                    
                    System.out.println("\n------------------------------------------------------------------\n");
                    
                }
                else if ("leave".equals(token)) {
                    System.out.println("\n------------------------------------------------------------------\n");
                    System.out.println("You leave the cottage, and you are on the road, towards the odd tree.");  
                    System.out.println("\n------------------------------------------------------------------\n");
                    Road();
                    
                }
                    
                
                else { 
                    System.out.println("\n------------------------------------------------------------------\n");
                    System.out.println("Not the right command Lone Wanderer!!!"); 
                    System.out.println("Read the description Lone Wanderer!!!");
                    System.out.println("\n------------------------------------------------------------------\n");
                       } 
            
           
            
    }
public void Road (){
     System.out.println("\n------------------------------------------------------------------\n");
     System.out.println("After leaving the cottage, there is a narrow dirt road that divides the many trees up ahead.\n"
             + " Looking towards your right hand side, you notice a big odd-shaped decaying tree.");
     System.out.println("Use command 'Right'  to go towards the odd tree, or 'Forward' to keep walking... ");
     System.out.println("\n------------------------------------------------------------------\n");
    
    
                    token = myScanner.nextLine ();

        if ("right".equals(token)) {
            System.out.println("\n------------------------------------------------------------------\n");
     System.out.println("Upon further inspection of the odd shaped tree you realise that nothing wishes to grow around it.\n"
             + "There is a patch of dirt that encircles the entire tree.");
     System.out.println("You can start to 'Dig'if you have shovel.");
     System.out.println("\n------------------------------------------------------------------\n");
    
        }
        else if ("forward".equals(token)) {
            System.out.println("\n------------------------------------------------------------------\n");
            System.out.println("Along heading North up the road, you notice a large stone structure jutting out from small group of trees.");
            System.out.println("\n------------------------------------------------------------------\n");
            System.out.println("When you get closer to the structure, it starts to resemble a statues head.\n "
                    + "Brushing away some vines and branches you notice two eye sockets of the statue.\n "
                    + " One of the eye sockets has already been filled with a ruby that is identical to the one that you found in the wooden coffin.");
            System.out.println("Hint:Type Amulet....");
            System.out.println("\n------------------------------------------------------------------\n");
        }
            else if ("amulet".equals(token) && "amulet".equals((inventory))){
                    System.out.println("\n------------------------------------------------------------------\n");
                    System.out.println("The ground starts shaking and the stone statue begins rising from the earth.");
                    System.out.println("\n------------------------------------------------------------------\n");
                    FinalBattle();
                           
        }
            /*if does not have the amulet
            else if ("amulet".equals(token) && !"amulet".equals((inventory))){
                    System.out.println("\n------------------------------------------------------------------\n");
                    System.out.println("You need the amulet Lone Wanderer...\n"
                   + "You need to go to Odd tree, Type 'Road'..." );
                    System.out.println("\n------------------------------------------------------------------\n");
                    FinalBattle();
            }
        /*if the player took the shovel
        else if ("shovel".equals(token)&& "shovel".equals(inventory)) {
            System.out.println("\n------------------------------------------------------------------\n");
            System.out.println("You start digging up the area beneath the tree until you hear a “THUMP” noise.\n"
                    + "You realize that the shovel has hit a wooden-like object.\n"
                    +  "You can use 'Hacksaw' to open the wooden-like object");
            System.out.println("\n------------------------------------------------------------------\n");
        }
        
            else if ("shovel".equals(token)&& !"shovel".equals(inventory)) {
            System.out.println("\n------------------------------------------------------------------\n");
            System.out.println("You need a shovel Lone Wandere!!!");
            System.out.println("Type cottage, you will go back.....");
            System.out.println("\n------------------------------------------------------------------\n");
        }
             else if ("hacksaw".equals(token)&& "hacksaw".equals(inventory)) {
            System.out.println("\n------------------------------------------------------------------\n");
            System.out.println("You start sawing at the upper portion of the wooden coffin.  It has been secured tightly and it takes a couple,"
                    + " of hours until you finally can lift off the lid from the rest of the coffin.\n" 
                    +  "You can use 'Hacksaw' to open the wooden-like object");
            System.out.println("\n------------------------------------------------------------------\n");
            
            System.out.println("Upon first glance there seems to be just a  regular corpse inside.  Further inspecting the corpse itself, "
                    + "you realize that the corpse is still clenching his right fist.\n "
            + "Try Prying...");
            System.out.println("\n------------------------------------------------------------------\n");
        }
             else if ("prying".equals(token)) {
                 /*put amulet in inventory
            System.out.println("\n------------------------------------------------------------------\n");
            System.out.println("Prying open his right fist, you discover,"
                    + " a ruby amulet that starts to glow when you take it away from the corpse.");
            System.out.println("Type road, you will go back.....");
            System.out.println("\n------------------------------------------------------------------\n");
            }
             
             else if ("road".equals(token)){
                 Road();
             }
        
            else if ("hacksaw".equals(token)&& !"hacksaw".equals(inventory)) {
            System.out.println("\n------------------------------------------------------------------\n");
            System.out.println("You need a hacksaw Lone Wandere!!!");
            System.out.println("Type cottage, you will go back.....");
            System.out.println("\n------------------------------------------------------------------\n");
            }
        else if ("cottage".equals(token)) {
            InsideCottage();
        }


            else { 
                    System.out.println("\n------------------------------------------------------------------\n");
                    System.out.println("Not the right command Lone Wanderer!!!"); 
                    System.out.println("Read the description Lone Wanderer!!!");
                    System.out.println("\n------------------------------------------------------------------\n");
                       } 
    

}
public void FinalBattle() {
    
                    System.out.println("\n------------------------------------------------------------------\n");
                    System.out.println("A skeletor rises from the ground...."); 
                    System.out.println("\n------------------------------------------------------------------\n");
                       
}

}

   
         
*/
          
       
int Location_Update(int token, int room, Loc arr_loc[NUMBER_OF_ROOMS])
{





	return token;
}
















