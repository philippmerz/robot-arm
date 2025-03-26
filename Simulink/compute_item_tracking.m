function [R,X,Z,t] = compute_item_tracking(det_x,det_y,height,delay,v_belt)

PICKUP_Y = 0; % TODO figure out optimal value
x_offset = 0;
y_offset = 0;
z_offset = 50;

% Put down x
put_x = det_x - x_offset ;

% Put down height based on object height
put_z = height + z_offset ;
% Put down y
moving_time = (PICKUP_Y - det_y) / v_belt - delay;
t = moving_time - delay;
put_y = PICKUP_Y + y_offset ;
[R , X , Z ] = invkin(put_x,put_y,put_z);
disp(delay)
end