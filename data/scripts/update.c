void main()
{
// --------- Player1's
    void vSelf = getplayerproperty(0, "entity"); //Get calling entity.
    void vName = getentityproperty(vSelf,"name"); //Get name of calling entity.
    int  iPlIndex = 0; //Player 1's index.
    int  iScore = getlocalvar("score");
    int r = getentityproperty(vSelf, "rush_count");
    void vAniID = getentityproperty(vSelf,"animationID"); //Get current animation ID.
    void vAniPos = getentityproperty(vSelf, "animpos"); //Get current animation frame.

    void iUp = playerkeys(iPlIndex, 0, "moveup"); // Key holding status of "Up".
    void iDown = playerkeys(iPlIndex, 0, "movedown"); // Key holding status of "Down".
    void iJump = playerkeys(iPlIndex, 0, "jump"); //Key holding status of "Jump".
    void iSpecial = playerkeys(iPlIndex, 0, "Special"); //Key holding status of "Special".
    void iAttack = playerkeys(iPlIndex, 0, "attack"); //Key holding status of "Attack".

    void iUpR = playerkeys(iPlIndex, 2, "moveup"); //Release status of "Up".
    void iDownR = playerkeys(iPlIndex, 2, "movedown"); //Release status of "Down".
    void iJumpR = playerkeys(iPlIndex, 2, "jump"); //Release status of "jump".
    void iSpecialR = playerkeys(iPlIndex, 2, "Special"); //Release status of "Special".
    void iAttackR = playerkeys(iPlIndex, 2, "attack"); //Release status of "Attack".

//----------- Player2's
    void vSelf2 = getplayerproperty(1, "entity"); //Get calling entity.
    void vName2 = getentityproperty(vSelf2,"name"); //Get name of calling entity.
    int  iP2Index = 1; //Player 2's index.
    int iScore2 = getplayerproperty(vSelf2, "Score");
    int r2 = getentityproperty(vSelf2, "rush_count");
    void vAniID2 = getentityproperty(vSelf2,"animationID"); //Get current animation ID.
    void vAniPos2 = getentityproperty(vSelf2, "animpos"); //Get current animation frame.

    void iUp2 = playerkeys(iP2Index, 0, "moveup"); // Key holding status of "Up".
    void iDown2 = playerkeys(iP2Index, 0, "movedown"); // Key holding status of "Down".
    void iJump2 = playerkeys(iP2Index, 0, "jump"); //Key holding status of "Jump".
    void iSpecial2 = playerkeys(iP2Index, 0, "Special"); //Key holding status of "Special".
    void iAttack2 = playerkeys(iP2Index, 0, "attack"); //Key holding status of "Attack".

    void iUpR2 = playerkeys(iP2Index, 2, "moveup"); //Release status of "Up".
    void iDownR2 = playerkeys(iP2Index, 2, "movedown"); //Release status of "Down".
    void iJumpR2 = playerkeys(iP2Index, 2, "jump"); //Release status of "jump".
    void iSpecialR2 = playerkeys(iP2Index, 2, "Special"); //Release status of "Special".
    void iAttackR2 = playerkeys(iP2Index, 2, "attack"); //Release status of "Attack".

//----------- Player3's
    void vSelf3 = getplayerproperty(2, "entity"); //Get calling entity.
    void vName3 = getentityproperty(vSelf3,"name"); //Get name of calling entity.
    int  iP3Index = 2; //Player 3's index.
    int iScore3 = getplayerproperty(vSelf3, "Score");
    int r3 = getentityproperty(vSelf3, "rush_count");
    void vAniID3 = getentityproperty(vSelf3,"animationID"); //Get current animation ID.
    void vAniPos3 = getentityproperty(vSelf3, "animpos"); //Get current animation frame.

    void iUp3 = playerkeys(iP3Index, 0, "moveup"); // Key holding status of "Up".
    void iDown3 = playerkeys(iP3Index, 0, "movedown"); // Key holding status of "Down".
    void iJump3 = playerkeys(iP3Index, 0, "jump"); //Key holding status of "Jump".
    void iSpecial3 = playerkeys(iP3Index, 0, "Special"); //Key holding status of "Special".
    void iAttack3 = playerkeys(iP3Index, 0, "attack"); //Key holding status of "Attack".

    void iUpR3 = playerkeys(iP3Index, 2, "moveup"); //Release status of "Up".
    void iDownR3 = playerkeys(iP3Index, 2, "movedown"); //Release status of "Down".
    void iJumpR3 = playerkeys(iP3Index, 2, "jump"); //Release status of "jump".
    void iSpecialR3 = playerkeys(iP3Index, 2, "Special"); //Release status of "Special".
    void iAttackR3 = playerkeys(iP3Index, 2, "attack"); //Release status of "Attack".

//----------- Player4's
    void vSelf4 = getplayerproperty(3, "entity"); //Get calling entity.
    void vName4 = getentityproperty(vSelf4,"name"); //Get name of calling entity.
    int  iP4Index = 3; //Player 3's index.
    int iScore4 = getplayerproperty(vSelf4, "Score");
    int r4 = getentityproperty(vSelf4, "rush_count");
    void vAniID4 = getentityproperty(vSelf4,"animationID"); //Get current animation ID.
    void vAniPos4 = getentityproperty(vSelf4, "animpos"); //Get current animation frame.

    void iUp4 = playerkeys(iP4Index, 0, "moveup"); // Key holding status of "Up".
    void iDown4 = playerkeys(iP4Index, 0, "movedown"); // Key holding status of "Down".
    void iJump4 = playerkeys(iP4Index, 0, "jump"); //Key holding status of "Jump".
    void iSpecial4 = playerkeys(iP4Index, 0, "Special"); //Key holding status of "Special".
    void iAttack4 = playerkeys(iP4Index, 0, "attack"); //Key holding status of "Attack".

    void iUpR4 = playerkeys(iP4Index, 2, "moveup"); //Release status of "Up".
    void iDownR4 = playerkeys(iP4Index, 2, "movedown"); //Release status of "Down".
    void iJumpR4 = playerkeys(iP4Index, 2, "jump"); //Release status of "jump".
    void iSpecialR4 = playerkeys(iP4Index, 2, "Special"); //Release status of "Special".
    void iAttackR4 = playerkeys(iP4Index, 2, "attack"); //Release status of "Attack".

// --------------- For Player1

   if (vAniID == 6)
       { 
       if (vAniPos == 0)
              { 
              if (iUp)
              { 
                 changeentityproperty(vSelf, "animation", openborconstant("ANI_FOLLOW6")); 
              }
              else if (iDown)
              { 
                 changeentityproperty(vSelf, "animation", openborconstant("ANI_FOLLOW5")); 
              }
              else if (iAttack)
              {            
                 changeentityproperty(vSelf, "animation", openborconstant("ANI_FOLLOW7"));                }    
       }
           
   }
// ---------------- For Player2
   if (vAniID2 == 6)
       { 
       if (vAniPos2 == 0)
              { 
              if (iUp2)
              { 
                 changeentityproperty(vSelf2, "animation", openborconstant("ANI_FOLLOW6")); 
              }
              else if (iDown2)
              { 
                 changeentityproperty(vSelf2, "animation", openborconstant("ANI_FOLLOW5")); 
              }
              else if (iAttack2)
              { 
                 changeentityproperty(vSelf2, "animation", openborconstant("ANI_FOLLOW7"));                }                
       }
           
   }     
// ---------------- For Player3
   if (vAniID3 == 6)
       { 
       if (vAniPos3 == 0)
              { 
              if (iUp3)
              { 
                 changeentityproperty(vSelf3, "animation", openborconstant("ANI_FOLLOW6")); 
              }
              else if (iDown3)
              { 
                 changeentityproperty(vSelf3, "animation", openborconstant("ANI_FOLLOW5")); 
              }
              else if (iAttack3)
              { 
                 changeentityproperty(vSelf3, "animation", openborconstant("ANI_FOLLOW7"));                }                
       }
           
    }
// ---------------- For Player4
   if (vAniID4 == 6)
       { 
       if (vAniPos4 == 0)
              { 
              if (iUp4)
              { 
                 changeentityproperty(vSelf4, "animation", openborconstant("ANI_FOLLOW6")); 
              }
              else if (iDown4)
              { 
                 changeentityproperty(vSelf4, "animation", openborconstant("ANI_FOLLOW5")); 
              }
              else if (iAttack4)
              { 
                 changeentityproperty(vSelf4, "animation", openborconstant("ANI_FOLLOW7"));                }                
       }
           
    }        
   if(r == 4)
   {
      drawstring(21, 60, 3, "good");
      drawstring(21, 80, 0, "Bonus_"+20*r);          
   }
   if(r == 5)
   {
      drawstring(21, 60, 3, "good");
      drawstring(21, 80, 0, "Bonus_"+20*r);   
   }
   if(r == 6)
   {
      drawstring(21, 60, 3, "super");
      drawstring(21, 80, 0, "Bonus_"+20*r);  
   }
   if(r == 7)
   {
      drawstring(21, 60, 3, "super");
      drawstring(21, 80, 0, "Bonus_"+20*r);  
   }
   if(r == 8)
   {
      drawstring(21, 60, 3, "super");
      drawstring(21, 80, 0, "Bonus_"+20*r);
   }  
   if(r == 9)
   {
      drawstring(21, 60, 3, "great");
      drawstring(21, 80, 0, "Bonus_"+20*r);  
   }
   if(r == 10)
   {
      drawstring(21, 60, 3, "great");
      drawstring(21, 80, 0, "Bonus_"+20*r);  
   }
   if(r == 15)
   {
      drawstring(21, 60, 3, "master!");
      drawstring(21, 80, 0, "Bonus_"+25*r);  
   }
   if(r == 16)
   {
      drawstring(21, 60, 3, "master!");
      drawstring(21, 80, 0, "Bonus_"+5*r);  
   }
   if(r == 17)
   {
      drawstring(21, 60, 3, "master!");
      drawstring(21, 80, 0, "Bonus_"+5*r);  
   }
   if(r == 25)
   {
      drawstring(21, 60, 3, "oh_yeah!");
      drawstring(21, 80, 0, "Bonus_"+5*r);
   }
   if(r == 26)
   {
      drawstring(21, 60, 3, "oh_yeah!");
      drawstring(21, 80, 0, "Bonus_"+5*r);
   }
   if(r == 27)
   {
      drawstring(21, 60, 3, "oh_yeah!");
      drawstring(21, 80, 0, "Bonus_"+5*r);
   }
   if(r >= 30)
   {
      drawstring(21, 60, 3, "incredible!!!!");
      drawstring(21, 80, 0, "Bonus_"+5*r);
   }
   if(r2 == 4)
   {
      drawstring(255, 60, 3, "good");
      drawstring(255, 80, 0, "Bonus_"+20*r2);          
   }
   if(r2 == 5)
   {
      drawstring(255, 60, 3, "good");
      drawstring(255, 80, 0, "Bonus_"+20*r2);   
   }
   if(r2 == 6)
   {
      drawstring(245, 60, 3, "super");
      drawstring(255, 80, 0, "Bonus_"+20*r2);  
   }
   if(r2 == 7)
   {
      drawstring(245, 60, 3, "super");
      drawstring(255, 80, 0, "Bonus_"+20*r2);  
   }
   if(r2 == 8)
   {
      drawstring(245, 60, 3, "super");
      drawstring(255, 80, 0, "Bonus_"+20*r2);
   }  
   if(r2 == 9)
   {
      drawstring(245, 60, 3, "great");
      drawstring(255, 80, 0, "Bonus_"+20*r2);  
   }
   if(r2 >= 10)
   {
      drawstring(245, 60, 3, "great");
      drawstring(250, 80, 0, "Bonus_"+20*r2);  
   }
   if(r2 >= 15)
   {
      drawstring(245, 60, 3, "master!");
      drawstring(250, 80, 0, "Bonus_"+25*r2);  
   }
   if(r2 == 16)
   {
      drawstring(21, 60, 3, "master!");
      drawstring(21, 80, 0, "Bonus_"+5*r2);  
   }
   if(r2 == 17)
   {
      drawstring(21, 60, 3, "master!");
      drawstring(21, 80, 0, "Bonus_"+5*r2);  
   }
   if(r2 == 25)
   {
      drawstring(21, 60, 3, "oh_yeah!");
      drawstring(21, 80, 0, "Bonus_"+5*r2);
   }
   if(r2 == 26)
   {
      drawstring(21, 60, 3, "oh_yeah!");
      drawstring(21, 80, 0, "Bonus_"+5*r2);
   }
   if(r2 == 27)
   {
      drawstring(21, 60, 3, "oh_yeah!");
      drawstring(21, 80, 0, "Bonus_"+5*r2);
   }
   if(r2 >= 30)
   {
      drawstring(21, 60, 3, "incredible!!!!");
      drawstring(21, 80, 0, "Bonus_"+5*r2);
   }
   if(r3 == 4)
   {
      drawstring(21, 140, 3, "good");
      drawstring(21, 160, 0, "Bonus_"+20*r3);          
   }
   if(r3 == 5)
   {
      drawstring(21, 140, 3, "good");
      drawstring(21, 160, 0, "Bonus_"+20*r3);   
   }
   if(r3 == 6)
   {
      drawstring(21, 140, 3, "super");
      drawstring(21, 160, 0, "Bonus_"+20*r3);  
   }
   if(r3 == 7)
   {
      drawstring(21, 140, 3, "super");
      drawstring(21, 160, 0, "Bonus_"+20*r3);  
   }
   if(r3 == 8)
   {
      drawstring(21, 140, 3, "super");
      drawstring(21, 160, 0, "Bonus_"+20*r3);
   }  
   if(r3 == 9)
   {
      drawstring(21, 140, 3, "great");
      drawstring(21, 160, 0, "Bonus_"+20*r3);  
   }
   if(r3 == 10)
   {
      drawstring(21, 140, 3, "great");
      drawstring(21, 160, 0, "Bonus_"+20*r3);  
   }
   if(r3 >= 15)
   {
      drawstring(21, 140, 3, "master!");
      drawstring(21, 160, 0, "Bonus_"+25*r3);  
   }
   if(r3 == 16)
   {
      drawstring(21, 60, 3, "master!");
      drawstring(21, 80, 0, "Bonus_"+5*r3);  
   }
   if(r3 == 17)
   {
      drawstring(21, 60, 3, "master!");
      drawstring(21, 80, 0, "Bonus_"+5*r3);  
   }
   if(r3 == 25)
   {
      drawstring(21, 60, 3, "oh_yeah!");
      drawstring(21, 80, 0, "Bonus_"+5*r3);
   }
   if(r3 == 26)
   {
      drawstring(21, 60, 3, "oh_yeah!");
      drawstring(21, 80, 0, "Bonus_"+5*r3);
   }
   if(r3 == 27)
   {
      drawstring(21, 60, 3, "oh_yeah!");
      drawstring(21, 80, 0, "Bonus_"+5*r3);
   }
   if(r3 >= 30)
   {
      drawstring(21, 60, 3, "incredible!!!!");
      drawstring(21, 80, 0, "Bonus_"+5*r3);
   }
   if(r4 == 4)
   {
      drawstring(255, 140, 3, "good");
      drawstring(255, 160, 0, "Bonus_"+20*r4);          
   }
   if(r4 == 5)
   {
      drawstring(255, 140, 3, "good");
      drawstring(255, 160, 0, "Bonus_"+20*r4);   
   }
   if(r4 == 6)
   {
      drawstring(245, 140, 3, "super");
      drawstring(255, 160, 0, "Bonus_"+20*r4);  
   }
   if(r4 == 7)
   {
      drawstring(245, 140, 3, "super");
      drawstring(255, 160, 0, "Bonus_"+20*r4);  
   }
   if(r4 == 8)
   {
      drawstring(245, 140, 3, "super");
      drawstring(255, 160, 0, "Bonus_"+20*r4);
   }  
   if(r4 == 9)
   {
      drawstring(245, 140, 3, "great");
      drawstring(255, 160, 0, "Bonus_"+20*r4);  
   }
   if(r4 >= 10)
   {
      drawstring(245, 140, 3, "great");
      drawstring(250, 160, 0, "Bonus_"+20*r4);  
   }
   if(r4 >= 15)
   {
      drawstring(245, 140, 3, "master!");
      drawstring(250, 160, 0, "Bonus_"+25*r4);  
   }
   if(r4 == 16)
   {
      drawstring(21, 60, 3, "master!");
      drawstring(21, 80, 0, "Bonus_"+5*r4);  
   }
   if(r4 == 17)
   {
      drawstring(21, 60, 3, "master!");
      drawstring(21, 80, 0, "Bonus_"+5*r4);  
   }
   if(r4 == 25)
   {
      drawstring(21, 60, 3, "oh_yeah!");
      drawstring(21, 80, 0, "Bonus_"+5*r4);
   }
   if(r4 == 26)
   {
      drawstring(21, 60, 3, "oh_yeah!");
      drawstring(21, 80, 0, "Bonus_"+5*r4);
   }
   if(r4 == 27)
   {
      drawstring(21, 60, 3, "oh_yeah!");
      drawstring(21, 80, 0, "Bonus_"+5*r4);
   }
   if(r4 >= 30)
   {
      drawstring(21, 60, 3, "incredible!!!!");
      drawstring(21, 80, 0, "Bonus_"+5*r4);
   }
}


