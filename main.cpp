//Author: Zoe Kunhart
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  string basecolor;
  string filename;
  fstream reader;
  char yesno='y';

  

 while(yesno=='y'){
  cout<< "Please enter a color name that is of the 140 color names supported by CSS. Enter it in the form seen that is compatable with CSS (no spaces and a capitol only as the first letter of every word, eg: SlateBlue) Copy and paste this link into your browser for the list of 140 colors to choose from. https://www.w3schools.com/colors/colors_names.asp"<<endl;
  cin>>basecolor;

  cout<< "Please enter a one word name for your file that your theme will be saved to."<<endl;
  cin>> filename;
  fstream myfile(filename);

  


  if (basecolor== "CornFlowerBlue" || basecolor== "DodgerBlue"||basecolor=="RoyalBlue"||basecolor=="SteelBlue")
 {
   cout<<"Your compatable colors are: "<<basecolor<<", BlueViolet, Magenta, DarkOrange, Gold, Black. Would you like to make another color palette? Type y for yes or n for no. "<<endl;
   myfile<<".basecolor { color: " <<basecolor<<".color1 { color: BlueViolet;},.color2 { color: Magenta;} .color3 {color: DarkOrange;} .color4 {color: Gold} .color5 {color: Black;}";}
   

  else if(basecolor=="Blueviolet"||basecolor=="DarkViolet"||basecolor=="MeduimPurple"|| basecolor=="MediumSlateBlue"||basecolor=="RebeccaPurple")
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
   {cout<<"Not a valid color input, would you like to try again? Type y for yes or n for no."<<endl;}
   cin>>yesno; } 

  
   

   
  
    

   

 





  

  

  return 0;
}
