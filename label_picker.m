function [x, y, z] = label_picker(area, color)
    shape = 'square';
    if area<225
        shape = 'cylinder';  
    end
 
   
    
    if shape == 'square'
        if color == 'red'
            x = -30;            %x y z values to be determined during testing
            y = 140;
            z = 30;
        else
            x = -30;
            y = 140;
            z = 99;
        end
    else
         if color == 'red'
            x = -30;
            y = 140;
            z = 99;
        else
            x = -31;
            y = 140;
            z = 99;
         end
    end

end