function [x, y, z] = define_label_picker(itemType)

        if itemType == 1 %blue cylinder
            x = 25;         
            y = 190;
            z = 50;
        elseif itemType == 2 %blue square
            x = 25;
            y = 230;
            z = 50;
        elseif itemType == 3 %red cylinder
            x = 65;
            y = 190;
            z = 50;
        elseif itemType == 4 %red square
            x = 65;
            y = 230;
            z = 50;
        else
            x = 0;
            y = 125;
            z = 99;
        end

end