%% catastrophic.m
%%

X = [-10 : 0.001 : 10];
Y = (1 - cos(X)) ./ X.^2;

plot(X, Y);

input("Press a key to continue...");

figure;
X = [-4 * 10 ** -8 : 10**-10 : 4 * 10 ** -8];
Y = (1 - cos(X)) ./ X.^2;

plot(X, Y);
