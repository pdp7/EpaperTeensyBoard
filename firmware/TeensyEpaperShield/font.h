#ifndef _font_H_
#define _font_H_
// 
//  Font data for Segoe UI 10pt
// 

// Character bitmaps for Segoe UI 10pt
const byte fontBitmaps[] = 
{
  // @0 ' ' (2 pixels wide)
  0x00, //   
  0x00, //   
  0x00, //   
  0x00, //   
  0x00, //   
  0x00, //   
  0x00, //   
  0x00, //   
  0x00, //   
  0x00, //   
  0x00, //   
  0x00, //   
  0x00, //   

  // @13 '!' (1 pixels wide)
  0x00, //  
  0x80, // #
  0x80, // #
  0x80, // #
  0x80, // #
  0x80, // #
  0x80, // #
  0x00, //  
  0x80, // #
  0x80, // #
  0x00, //  
  0x00, //  
  0x00, //  

  // @26 '"' (3 pixels wide)
  0x00, //    
  0xA0, // # #
  0xA0, // # #
  0xA0, // # #
  0x00, //    
  0x00, //    
  0x00, //    
  0x00, //    
  0x00, //    
  0x00, //    
  0x00, //    
  0x00, //    
  0x00, //    

  // @39 '#' (8 pixels wide)
  0x00, //         
  0x12, //    #  # 
  0x12, //    #  # 
  0xFF, // ########
  0x24, //   #  #  
  0x24, //   #  #  
  0xFF, // ########
  0x48, //  #  #   
  0x48, //  #  #   
  0x00, //         
  0x00, //         
  0x00, //         
  0x00, //         

  // @52 '$' (5 pixels wide)
  0x20, //   #  
  0x78, //  ####
  0xA8, // # # #
  0xA0, // # #  
  0xE0, // ###  
  0x70, //  ### 
  0x38, //   ###
  0x28, //   # #
  0xA8, // # # #
  0xF0, // #### 
  0x20, //   #  
  0x00, //      
  0x00, //      

  // @65 '%' (10 pixels wide)
  0x00, 0x00, //           
  0x60, 0x80, //  ##     # 
  0x91, 0x00, // #  #   #  
  0x92, 0x00, // #  #  #   
  0x94, 0x00, // #  # #    
  0x6D, 0x80, //  ## ## ## 
  0x0A, 0x40, //     # #  #
  0x12, 0x40, //    #  #  #
  0x22, 0x40, //   #   #  #
  0x41, 0x80, //  #     ## 
  0x00, 0x00, //           
  0x00, 0x00, //           
  0x00, 0x00, //           

  // @91 '&' (9 pixels wide)
  0x00, 0x00, //          
  0x30, 0x00, //   ##     
  0x48, 0x00, //  #  #    
  0x49, 0x00, //  #  #  # 
  0x31, 0x00, //   ##   # 
  0x59, 0x00, //  # ##  # 
  0x8E, 0x00, // #   ###  
  0x86, 0x00, // #    ##  
  0x86, 0x00, // #    ##  
  0x79, 0x80, //  ####  ##
  0x00, 0x00, //          
  0x00, 0x00, //          
  0x00, 0x00, //          

  // @117 ''' (1 pixels wide)
  0x00, //  
  0x80, // #
  0x80, // #
  0x80, // #
  0x00, //  
  0x00, //  
  0x00, //  
  0x00, //  
  0x00, //  
  0x00, //  
  0x00, //  
  0x00, //  
  0x00, //  

  // @130 '(' (3 pixels wide)
  0x00, //    
  0x20, //   #
  0x40, //  # 
  0x40, //  # 
  0x80, // #  
  0x80, // #  
  0x80, // #  
  0x80, // #  
  0x80, // #  
  0xC0, // ## 
  0x40, //  # 
  0x20, //   #
  0x00, //    

  // @143 ')' (3 pixels wide)
  0x00, //    
  0x80, // #  
  0x40, //  # 
  0x40, //  # 
  0x20, //   #
  0x20, //   #
  0x20, //   #
  0x20, //   #
  0x20, //   #
  0x60, //  ##
  0x40, //  # 
  0x80, // #  
  0x00, //    

  // @156 '*' (5 pixels wide)
  0x00, //      
  0x20, //   #  
  0xA8, // # # #
  0x70, //  ### 
  0x50, //  # # 
  0x00, //      
  0x00, //      
  0x00, //      
  0x00, //      
  0x00, //      
  0x00, //      
  0x00, //      
  0x00, //      

  // @169 '+' (7 pixels wide)
  0x00, //        
  0x00, //        
  0x10, //    #   
  0x10, //    #   
  0x10, //    #   
  0xFE, // #######
  0x10, //    #   
  0x10, //    #   
  0x10, //    #   
  0x00, //        
  0x00, //        
  0x00, //        
  0x00, //        

  // @182 ',' (2 pixels wide)
  0x00, //   
  0x00, //   
  0x00, //   
  0x00, //   
  0x00, //   
  0x00, //   
  0x00, //   
  0x00, //   
  0x00, //   
  0x40, //  #
  0x80, // # 
  0x80, // # 
  0x00, //   

  // @195 '-' (3 pixels wide)
  0x00, //    
  0x00, //    
  0x00, //    
  0x00, //    
  0x00, //    
  0xE0, // ###
  0x00, //    
  0x00, //    
  0x00, //    
  0x00, //    
  0x00, //    
  0x00, //    
  0x00, //    

  // @208 '.' (1 pixels wide)
  0x00, //  
  0x00, //  
  0x00, //  
  0x00, //  
  0x00, //  
  0x00, //  
  0x00, //  
  0x00, //  
  0x80, // #
  0x80, // #
  0x00, //  
  0x00, //  
  0x00, //  

  // @221 '/' (5 pixels wide)
  0x00, //      
  0x08, //     #
  0x10, //    # 
  0x10, //    # 
  0x10, //    # 
  0x20, //   #  
  0x20, //   #  
  0x20, //   #  
  0x40, //  #   
  0x40, //  #   
  0x80, // #    
  0x80, // #    
  0x00, //      

  // @234 '0' (6 pixels wide)
  0x00, //       
  0x78, //  #### 
  0x48, //  #  # 
  0x84, // #    #
  0x84, // #    #
  0x84, // #    #
  0x84, // #    #
  0x84, // #    #
  0x48, //  #  # 
  0x78, //  #### 
  0x00, //       
  0x00, //       
  0x00, //       

  // @247 '1' (3 pixels wide)
  0x00, //    
  0x20, //   #
  0xE0, // ###
  0x20, //   #
  0x20, //   #
  0x20, //   #
  0x20, //   #
  0x20, //   #
  0x20, //   #
  0x20, //   #
  0x00, //    
  0x00, //    
  0x00, //    

  // @260 '2' (5 pixels wide)
  0x00, //      
  0x70, //  ### 
  0x88, // #   #
  0x08, //     #
  0x08, //     #
  0x10, //    # 
  0x20, //   #  
  0x40, //  #   
  0x80, // #    
  0xF8, // #####
  0x00, //      
  0x00, //      
  0x00, //      

  // @273 '3' (5 pixels wide)
  0x00, //      
  0x70, //  ### 
  0x88, // #   #
  0x08, //     #
  0x08, //     #
  0x70, //  ### 
  0x08, //     #
  0x08, //     #
  0x88, // #   #
  0xF0, // #### 
  0x00, //      
  0x00, //      
  0x00, //      

  // @286 '4' (6 pixels wide)
  0x00, //       
  0x08, //     # 
  0x18, //    ## 
  0x18, //    ## 
  0x28, //   # # 
  0x48, //  #  # 
  0xC8, // ##  # 
  0xFC, // ######
  0x08, //     # 
  0x08, //     # 
  0x00, //       
  0x00, //       
  0x00, //       

  // @299 '5' (5 pixels wide)
  0x00, //      
  0xF8, // #####
  0x80, // #    
  0x80, // #    
  0xF0, // #### 
  0x18, //    ##
  0x08, //     #
  0x08, //     #
  0x98, // #  ##
  0xF0, // #### 
  0x00, //      
  0x00, //      
  0x00, //      

  // @312 '6' (5 pixels wide)
  0x00, //      
  0x38, //   ###
  0x40, //  #   
  0x80, // #    
  0xF0, // #### 
  0xC8, // ##  #
  0x88, // #   #
  0x88, // #   #
  0xC8, // ##  #
  0x70, //  ### 
  0x00, //      
  0x00, //      
  0x00, //      

  // @325 '7' (5 pixels wide)
  0x00, //      
  0xF8, // #####
  0x08, //     #
  0x10, //    # 
  0x10, //    # 
  0x20, //   #  
  0x20, //   #  
  0x20, //   #  
  0x40, //  #   
  0x40, //  #   
  0x00, //      
  0x00, //      
  0x00, //      

  // @338 '8' (5 pixels wide)
  0x00, //      
  0x70, //  ### 
  0x88, // #   #
  0x88, // #   #
  0x88, // #   #
  0x70, //  ### 
  0x88, // #   #
  0x88, // #   #
  0x88, // #   #
  0x70, //  ### 
  0x00, //      
  0x00, //      
  0x00, //      

  // @351 '9' (5 pixels wide)
  0x00, //      
  0x70, //  ### 
  0x98, // #  ##
  0x88, // #   #
  0x88, // #   #
  0x88, // #   #
  0x78, //  ####
  0x08, //     #
  0x10, //    # 
  0xE0, // ###  
  0x00, //      
  0x00, //      
  0x00, //      

  // @364 ':' (1 pixels wide)
  0x00, //  
  0x00, //  
  0x00, //  
  0x80, // #
  0x80, // #
  0x00, //  
  0x00, //  
  0x00, //  
  0x80, // #
  0x80, // #
  0x00, //  
  0x00, //  
  0x00, //  

  // @377 ';' (2 pixels wide)
  0x00, //   
  0x00, //   
  0x00, //   
  0x40, //  #
  0x40, //  #
  0x00, //   
  0x00, //   
  0x00, //   
  0x00, //   
  0x40, //  #
  0x80, // # 
  0x80, // # 
  0x00, //   

  // @390 '<' (5 pixels wide)
  0x00, //      
  0x00, //      
  0x00, //      
  0x08, //     #
  0x30, //   ## 
  0x40, //  #   
  0xC0, // ##   
  0x30, //   ## 
  0x08, //     #
  0x00, //      
  0x00, //      
  0x00, //      
  0x00, //      

  // @403 '=' (6 pixels wide)
  0x00, //       
  0x00, //       
  0x00, //       
  0x00, //       
  0xFC, // ######
  0x00, //       
  0x00, //       
  0xFC, // ######
  0x00, //       
  0x00, //       
  0x00, //       
  0x00, //       
  0x00, //       

  // @416 '>' (5 pixels wide)
  0x00, //      
  0x00, //      
  0x00, //      
  0x80, // #    
  0x60, //  ##  
  0x10, //    # 
  0x18, //    ##
  0x60, //  ##  
  0x80, // #    
  0x00, //      
  0x00, //      
  0x00, //      
  0x00, //      

  // @429 '?' (4 pixels wide)
  0x00, //     
  0xE0, // ### 
  0x10, //    #
  0x10, //    #
  0x20, //   # 
  0x40, //  #  
  0x40, //  #  
  0x00, //     
  0x40, //  #  
  0x40, //  #  
  0x00, //     
  0x00, //     
  0x00, //     

  // @442 '@' (10 pixels wide)
  0x00, 0x00, //           
  0x1E, 0x00, //    ####   
  0x61, 0x80, //  ##    ## 
  0x5E, 0xC0, //  # #### ##
  0xB2, 0x40, // # ##  #  #
  0xA2, 0x40, // # #   #  #
  0xA2, 0x40, // # #   #  #
  0xA6, 0xC0, // # #  ## ##
  0x5B, 0x80, //  # ## ### 
  0x60, 0x00, //  ##       
  0x1F, 0x00, //    #####  
  0x00, 0x00, //           
  0x00, 0x00, //           

  // @468 'A' (8 pixels wide)
  0x00, //         
  0x18, //    ##   
  0x18, //    ##   
  0x2C, //   # ##  
  0x24, //   #  #  
  0x24, //   #  #  
  0x42, //  #    # 
  0x7E, //  ###### 
  0x42, //  #    # 
  0x81, // #      #
  0x00, //         
  0x00, //         
  0x00, //         

  // @481 'B' (5 pixels wide)
  0x00, //      
  0xF0, // #### 
  0x88, // #   #
  0x88, // #   #
  0x88, // #   #
  0xF0, // #### 
  0x88, // #   #
  0x88, // #   #
  0x88, // #   #
  0xF0, // #### 
  0x00, //      
  0x00, //      
  0x00, //      

  // @494 'C' (6 pixels wide)
  0x00, //       
  0x3C, //   ####
  0x44, //  #   #
  0x80, // #     
  0x80, // #     
  0x80, // #     
  0x80, // #     
  0x80, // #     
  0x44, //  #   #
  0x38, //   ### 
  0x00, //       
  0x00, //       
  0x00, //       

  // @507 'D' (7 pixels wide)
  0x00, //        
  0xF8, // #####  
  0x84, // #    # 
  0x82, // #     #
  0x82, // #     #
  0x82, // #     #
  0x82, // #     #
  0x86, // #    ##
  0x8C, // #   ## 
  0xF8, // #####  
  0x00, //        
  0x00, //        
  0x00, //        

  // @520 'E' (5 pixels wide)
  0x00, //      
  0xF8, // #####
  0x80, // #    
  0x80, // #    
  0x80, // #    
  0xF8, // #####
  0x80, // #    
  0x80, // #    
  0x80, // #    
  0xF8, // #####
  0x00, //      
  0x00, //      
  0x00, //      

  // @533 'F' (4 pixels wide)
  0x00, //     
  0xF0, // ####
  0x80, // #   
  0x80, // #   
  0x80, // #   
  0xF0, // ####
  0x80, // #   
  0x80, // #   
  0x80, // #   
  0x80, // #   
  0x00, //     
  0x00, //     
  0x00, //     

  // @546 'G' (7 pixels wide)
  0x00, //        
  0x3E, //   #####
  0x62, //  ##   #
  0xC0, // ##     
  0x80, // #      
  0x8E, // #   ###
  0x82, // #     #
  0x82, // #     #
  0x42, //  #    #
  0x3C, //   #### 
  0x00, //        
  0x00, //        
  0x00, //        

  // @559 'H' (7 pixels wide)
  0x00, //        
  0x82, // #     #
  0x82, // #     #
  0x82, // #     #
  0x82, // #     #
  0xFE, // #######
  0x82, // #     #
  0x82, // #     #
  0x82, // #     #
  0x82, // #     #
  0x00, //        
  0x00, //        
  0x00, //        

  // @572 'I' (1 pixels wide)
  0x00, //  
  0x80, // #
  0x80, // #
  0x80, // #
  0x80, // #
  0x80, // #
  0x80, // #
  0x80, // #
  0x80, // #
  0x80, // #
  0x00, //  
  0x00, //  
  0x00, //  

  // @585 'J' (3 pixels wide)
  0x00, //    
  0x20, //   #
  0x20, //   #
  0x20, //   #
  0x20, //   #
  0x20, //   #
  0x20, //   #
  0x20, //   #
  0x20, //   #
  0xC0, // ## 
  0x00, //    
  0x00, //    
  0x00, //    

  // @598 'K' (6 pixels wide)
  0x00, //       
  0x84, // #    #
  0x88, // #   # 
  0x90, // #  #  
  0xA0, // # #   
  0xC0, // ##    
  0xA0, // # #   
  0x90, // #  #  
  0x88, // #   # 
  0x84, // #    #
  0x00, //       
  0x00, //       
  0x00, //       

  // @611 'L' (4 pixels wide)
  0x00, //     
  0x80, // #   
  0x80, // #   
  0x80, // #   
  0x80, // #   
  0x80, // #   
  0x80, // #   
  0x80, // #   
  0x80, // #   
  0xF0, // ####
  0x00, //     
  0x00, //     
  0x00, //     

  // @624 'M' (10 pixels wide)
  0x00, 0x00, //           
  0xC0, 0xC0, // ##      ##
  0xC0, 0xC0, // ##      ##
  0xE1, 0xC0, // ###    ###
  0xA1, 0x40, // # #    # #
  0xB3, 0x40, // # ##  ## #
  0x92, 0x40, // #  #  #  #
  0x9E, 0x40, // #  ####  #
  0x8C, 0x40, // #   ##   #
  0x8C, 0x40, // #   ##   #
  0x00, 0x00, //           
  0x00, 0x00, //           
  0x00, 0x00, //           

  // @650 'N' (8 pixels wide)
  0x00, //         
  0xC1, // ##     #
  0xC1, // ##     #
  0xA1, // # #    #
  0x91, // #  #   #
  0x99, // #  ##  #
  0x89, // #   #  #
  0x85, // #    # #
  0x83, // #     ##
  0x83, // #     ##
  0x00, //         
  0x00, //         
  0x00, //         

  // @663 'O' (8 pixels wide)
  0x00, //         
  0x3C, //   ####  
  0x42, //  #    # 
  0x81, // #      #
  0x81, // #      #
  0x81, // #      #
  0x81, // #      #
  0x81, // #      #
  0x42, //  #    # 
  0x3C, //   ####  
  0x00, //         
  0x00, //         
  0x00, //         

  // @676 'P' (5 pixels wide)
  0x00, //      
  0xF0, // #### 
  0x88, // #   #
  0x88, // #   #
  0x88, // #   #
  0x98, // #  ##
  0xF0, // #### 
  0x80, // #    
  0x80, // #    
  0x80, // #    
  0x00, //      
  0x00, //      
  0x00, //      

  // @689 'Q' (8 pixels wide)
  0x00, //         
  0x3C, //   ####  
  0x42, //  #    # 
  0xC1, // ##     #
  0x81, // #      #
  0x81, // #      #
  0x81, // #      #
  0xC1, // ##     #
  0x42, //  #    # 
  0x3E, //   ##### 
  0x03, //       ##
  0x00, //         
  0x00, //         

  // @702 'R' (7 pixels wide)
  0x00, //        
  0xF8, // #####  
  0x84, // #    # 
  0x84, // #    # 
  0x8C, // #   ## 
  0xF0, // ####   
  0x98, // #  ##  
  0x88, // #   #  
  0x84, // #    # 
  0x86, // #    ##
  0x00, //        
  0x00, //        
  0x00, //        

  // @715 'S' (5 pixels wide)
  0x00, //      
  0x78, //  ####
  0x88, // #   #
  0x80, // #    
  0xC0, // ##   
  0x30, //   ## 
  0x18, //    ##
  0x08, //     #
  0x88, // #   #
  0xF0, // #### 
  0x00, //      
  0x00, //      
  0x00, //      

  // @728 'T' (7 pixels wide)
  0x00, //        
  0xFE, // #######
  0x10, //    #   
  0x10, //    #   
  0x10, //    #   
  0x10, //    #   
  0x10, //    #   
  0x10, //    #   
  0x10, //    #   
  0x10, //    #   
  0x00, //        
  0x00, //        
  0x00, //        

  // @741 'U' (7 pixels wide)
  0x00, //        
  0x82, // #     #
  0x82, // #     #
  0x82, // #     #
  0x82, // #     #
  0x82, // #     #
  0x82, // #     #
  0x82, // #     #
  0xC6, // ##   ##
  0x7C, //  ##### 
  0x00, //        
  0x00, //        
  0x00, //        

  // @754 'V' (8 pixels wide)
  0x00, //         
  0x81, // #      #
  0x42, //  #    # 
  0x42, //  #    # 
  0x42, //  #    # 
  0x24, //   #  #  
  0x24, //   #  #  
  0x3C, //   ####  
  0x18, //    ##   
  0x18, //    ##   
  0x00, //         
  0x00, //         
  0x00, //         

  // @767 'W' (12 pixels wide)
  0x00, 0x00, //             
  0x86, 0x10, // #    ##    #
  0xC6, 0x30, // ##   ##   ##
  0x46, 0x20, //  #   ##   # 
  0x45, 0x20, //  #   # #  # 
  0x49, 0x20, //  #  #  #  # 
  0x29, 0x40, //   # #  # #  
  0x29, 0x40, //   # #  # #  
  0x30, 0xC0, //   ##    ##  
  0x10, 0xC0, //    #    ##  
  0x00, 0x00, //             
  0x00, 0x00, //             
  0x00, 0x00, //             

  // @793 'X' (8 pixels wide)
  0x00, //         
  0xC3, // ##    ##
  0x42, //  #    # 
  0x24, //   #  #  
  0x38, //   ###   
  0x18, //    ##   
  0x38, //   ###   
  0x24, //   #  #  
  0x42, //  #    # 
  0xC3, // ##    ##
  0x00, //         
  0x00, //         
  0x00, //         

  // @806 'Y' (7 pixels wide)
  0x00, //        
  0x82, // #     #
  0x44, //  #   # 
  0x44, //  #   # 
  0x28, //   # #  
  0x28, //   # #  
  0x10, //    #   
  0x10, //    #   
  0x10, //    #   
  0x10, //    #   
  0x00, //        
  0x00, //        
  0x00, //        

  // @819 'Z' (7 pixels wide)
  0x00, //        
  0xFE, // #######
  0x04, //      # 
  0x08, //     #  
  0x08, //     #  
  0x10, //    #   
  0x20, //   #    
  0x20, //   #    
  0x40, //  #     
  0xFE, // #######
  0x00, //        
  0x00, //        
  0x00, //        

  // @832 '[' (2 pixels wide)
  0x00, //   
  0xC0, // ##
  0x80, // # 
  0x80, // # 
  0x80, // # 
  0x80, // # 
  0x80, // # 
  0x80, // # 
  0x80, // # 
  0x80, // # 
  0x80, // # 
  0xC0, // ##
  0x00, //   

  // @845 '\' (5 pixels wide)
  0x00, //      
  0x80, // #    
  0x80, // #    
  0x40, //  #   
  0x40, //  #   
  0x20, //   #  
  0x20, //   #  
  0x20, //   #  
  0x10, //    # 
  0x10, //    # 
  0x10, //    # 
  0x08, //     #
  0x00, //      

  // @858 ']' (2 pixels wide)
  0x00, //   
  0xC0, // ##
  0x40, //  #
  0x40, //  #
  0x40, //  #
  0x40, //  #
  0x40, //  #
  0x40, //  #
  0x40, //  #
  0x40, //  #
  0x40, //  #
  0xC0, // ##
  0x00, //   

  // @871 '^' (6 pixels wide)
  0x00, //       
  0x20, //   #   
  0x30, //   ##  
  0x48, //  #  # 
  0x48, //  #  # 
  0x84, // #    #
  0x00, //       
  0x00, //       
  0x00, //       
  0x00, //       
  0x00, //       
  0x00, //       
  0x00, //       

  // @884 '_' (5 pixels wide)
  0x00, //      
  0x00, //      
  0x00, //      
  0x00, //      
  0x00, //      
  0x00, //      
  0x00, //      
  0x00, //      
  0x00, //      
  0x00, //      
  0x00, //      
  0xF8, // #####
  0x00, //      

  // @897 '`' (2 pixels wide)
  0x80, // # 
  0x40, //  #
  0x00, //   
  0x00, //   
  0x00, //   
  0x00, //   
  0x00, //   
  0x00, //   
  0x00, //   
  0x00, //   
  0x00, //   
  0x00, //   
  0x00, //   

  // @910 'a' (5 pixels wide)
  0x00, //      
  0x00, //      
  0x00, //      
  0x70, //  ### 
  0x08, //     #
  0x08, //     #
  0x78, //  ####
  0x88, // #   #
  0x88, // #   #
  0x78, //  ####
  0x00, //      
  0x00, //      
  0x00, //      

  // @923 'b' (6 pixels wide)
  0x80, // #     
  0x80, // #     
  0x80, // #     
  0xB8, // # ### 
  0xCC, // ##  ##
  0x84, // #    #
  0x84, // #    #
  0x84, // #    #
  0xCC, // ##  ##
  0xB8, // # ### 
  0x00, //       
  0x00, //       
  0x00, //       

  // @936 'c' (5 pixels wide)
  0x00, //      
  0x00, //      
  0x00, //      
  0x38, //   ###
  0x40, //  #   
  0x80, // #    
  0x80, // #    
  0x80, // #    
  0xC0, // ##   
  0x78, //  ####
  0x00, //      
  0x00, //      
  0x00, //      

  // @949 'd' (6 pixels wide)
  0x04, //      #
  0x04, //      #
  0x04, //      #
  0x74, //  ### #
  0xCC, // ##  ##
  0x84, // #    #
  0x84, // #    #
  0x84, // #    #
  0xCC, // ##  ##
  0x74, //  ### #
  0x00, //       
  0x00, //       
  0x00, //       

  // @962 'e' (5 pixels wide)
  0x00, //      
  0x00, //      
  0x00, //      
  0x70, //  ### 
  0xC8, // ##  #
  0x88, // #   #
  0xF8, // #####
  0x80, // #    
  0xC0, // ##   
  0x78, //  ####
  0x00, //      
  0x00, //      
  0x00, //      

  // @975 'f' (4 pixels wide)
  0x30, //   ##
  0x40, //  #  
  0x40, //  #  
  0xF0, // ####
  0x40, //  #  
  0x40, //  #  
  0x40, //  #  
  0x40, //  #  
  0x40, //  #  
  0x40, //  #  
  0x00, //     
  0x00, //     
  0x00, //     

  // @988 'g' (6 pixels wide)
  0x00, //       
  0x00, //       
  0x00, //       
  0x74, //  ### #
  0xCC, // ##  ##
  0x84, // #    #
  0x84, // #    #
  0x84, // #    #
  0xCC, // ##  ##
  0x74, //  ### #
  0x04, //      #
  0x08, //     # 
  0xF8, // ##### 

  // @1001 'h' (5 pixels wide)
  0x80, // #    
  0x80, // #    
  0x80, // #    
  0xB0, // # ## 
  0xC8, // ##  #
  0x88, // #   #
  0x88, // #   #
  0x88, // #   #
  0x88, // #   #
  0x88, // #   #
  0x00, //      
  0x00, //      
  0x00, //      

  // @1014 'i' (1 pixels wide)
  0x80, // #
  0x00, //  
  0x00, //  
  0x80, // #
  0x80, // #
  0x80, // #
  0x80, // #
  0x80, // #
  0x80, // #
  0x80, // #
  0x00, //  
  0x00, //  
  0x00, //  

  // @1027 'j' (3 pixels wide)
  0x20, //   #
  0x00, //    
  0x00, //    
  0x20, //   #
  0x20, //   #
  0x20, //   #
  0x20, //   #
  0x20, //   #
  0x20, //   #
  0x20, //   #
  0x20, //   #
  0x20, //   #
  0xC0, // ## 

  // @1040 'k' (5 pixels wide)
  0x80, // #    
  0x80, // #    
  0x80, // #    
  0x98, // #  ##
  0xB0, // # ## 
  0xA0, // # #  
  0xC0, // ##   
  0xA0, // # #  
  0xB0, // # ## 
  0x98, // #  ##
  0x00, //      
  0x00, //      
  0x00, //      

  // @1053 'l' (1 pixels wide)
  0x80, // #
  0x80, // #
  0x80, // #
  0x80, // #
  0x80, // #
  0x80, // #
  0x80, // #
  0x80, // #
  0x80, // #
  0x80, // #
  0x00, //  
  0x00, //  
  0x00, //  

  // @1066 'm' (9 pixels wide)
  0x00, 0x00, //          
  0x00, 0x00, //          
  0x00, 0x00, //          
  0xB3, 0x00, // # ##  ## 
  0xCC, 0x80, // ##  ##  #
  0x88, 0x80, // #   #   #
  0x88, 0x80, // #   #   #
  0x88, 0x80, // #   #   #
  0x88, 0x80, // #   #   #
  0x88, 0x80, // #   #   #
  0x00, 0x00, //          
  0x00, 0x00, //          
  0x00, 0x00, //          

  // @1092 'n' (5 pixels wide)
  0x00, //      
  0x00, //      
  0x00, //      
  0xB0, // # ## 
  0xC8, // ##  #
  0x88, // #   #
  0x88, // #   #
  0x88, // #   #
  0x88, // #   #
  0x88, // #   #
  0x00, //      
  0x00, //      
  0x00, //      

  // @1105 'o' (6 pixels wide)
  0x00, //       
  0x00, //       
  0x00, //       
  0x78, //  #### 
  0xCC, // ##  ##
  0x84, // #    #
  0x84, // #    #
  0x84, // #    #
  0xCC, // ##  ##
  0x78, //  #### 
  0x00, //       
  0x00, //       
  0x00, //       

  // @1118 'p' (6 pixels wide)
  0x00, //       
  0x00, //       
  0x00, //       
  0xB8, // # ### 
  0xCC, // ##  ##
  0x84, // #    #
  0x84, // #    #
  0x84, // #    #
  0xCC, // ##  ##
  0xB8, // # ### 
  0x80, // #     
  0x80, // #     
  0x80, // #     

  // @1131 'q' (6 pixels wide)
  0x00, //       
  0x00, //       
  0x00, //       
  0x74, //  ### #
  0xCC, // ##  ##
  0x84, // #    #
  0x84, // #    #
  0x84, // #    #
  0xCC, // ##  ##
  0x74, //  ### #
  0x04, //      #
  0x04, //      #
  0x04, //      #

  // @1144 'r' (4 pixels wide)
  0x00, //     
  0x00, //     
  0x00, //     
  0xB0, // # ##
  0xC0, // ##  
  0x80, // #   
  0x80, // #   
  0x80, // #   
  0x80, // #   
  0x80, // #   
  0x00, //     
  0x00, //     
  0x00, //     

  // @1157 's' (4 pixels wide)
  0x00, //     
  0x00, //     
  0x00, //     
  0x70, //  ###
  0x80, // #   
  0x80, // #   
  0x60, //  ## 
  0x10, //    #
  0x10, //    #
  0xE0, // ### 
  0x00, //     
  0x00, //     
  0x00, //     

  // @1170 't' (4 pixels wide)
  0x00, //     
  0x40, //  #  
  0x40, //  #  
  0xF0, // ####
  0x40, //  #  
  0x40, //  #  
  0x40, //  #  
  0x40, //  #  
  0x40, //  #  
  0x70, //  ###
  0x00, //     
  0x00, //     
  0x00, //     

  // @1183 'u' (5 pixels wide)
  0x00, //      
  0x00, //      
  0x00, //      
  0x88, // #   #
  0x88, // #   #
  0x88, // #   #
  0x88, // #   #
  0x88, // #   #
  0x98, // #  ##
  0x68, //  ## #
  0x00, //      
  0x00, //      
  0x00, //      

  // @1196 'v' (6 pixels wide)
  0x00, //       
  0x00, //       
  0x00, //       
  0x84, // #    #
  0x48, //  #  # 
  0x48, //  #  # 
  0x48, //  #  # 
  0x30, //   ##  
  0x30, //   ##  
  0x30, //   ##  
  0x00, //       
  0x00, //       
  0x00, //       

  // @1209 'w' (9 pixels wide)
  0x00, 0x00, //          
  0x00, 0x00, //          
  0x00, 0x00, //          
  0x88, 0x80, // #   #   #
  0x88, 0x80, // #   #   #
  0x55, 0x00, //  # # # # 
  0x55, 0x00, //  # # # # 
  0x55, 0x00, //  # # # # 
  0x66, 0x00, //  ##  ##  
  0x22, 0x00, //   #   #  
  0x00, 0x00, //          
  0x00, 0x00, //          
  0x00, 0x00, //          

  // @1235 'x' (6 pixels wide)
  0x00, //       
  0x00, //       
  0x00, //       
  0xC4, // ##   #
  0x48, //  #  # 
  0x38, //   ### 
  0x30, //   ##  
  0x30, //   ##  
  0x48, //  #  # 
  0xCC, // ##  ##
  0x00, //       
  0x00, //       
  0x00, //       

  // @1248 'y' (6 pixels wide)
  0x00, //       
  0x00, //       
  0x00, //       
  0x84, // #    #
  0x48, //  #  # 
  0x48, //  #  # 
  0x48, //  #  # 
  0x30, //   ##  
  0x30, //   ##  
  0x30, //   ##  
  0x20, //   #   
  0x20, //   #   
  0xC0, // ##    

  // @1261 'z' (6 pixels wide)
  0x00, //       
  0x00, //       
  0x00, //       
  0xFC, // ######
  0x08, //     # 
  0x10, //    #  
  0x30, //   ##  
  0x20, //   #   
  0x40, //  #    
  0xFC, // ######
  0x00, //       
  0x00, //       
  0x00, //       

  // @1274 '{' (3 pixels wide)
  0x00, //    
  0x60, //  ##
  0x40, //  # 
  0x40, //  # 
  0x40, //  # 
  0x40, //  # 
  0x80, // #  
  0x40, //  # 
  0x40, //  # 
  0x40, //  # 
  0x40, //  # 
  0x60, //  ##
  0x00, //    

  // @1287 '|' (1 pixels wide)
  0x80, // #
  0x80, // #
  0x80, // #
  0x80, // #
  0x80, // #
  0x80, // #
  0x80, // #
  0x80, // #
  0x80, // #
  0x80, // #
  0x80, // #
  0x80, // #
  0x80, // #

  // @1300 '}' (3 pixels wide)
  0x00, //    
  0xC0, // ## 
  0x40, //  # 
  0x40, //  # 
  0x40, //  # 
  0x40, //  # 
  0x20, //   #
  0x40, //  # 
  0x40, //  # 
  0x40, //  # 
  0x40, //  # 
  0xC0, // ## 
  0x00, //    

  // @1313 '~' (6 pixels wide)
  0x00, //       
  0x00, //       
  0x00, //       
  0x00, //       
  0x00, //       
  0xE4, // ###  #
  0x9C, // #  ###
  0x00, //       
  0x00, //       
  0x00, //       
  0x00, //       
  0x00, //       
  0x00, //       
};

// Character descriptors for Segoe UI 10pt
// { [Char width in bits], [Offset into segoeUI_10ptCharBitmaps in bytes] }
const int fontDescriptors[][2] = 
{
  {2, 0},     //   
  {1, 13},    // ! 
  {3, 26},    // " 
  {8, 39},    // # 
  {5, 52},    // $ 
  {10, 65},     // % 
  {9, 91},    // & 
  {1, 117},     // ' 
  {3, 130},     // ( 
  {3, 143},     // ) 
  {5, 156},     // * 
  {7, 169},     // + 
  {2, 182},     // , 
  {3, 195},     // - 
  {1, 208},     // . 
  {5, 221},     // / 
  {6, 234},     // 0 
  {3, 247},     // 1 
  {5, 260},     // 2 
  {5, 273},     // 3 
  {6, 286},     // 4 
  {5, 299},     // 5 
  {5, 312},     // 6 
  {5, 325},     // 7 
  {5, 338},     // 8 
  {5, 351},     // 9 
  {1, 364},     // : 
  {2, 377},     // ; 
  {5, 390},     // < 
  {6, 403},     // = 
  {5, 416},     // > 
  {4, 429},     // ? 
  {10, 442},    // @ 
  {8, 468},     // A 
  {5, 481},     // B 
  {6, 494},     // C 
  {7, 507},     // D 
  {5, 520},     // E 
  {4, 533},     // F 
  {7, 546},     // G 
  {7, 559},     // H 
  {1, 572},     // I 
  {3, 585},     // J 
  {6, 598},     // K 
  {4, 611},     // L 
  {10, 624},    // M 
  {8, 650},     // N 
  {8, 663},     // O 
  {5, 676},     // P 
  {8, 689},     // Q 
  {7, 702},     // R 
  {5, 715},     // S 
  {7, 728},     // T 
  {7, 741},     // U 
  {8, 754},     // V 
  {12, 767},    // W 
  {8, 793},     // X 
  {7, 806},     // Y 
  {7, 819},     // Z 
  {2, 832},     // [ 
  {5, 845},     // 
  {2, 858},     // ] 
  {6, 871},     // ^ 
  {5, 884},     // _ 
  {2, 897},     // ` 
  {5, 910},     // a 
  {6, 923},     // b 
  {5, 936},     // c 
  {6, 949},     // d 
  {5, 962},     // e 
  {4, 975},     // f 
  {6, 988},     // g 
  {5, 1001},    // h 
  {1, 1014},    // i 
  {3, 1027},    // j 
  {5, 1040},    // k 
  {1, 1053},    // l 
  {9, 1066},    // m 
  {5, 1092},    // n 
  {6, 1105},    // o 
  {6, 1118},    // p 
  {6, 1131},    // q 
  {4, 1144},    // r 
  {4, 1157},    // s 
  {4, 1170},    // t 
  {5, 1183},    // u 
  {6, 1196},    // v 
  {9, 1209},    // w 
  {6, 1235},    // x 
  {6, 1248},    // y 
  {6, 1261},    // z 
  {3, 1274},    // { 
  {1, 1287},    // | 
  {3, 1300},    // } 
  {6, 1313},    // ~ 
};

#endif /* _font_H_ */
