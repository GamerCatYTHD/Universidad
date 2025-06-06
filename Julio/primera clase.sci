x = [-0.5:0.01:0.5]'; 
y = 0.5 * cos(2 * %pi * x + %pi / 2);
plot2d(x, y); 

xlabel("-t-");
ylabel("-Xa(t)-");
title("Xa(t) = 0.5 Cos(2πt + π/2)");

a = gca();

a.grid=[9,9];

