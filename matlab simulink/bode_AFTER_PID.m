num=[50,1508.5,305,8.5];
den=[100,8.2,1.822,0];
sys=tf(num,den)
bode(sys)
margin(sys)