void main()
{
// --------- Player1's
    void vSelf = getplayerproperty(0, "entity");
    void vSelf2 = getplayerproperty(1, "entity");  
    int  iScore = getplayerproperty(vSelf, "score", 0 + getglobalvar("score"));
    int  iScore2 = getplayerproperty(vSelf2, "score", 0 + getglobalvar("score"));
    int  iMp = getentityproperty(vSelf, "mp");
    int  iMp2 = getentityproperty(vSelf2, "mp");
    int  r = getentityproperty(vSelf, "rush_count");
    int  r2 = getentityproperty(vSelf2, "rush_count");
   if(r >= 4)
   {
      changeentityproperty(vSelf, "mp", iMp + 1);
      changeplayerproperty(0, "score", iScore + 25*r);
   }
   if(r >= 10)
   {
      changeentityproperty(vSelf, "mp", iMp + 1);
      changeplayerproperty(0, "score", iScore + 50*r);
   }
   if(r2 >= 4)
   {
      changeentityproperty(vSelf2, "mp", iMp2 + 1);
      changeplayerproperty(1, "score", iScore2 + 25*r2);
   }
   if(r2 >= 10)
   {
      changeentityproperty(vSelf2, "mp", iMp2 + 1);
      changeplayerproperty(1, "score", iScore2 + 50*r2);
   }
}



