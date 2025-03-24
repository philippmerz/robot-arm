function [itemType] = get_item_type(area, color)
    shape = 'square';
    if area<225
        shape = 'cylinder';  
    end
 
   
    
    if shape == 'square'
        if color == 'red'
            itemType = 0; %redsquare
        else
            itemType = 1; %bluesquare
        end
    else
         if color == 'red'
            itemType = 2; %redcyl
         else
            itemType = 3; %bluecyl
         end
    end

end