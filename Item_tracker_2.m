function [R,X,Z] = compute_item_tracking(det_x,det_y,height,delay,v_belt,timeadded)

PICKUP_Y = 0; % TODO figure out optimal value
x_offset = 0;
y_offset = 0;
z_offset = 50;

% Put down x
put_x = det_x - x_offset ;

% Put down height based on object height
put_z = height + z_offset ;
% Put down y
movedtime = timeadded + delay;
put_y = movedtime*v_belt;
[R , X , Z ] = invkin(put_x,put_y,put_z);
disp(delay)
end