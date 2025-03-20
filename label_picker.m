function [x, y, z] = label_picker(area, color)
    
    shape = 'square';
    if area<225
        shape = 'cylinder';
    end

    key = sprintf('%s_%d', color, shape);
    % Create a Map object to store color-area combinations to vectors
    mapper = containers.Map('KeyType', 'char', 'ValueType', 'double');
    
    % Example: Define some sample mappings
    % Format: 'color_area' -> [x y z]
    mapper('red_square') = [1 2 3];
    mapper('red_cylinder') = [1 2 3];
    mapper('blue_square') = [4 5 6];
    mapper('blue_cylinder') = [7 8 9];

    [x, y, z] = mapper(key);

end