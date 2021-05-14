//Author: Zoe Kunhart
#include <iostream>
#include <fstream>
#include <vector>
#include "HEX.h"
using namespace std;
bool isacolor(string);
void isunique(vector<string> ,bool &result2);

int main()
{
  string basecolor;
  string whattodo;
  string filename;
  fstream reader;
  vector<string> myvector;
  string colors;
  char yesno='y';
  bool result;
  bool result2;
  vector<Hex> hexvector;
  


  

  

 while(yesno=='y')
 {
   cout<<"what would you like to do? enter 'themecompleter' to enter a color and get a 5 color theme that will be saved to a CSS file, enter 'distinguishcolors' to enter two colors and find out if they would be compatable for a color blind person, or enter 'HEX' to find out the hex number for your color."<<endl;
  cin>>whattodo;


    if(whattodo=="HEX")
    {
      string line;
      string hexvalue;

      reader.open("hexvalues.txt", ios::in );
      if (reader.is_open()){
      while (! reader.eof())
     {
      getline(reader, line);
      if (line[0]=='#')
      {
        hexvalue=line;

      }
      else 
      {
        Hex nameandnumber(line,hexvalue); 
        hexvector.push_back(nameandnumber);
      }
     }

      cout<<"Enter a color\n";

      cin>>basecolor;
      
      if(isacolor(basecolor)){
        for (Hex x: hexvector)
        {
          if (x.getname()==basecolor) 
          {
            cout<<x.getnumber() << "\n";
          }
        }
      } else {
        cout<< "This is not a color\n";
      }
      
      }
      reader.close();
      cout<<"would you like to try again? Enter y for yes or n for no\n";
      cin>>yesno;
    }

  else if (whattodo=="themecompleter")
{

  cout<< "Please enter a color name that is of the 143 color names supported by CSS. Enter it in the form seen that is compatable with CSS (no spaces and a capitol only as the first letter of every word, eg: SlateBlue) Copy and paste this link into your browser for the list of 143 colors to choose from. https://www.w3schools.com/colors/colors_names.asp"<<endl;
  cin>>basecolor;

  result = isacolor(basecolor);
  if (result==true)
  {
    cout<<"valid color"<<endl;
  }
  else if (result==false)
  {
   cout<<"not a valid color. Try again"<<endl;
   return 0;
  }




  cout<< "Please enter a one word name for your file that your theme will be saved to."<<endl;
  cin>> filename;
  ofstream myfile(filename);

  if(!myfile.is_open()){
    cout << "unable to open file";
    return 0;
  }


  if (basecolor== "CornFlowerBlue" || basecolor== "DodgerBlue"||basecolor=="RoyalBlue"||basecolor=="SteelBlue")
 {
   cout<<"Your compatable colors are: "<<basecolor<<", BlueViolet, Magenta, DarkOrange, Gold, Black. Would you like to make another color palette? Type y for yes or n for no. "<<endl;

   myfile<<".basecolor { color: " <<basecolor<<".color1 { color: BlueViolet;},.color2 { color: Magenta;} .color3 {color: DarkOrange;} .color4 {color: Gold} .color5 {color: Black;}";
  }
   

  else if(basecolor=="BlueViolet"||basecolor=="DarkViolet"||basecolor=="MeduimPurple"|| basecolor=="MediumSlateBlue"||basecolor=="RebeccaPurple")
  {
    cout<<"Your compatable colors are: CornFlowerBlue, "<<basecolor<<", Magenta, DarkOrange, Gold, Black. Would you like to make another color palette? Type y for yes or n for no."<<endl;
    myfile<<".color1 { color: CornFlowerBlue;} .basecolor { color: "<<basecolor<<" .color2 {color: Magenta;} .color3 { color: DarkOrange;} .color4 { color: Gold;} .color5 {color: Black;}";
  }

  else if (basecolor=="Magenta"||basecolor=="HotPink"||basecolor=="Fuchsia"||basecolor=="DeepPink"||basecolor=="MediumVioletRed"||basecolor=="PaleVioletRed"||basecolor=="DarkRed"||basecolor=="FireBrick"||basecolor=="Crimson"||basecolor=="IndianRed"||basecolor=="LightCoral"||basecolor=="Thistle"||basecolor=="Plum"||basecolor=="MediumAquaMarine")
  {
    cout<< "Your compatable colors are: CornflowerBlue, BlueViolet, "<<basecolor<<", DarkOrange, Gold, Black. Would you like to make another color palette? Type y for yes or n for no."<<endl;
   myfile<<".color1 { color: CornFlowerBlue;} .color2 { color: BlueViolet;} .basecolor {color: " <<basecolor<< ";} .color3 { color: DarkOrange;} .color4 { color:Gold;} .color5 {color: Black;}";
  }

  else if (basecolor=="DarkOrange"||basecolor=="OrangeRed"||basecolor=="Coral"||basecolor=="Tomato"||basecolor=="Red"||basecolor=="Salmon"||basecolor=="DarkSalmon"||basecolor=="LightSalmon"||basecolor=="Chocolate"||basecolor=="DarkGoldenrod"||basecolor=="Peru"||basecolor=="RosyBrown"||basecolor=="Tan"||basecolor=="Wheat"||basecolor=="NavajoWhite"||basecolor=="Bisque"||basecolor=="BlanchedAlmond"||basecolor=="Cornsilk")
  {
    cout<<"Your compatable colors are: CornFlowerBlue, BlueViolet, Magenta, "<<basecolor<<", Gold, Black. Would you like to make another color palette? Type y for yes or n for no."<<endl;
    myfile<<".color1 { color: CornFlowerBlue;} .color2 { color: BlueViolet;} .color3 {color: Magenta;} .basecolor { color: "<<basecolor<< ";} .color4 { color: Gold;} .color5 {color: Black;}";
  }

  else if (basecolor=="Gold"||basecolor=="Orange"||basecolor=="DarkKhaki"||basecolor=="Khaki"||basecolor=="PeachPuff"||basecolor=="Yellow"||basecolor=="PaleGoldenrod"||basecolor=="Moccasin"||basecolor=="PapayaWhip"||basecolor=="LightGoldenrodYellow"||basecolor=="Goldenrod"||basecolor=="LemonChiffon"||basecolor=="LightYellow"||basecolor=="Maroon"||basecolor=="Brown"||basecolor=="SaddleBrown"||basecolor=="Sienna")
  {
    cout<<"Your compatable colors are: CornFlowerBlue, BlueViolet, Magenta, DarkOrange, "<<basecolor<<", Black. Would you like to make another color palette? Type y for yes or n for no."<<endl;
    myfile<<".color1 { color: CornFlowerBlue;} .color2 { color: BlueViolet;} .color3 {color: Magenta;} .color4 { color: DarkOrange;} .basecolor { color: " <<basecolor<<";} .color5 {color: Black;}";
  }

  else if (basecolor=="Black"||basecolor=="MistyRose"||basecolor=="Navy"||basecolor=="DarkBlue"||basecolor=="AntiqueWhite"||basecolor=="Linen"||basecolor=="Beige"||basecolor=="WhiteSmoke"||basecolor=="LavenderBlush"||basecolor=="OldLace"||basecolor=="AliceBlue"||basecolor=="SeaShell"||basecolor=="GhostWhite"||basecolor=="HoneyDew"||basecolor=="FloralWhite"||basecolor=="Azure"||basecolor=="MintCream"||basecolor=="Snow"||basecolor=="Ivory"||basecolor=="White"||basecolor=="DarkSlateGray"||basecolor=="DarkSlateGrey"||basecolor=="DarkGray"||basecolor=="DarkGrey"||basecolor=="Silver"||basecolor=="LightGray"||basecolor=="LightGrey"||basecolor=="Gainsboro")
  {
    cout<<"Your compatable colors are: CornflowerBlue, BlueViolet, Magenta, DarkOrange, Gold, "<<basecolor<< ".  Would you like to make another color palette? Type y for yes or n for no."<<endl ;
    myfile<<".color1 { color: CornFlowerBlue;} .color2 { color: BlueViolet;} .color3 {color: Magenta;} .color4 { color: DarkOrange;} .color5 { color: Gold;} .basecolor {color: "<<basecolor<<";}";
  }

 else if (basecolor=="SkyBlue"||basecolor=="LightSkyBlue"||basecolor=="DeepSkyBlue"||basecolor=="LightSteelBlue"||basecolor=="LightBlue"||basecolor=="PowderBlue"||basecolor=="LightSeaGreen"||basecolor=="CadetBlue"||basecolor=="DarkTurquoise"||basecolor=="MediumTurquoise"||basecolor=="Turquoise"||basecolor=="Aqua"||basecolor=="Cyan"||basecolor=="PaleTurquoise"||basecolor=="LightCyan")
 {
   cout<<"Your compatable colors are: Black, White, "<<basecolor<< ", Green, Yellow, DarkViolet. Would you like to make another color palette? Type y for yes or n for no."<<endl;
   myfile<<".color1 { color: Black;} .color2 { color: White;} .basecolor { color: "<<basecolor<<";} .color3 { color: Green;} .color4 { color: Yellow;} .color5 { color: DarkViolet;}";
 }
 
 else if (basecolor=="Green"||basecolor=="Teal"||basecolor=="DarkCyan"||basecolor=="DarkGreen"||basecolor=="DarkOliveGreen"||basecolor=="ForestGreen"||basecolor=="SeaGreen"||basecolor=="Olive"||basecolor=="OliveDrab"||basecolor=="MediumSeaGreen"||basecolor=="LimeGreen"||basecolor=="Lime"||basecolor=="SpringGreen"||basecolor=="MediumSpringGreen"
 ||basecolor=="DarkSeaGreen"||basecolor=="YellowGreen"||basecolor=="LawnGreen"||basecolor=="Chartreuse"||basecolor=="LightGreen"||basecolor=="GreenYellow"||basecolor=="PaleGreen"||basecolor=="Aquamarine")
 {
   cout<<"Your compatable colors are: Black, White, SkyBlue, "<<basecolor<<", Yellow, DarkViolet. Would you like to make another color palette? Type y for yes or n for no."<< endl;
   myfile<<".color1 { color: Black;} .color2 { color: White;} .color3 { color: SkyBlue;} .basecolor { color: "<<basecolor<<";} .color4 { color: Yellow;} .color5 { color: DarkViolet;}";
 }

 else if (basecolor=="Purple"||basecolor=="Violet"||basecolor=="Pink"||basecolor=="Orchid"||basecolor=="MediumOrchid"||basecolor=="LightPink"||basecolor=="Lavender"||basecolor=="DarkSlateBlue"||basecolor=="DarkOrchid"||basecolor=="DarkMagenta")
 {
   cout<<"Your compatable colors are: Black, White, SkyBlue, Green, Yellow, "<<basecolor<< ".  Would you like to make another color palette? Type y for yes or n for no."<<endl;
   myfile<<".color1 { color: Black;} .color2 { color: White;} .color3 { color: SkyBlue;} .color4 { color: Green;} .color5 { color: Yellor;} .basecolor { color: "<<basecolor<<";}";
 }

 else if (basecolor=="BurlyWood"||basecolor=="DimGray"||basecolor=="DimGrey"||basecolor=="Grey"||basecolor=="Gray"||basecolor=="Indigo"||basecolor=="LightSlateGrey"||basecolor=="LightSlateGray"||basecolor=="MediumBlue"||basecolor=="MidnightBlue"||basecolor=="SandyBrown"||basecolor=="SlateGrey"||basecolor=="SlateGray")
 {
   cout<<"Your compatable colors are: "<<basecolor<<", White, SkyBlue, Green, Yellow, DarkViolet. Would you like to make another color palette? Type y for yes or n for no."<<endl;
   myfile<<".basecolor { color: "<<basecolor<<";} .color1 { coloe: White;} .color2 { color: SkyBlue;} .color3 { color: Green;} .color4 { color: Yellow;} .color5 { color: DarkViolet;}";
 }

 else if (basecolor=="Blue"||basecolor=="SlateBlue"||basecolor=="Teal")
 {
   cout<<"Your compatable colors are: Black, White, SkyBlue, "<<basecolor<<", Yellow, Goldenrod. Would you like to make another color palette? Type y for yes or n for no."<<endl;
   myfile<<".color1 { color: Black;} .color2 { color: White;} .color3 { color: SkyBlue;} .basecolor { color: "<<basecolor<<";} .color4 { color: Yellow;} .color5 { color: Goldenrod;}";
 }
  else 
   {
     cout<<"Not a valid color input, would you like to try again? Type y for yes or n for no."<<endl;
   }
     cin>>yesno; 
    
     myfile.close();
} 


else if(whattodo=="distinguishcolors") 
{
  cout<<"enter your first color that is of the 143 colors supported by CSS: "<<endl;

  cin>>colors;
  myvector.push_back(colors);

  cout<<"enter your second color that is of the 143 colors supported by CSS: "<<endl;

  cin>>colors;
  myvector.push_back(colors);

  isunique(myvector,result2);
  if(result2==false)
  {
    cout<<"those are the same color, quitting program, try again"<<endl;
    return 0;
  }
  
  if ((myvector[0]=="CornFlowerBlue" || myvector[0]== "DodgerBlue"||myvector[0]=="RoyalBlue"||myvector[0]=="SteelBlue") && (myvector[1]=="CornFlowerBlue" || myvector[1]== "DodgerBlue"||myvector[1]=="RoyalBlue"||myvector[1]=="SteelBlue"))
  {
   cout<<"these colors are too close to be compatable for a person with color blindness. Type y if you would like to run the program again or n to quit "<<endl;
   cin>>yesno;
  }

  else if((myvector[0]=="Blueviolet"||myvector[0]=="DarkViolet"||myvector[0]=="MeduimPurple"|| myvector[0]=="MediumSlateBlue"||myvector[0]=="RebeccaPurple") && (myvector[1]=="Blueviolet"||myvector[1]=="DarkViolet"||myvector[1]=="MeduimPurple"|| myvector[1]=="MediumSlateBlue"||myvector[1]=="RebeccaPurple")) 
  {
    cout<<"these colors are too close to be compatable for a person with color blindness. Type y if you would like to run the program again or n to quit "<<endl;
    cin>>yesno;
  }

   else if ((myvector[0]=="Magenta"||myvector[0]=="HotPink"||myvector[0]=="Fuchsia"||myvector[0]=="DeepPink"||myvector[0]=="MediumVioletRed"||myvector[0]=="PaleVioletRed"||myvector[0]=="DarkRed"||myvector[0]=="FireBrick"||myvector[0]=="Crimson"||myvector[0]=="IndianRed"||myvector[0]=="LightCoral"||myvector[0]=="Thistle"||myvector[0]=="Plum"||myvector[0]=="MediumAquaMarine") && (myvector[1]=="Magenta"||myvector[1]=="HotPink"||myvector[1]=="Fuchsia"||myvector[1]=="DeepPink"||myvector[1]=="MediumVioletRed"||myvector[1]=="PaleVioletRed"||myvector[1]=="DarkRed"||myvector[1]=="FireBrick"||myvector[1]=="Crimson"||myvector[1]=="IndianRed"||myvector[1]=="LightCoral"||myvector[1]=="Thistle"||myvector[1]=="Plum"||myvector[1]=="MediumAquaMarine")) 
    {
     cout<<"these colors are too close to be compatable for a person with color blindness. Type y if you would like to run the program again or n to quit "<<endl;
     cin>>yesno;
    }

   else if ((myvector[0]=="DarkOrange"||myvector[0]=="OrangeRed"||myvector[0]=="Coral"||myvector[0]=="Tomato"||myvector[0]=="Red"||myvector[0]=="Salmon"||myvector[0]=="DarkSalmon"||myvector[0]=="LightSalmon"||myvector[0]=="Chocolate"||myvector[0]=="DarkGoldenrod"||myvector[0]=="Peru"||myvector[0]=="RosyBrown"||myvector[0]=="Tan"||myvector[0]=="Wheat"||myvector[0]=="NavajoWhite"||myvector[0]=="Bisque"||myvector[0]=="BlanchedAlmond"||myvector[0]=="Cornsilk") && (myvector[1]=="DarkOrange"||myvector[1]=="OrangeRed"||myvector[1]=="Coral"||myvector[1]=="Tomato"||myvector[1]=="Red"||myvector[1]=="Salmon"||myvector[1]=="DarkSalmon"||myvector[1]=="LightSalmon"||myvector[1]=="Chocolate"||myvector[1]=="DarkGoldenrod"||myvector[1]=="Peru"||myvector[1]=="RosyBrown"||myvector[1]=="Tan"||myvector[1]=="Wheat"||myvector[1]=="NavajoWhite"||myvector[1]=="Bisque"||myvector[1]=="BlanchedAlmond"||myvector[1]=="Cornsilk"))
  {
   cout<<"these colors are too close to be compatable for a person with color blindness. Type y if you would like to run the program again or n to quit "<<endl;
   cin>>yesno;
  }

   else if ((myvector[0]=="Gold"||myvector[0]=="Orange"||myvector[0]=="DarkKhaki"||myvector[0]=="Khaki"||myvector[0]=="PeachPuff"||myvector[0]=="Yellow"||myvector[0]=="PaleGoldenrod"||myvector[0]=="Moccasin"||myvector[0]=="PapayaWhip"||myvector[0]=="LightGoldenrodYellow"||myvector[0]=="Goldenrod"||myvector[0]=="LemonChiffon"||myvector[0]=="LightYellow"||myvector[0]=="Maroon"||myvector[0]=="Brown"||myvector[0]=="SaddleBrown"||myvector[0]=="Sienna") && (myvector[1]=="Gold"||myvector[1]=="Orange"||myvector[1]=="DarkKhaki"||myvector[1]=="Khaki"||myvector[1]=="PeachPuff"||myvector[1]=="Yellow"||myvector[1]=="PaleGoldenrod"||myvector[1]=="Moccasin"||myvector[1]=="PapayaWhip"||myvector[1]=="LightGoldenrodYellow"||myvector[1]=="Goldenrod"||myvector[1]=="LemonChiffon"||myvector[1]=="LightYellow"||myvector[1]=="Maroon"||myvector[1]=="Brown"||myvector[1]=="SaddleBrown"||myvector[1]=="Sienna")) 
    {
     cout<<"these colors are too close to be compatable for a person with color blindness. Type y if you would like to run the program again or n to quit "<<endl;
     cin>>yesno;
    }

   else if ((myvector[0]=="Black"||myvector[0]=="MistyRose"||myvector[0]=="Navy"||myvector[0]=="DarkBlue"||myvector[0]=="AntiqueWhite"||myvector[0]=="Linen"||myvector[0]=="Beige"||myvector[0]=="WhiteSmoke"||myvector[0]=="LavenderBlush"||myvector[0]=="OldLace"||myvector[0]=="AliceBlue"||myvector[0]=="SeaShell"||myvector[0]=="GhostWhite"||myvector[0]=="HoneyDew"||myvector[0]=="FloralWhite"||myvector[0]=="Azure"||myvector[0]=="MintCream"||myvector[0]=="Snow"||myvector[0]=="Ivory"||myvector[0]=="White"||myvector[0]=="DarkSlateGray"||myvector[0]=="DarkSlateGrey"||myvector[0]=="DarkGray"||myvector[0]=="DarkGrey"||myvector[0]=="Silver"||myvector[0]=="LightGray"||myvector[0]=="LightGrey"||myvector[0]=="Gainsboro") && (myvector[1]=="Black"||myvector[1]=="MistyRose"||myvector[1]=="Navy"||myvector[1]=="DarkBlue"||myvector[1]=="AntiqueWhite"||myvector[1]=="Linen"||myvector[1]=="Beige"||myvector[1]=="WhiteSmoke"||myvector[1]=="LavenderBlush"||myvector[1]=="OldLace"||myvector[1]=="AliceBlue"||myvector[1]=="SeaShell"||myvector[1]=="GhostWhite"||myvector[1]=="HoneyDew"||myvector[1]=="FloralWhite"||myvector[1]=="Azure"||myvector[1]=="MintCream"||myvector[1]=="Snow"||myvector[1]=="Ivory"||myvector[1]=="White"||myvector[1]=="DarkSlateGray"||myvector[1]=="DarkSlateGrey"||myvector[1]=="DarkGray"||myvector[1]=="DarkGrey"||myvector[1]=="Silver"||myvector[1]=="LightGray"||myvector[1]=="LightGrey"||myvector[1]=="Gainsboro")) 
   {
     cout<<"these colors are too close to be compatable for a person with color blindness. Type y if you would like to run the program again or n to quit "<<endl;
     cin>>yesno;
    }

   else if ((myvector[0]=="SkyBlue"||myvector[0]=="LightSkyBlue"||myvector[0]=="DeepSkyBlue"||myvector[0]=="LightSteelBlue"||myvector[0]=="LightBlue"||myvector[0]=="PowderBlue"||myvector[0]=="LightSeaGreen"||myvector[0]=="CadetBlue"||myvector[0]=="DarkTurquoise"||myvector[0]=="MediumTurquoise"||myvector[0]=="Turquoise"||myvector[0]=="Aqua"||myvector[0]=="Cyan"||myvector[0]=="PaleTurquoise"||myvector[0]=="LightCyan") && (myvector[1]=="SkyBlue"||myvector[1]=="LightSkyBlue"||myvector[1]=="DeepSkyBlue"||myvector[1]=="LightSteelBlue"||myvector[1]=="LightBlue"||myvector[1]=="PowderBlue"||myvector[1]=="LightSeaGreen"||myvector[1]=="CadetBlue"||myvector[1]=="DarkTurquoise"||myvector[1]=="MediumTurquoise"||myvector[1]=="Turquoise"||myvector[1]=="Aqua"||myvector[1]=="Cyan"||myvector[1]=="PaleTurquoise"||myvector[1]=="LightCyan")) 
    {
     cout<<"these colors are too close to be compatable for a person with color blindness. Type y if you would like to run the program again or n to quit "<<endl;
     cin>>yesno;
    }

   else if ((myvector[0]=="Green"||myvector[0]=="Teal"||myvector[0]=="DarkCyan"||myvector[0]=="DarkGreen"||myvector[0]=="DarkOliveGreen"||myvector[0]=="ForestGreen"||myvector[0]=="SeaGreen"||myvector[0]=="Olive"||myvector[0]=="OliveDrab"||myvector[0]=="MediumSeaGreen"||myvector[0]=="LimeGreen"||myvector[0]=="Lime"||myvector[0]=="SpringGreen"||myvector[0]=="MediumSpringGreen"||myvector[0]=="DarkSeaGreen"||myvector[0]=="YellowGreen"||myvector[0]=="LawnGreen"||myvector[0]=="Chartreuse"||myvector[0]=="LightGreen"||myvector[0]=="GreenYellow"||myvector[0]=="PaleGreen"||myvector[0]=="Aquamarine") && (myvector[1]=="Green"||myvector[1]=="Teal"||myvector[1]=="DarkCyan"||myvector[1]=="DarkGreen"||myvector[1]=="DarkOliveGreen"||myvector[1]=="ForestGreen"||myvector[1]=="SeaGreen"||myvector[1]=="Olive"||myvector[1]=="OliveDrab"||myvector[1]=="MediumSeaGreen"||myvector[1]=="LimeGreen"||myvector[1]=="Lime"||myvector[1]=="SpringGreen"||myvector[1]=="MediumSpringGreen"||myvector[1]=="DarkSeaGreen"||myvector[1]=="YellowGreen"||myvector[1]=="LawnGreen"||myvector[1]=="Chartreuse"||myvector[1]=="LightGreen"||myvector[1]=="GreenYellow"||myvector[1]=="PaleGreen"||myvector[1]=="Aquamarine"))
   {
     cout<<"these colors are too close to be compatable for a person with color blindness. Type y if you would like to run the program again or n to quit "<<endl;
     cin>>yesno;
    }

   else if ((myvector[0]=="Purple"||myvector[0]=="Violet"||myvector[0]=="Pink"||myvector[0]=="Orchid"||myvector[0]=="MediumOrchid"||myvector[0]=="LightPink"||myvector[0]=="Lavender"||myvector[0]=="DarkSlateBlue"||myvector[0]=="DarkOrchid"||myvector[0]=="DarkMagenta") && (myvector[1]=="Purple"||myvector[1]=="Violet"||myvector[1]=="Pink"||myvector[1]=="Orchid"||myvector[1]=="MediumOrchid"||myvector[1]=="LightPink"||myvector[1]=="Lavender"||myvector[1]=="DarkSlateBlue"||myvector[1]=="DarkOrchid"||myvector[1]=="DarkMagenta")) 
   {
      cout<<"these colors are too close to be compatable for a person with color blindness. Type y if you would like to run the program again or n to quit "<<endl;
     cin>>yesno;
    }
 
   else if ((myvector[0]=="BurlyWood"||myvector[0]=="DimGray"||myvector[0]=="DimGrey"||myvector[0]=="Grey"||myvector[0]=="Gray"||myvector[0]=="Indigo"||myvector[0]=="LightSlateGrey"||myvector[0]=="LightSlateGray"||myvector[0]=="MediumBlue"||myvector[0]=="MidnightBlue"||myvector[0]=="SandyBrown"||myvector[0]=="SlateGrey"||myvector[0]=="SlateGray") && (myvector[1]=="BurlyWood"||myvector[1]=="DimGray"||myvector[1]=="DimGrey"||myvector[1]=="Grey"||myvector[1]=="Gray"||myvector[1]=="Indigo"||myvector[1]=="LightSlateGrey"||myvector[1]=="LightSlateGray"||myvector[1]=="MediumBlue"||myvector[1]=="MidnightBlue"||myvector[1]=="SandyBrown"||myvector[1]=="SlateGrey"||myvector[1]=="SlateGray")) 
   {
     cout<<"these colors are too close to be compatable for a person with color blindness. Type y if you would like to run the program again or n to quit "<<endl;
     cin>>yesno;
    }
 
   else if ((myvector[0]=="Blue"||myvector[0]=="SlateBlue"||myvector[0]=="Teal") && (myvector[1]=="Blue"||myvector[1]=="SlateBlue"||myvector[1]=="Teal")) 
   {
     cout<<"these colors are too close to be compatable for a person with color blindness. Type y if you would like to run the program again or n to quit "<<endl;
     cin>>yesno;
    }

   else 
   {
     cout<<"These colors are compatable! Would you like to run the program again?"<<endl;
       cin>>yesno;
   }
     }

  
}
  return 0;
}



bool isacolor(string basecolor)
{
  fstream reader;
  string line;
  
  reader.open("htmlcolornames.txt", ios::in );
 if (reader.is_open()){
   while (! reader.eof())
  {
  getline(reader, line);
  if (basecolor==line) {
    reader.close();
    return true;
  }
  }
  reader.close();
  return false;
 }
}

void isunique(vector<string> myvector ,bool &result2) {
  if(myvector[0]==myvector[1]){
    result2=false;
  }
  else {
    result2=true;}

}








