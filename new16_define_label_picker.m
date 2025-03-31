function [x, y, z] = new16_define_label_picker(itemType)

        if itemType == 1
            x = 20;         
            y = 190;
            z = 40;
        elseif itemType == 2
            x = 20;
            y = 150;
            z = 48;
        elseif itemType == 3
            x = -20;
            y = 190;
            z = 40;
        elseif itemType == 4
            x = -20;
            y = 150;
            z = 40;
        else
            x = 0;
            y = 125;
            z = 99;
        end

end