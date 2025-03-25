function [x, y, z] = label_picker(itemType)

        if itemType == 0
            x = 25;         
            y = 190;
            z = 50;
        elseif itemType == 1
            x = 25;
            y = 230;
            z = 50;
        elseif itemType == 2
            x = 65;
            y = 190;
            z = 50;
        elseif itemType == 3
            x = 65;
            y = 230;
            z = 50;
        else
            x = 0;
            y = 125;
            z = 99;
        end

end