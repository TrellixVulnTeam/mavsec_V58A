t2 = 1.0/range;
t3 = q0*q1*2.0;
t4 = q2*q3*2.0;
t5 = q0*q0;
t6 = q1*q1;
t7 = q2*q2;
t8 = q3*q3;
t9 = q0*q2*2.0;
t10 = q1*q3*2.0;
t11 = q0*q3*2.0;
t12 = q1*q2*2.0;
t13 = t11-t12;
t14 = t3+t4;
t15 = t5-t6-t7+t8;
t16 = t15*vd;
t17 = t3-t4;
t18 = t9+t10;
t19 = t18*vn;
t28 = t17*ve;
t20 = t16+t19-t28;
t21 = t5+t6-t7-t8;
t22 = t21*vn;
t23 = t9-t10;
t24 = t11+t12;
t25 = t24*ve;
t29 = t23*vd;
t26 = t22+t25-t29;
t27 = t5-t6+t7-t8;
t30 = P[0][0]*t2*t20;
t31 = P[5][3]*t2*t14;
t32 = P[0][3]*t2*t20;
t33 = P[4][3]*t2*t27;
t56 = P[3][3]*t2*t13;
t57 = P[2][3]*t2*t26;
t34 = t31+t32+t33-t56-t57;
t35 = P[5][5]*t2*t14;
t36 = P[0][5]*t2*t20;
t37 = P[4][5]*t2*t27;
t59 = P[3][5]*t2*t13;
t60 = P[2][5]*t2*t26;
t38 = t35+t36+t37-t59-t60;
t39 = t2*t14*t38;
t40 = P[5][0]*t2*t14;
t41 = P[4][0]*t2*t27;
t61 = P[3][0]*t2*t13;
t62 = P[2][0]*t2*t26;
t42 = t30+t40+t41-t61-t62;
t43 = t2*t20*t42;
t44 = P[5][2]*t2*t14;
t45 = P[0][2]*t2*t20;
t46 = P[4][2]*t2*t27;
t55 = P[2][2]*t2*t26;
t63 = P[3][2]*t2*t13;
t47 = t44+t45+t46-t55-t63;
t48 = P[5][4]*t2*t14;
t49 = P[0][4]*t2*t20;
t50 = P[4][4]*t2*t27;
t65 = P[3][4]*t2*t13;
t66 = P[2][4]*t2*t26;
t51 = t48+t49+t50-t65-t66;
t52 = t2*t27*t51;
t58 = t2*t13*t34;
t64 = t2*t26*t47;
t53 = R_LOS+t39+t43+t52-t58-t64;
t54 = 1.0/t53;
A0[0][0] = t54*(t30-P[0][3]*t2*(t11-q1*q2*2.0)+P[0][5]*t2*t14-P[0][2]*t2*t26+P[0][4]*t2*t27);
A0[1][0] = t54*(-P[1][3]*t2*t13+P[1][5]*t2*t14+P[1][0]*t2*t20-P[1][2]*t2*t26+P[1][4]*t2*t27);
A0[2][0] = t54*(-t55-P[2][3]*t2*t13+P[2][5]*t2*t14+P[2][0]*t2*t20+P[2][4]*t2*t27);
A0[3][0] = t54*(-t56+P[3][5]*t2*t14+P[3][0]*t2*t20-P[3][2]*t2*t26+P[3][4]*t2*t27);
A0[4][0] = t54*(t50-P[4][3]*t2*t13+P[4][5]*t2*t14+P[4][0]*t2*t20-P[4][2]*t2*t26);
A0[5][0] = t54*(t35-P[5][3]*t2*t13+P[5][0]*t2*t20-P[5][2]*t2*t26+P[5][4]*t2*t27);
A0[6][0] = t54*(-P[6][3]*t2*t13+P[6][5]*t2*t14+P[6][0]*t2*t20-P[6][2]*t2*t26+P[6][4]*t2*t27);
A0[7][0] = t54*(-P[7][3]*t2*t13+P[7][5]*t2*t14+P[7][0]*t2*t20-P[7][2]*t2*t26+P[7][4]*t2*t27);
A0[8][0] = t54*(-P[8][3]*t2*t13+P[8][5]*t2*t14+P[8][0]*t2*t20-P[8][2]*t2*t26+P[8][4]*t2*t27);
A0[9][0] = t54*(-P[9][3]*t2*t13+P[9][5]*t2*t14+P[9][0]*t2*t20-P[9][2]*t2*t26+P[9][4]*t2*t27);
A0[10][0] = t54*(-P[10][3]*t2*t13+P[10][5]*t2*t14+P[10][0]*t2*t20-P[10][2]*t2*t26+P[10][4]*t2*t27);
A0[11][0] = t54*(-P[11][3]*t2*t13+P[11][5]*t2*t14+P[11][0]*t2*t20-P[11][2]*t2*t26+P[11][4]*t2*t27);
A0[12][0] = t54*(-P[12][3]*t2*t13+P[12][5]*t2*t14+P[12][0]*t2*t20-P[12][2]*t2*t26+P[12][4]*t2*t27);
A0[13][0] = t54*(-P[13][3]*t2*t13+P[13][5]*t2*t14+P[13][0]*t2*t20-P[13][2]*t2*t26+P[13][4]*t2*t27);
A0[14][0] = t54*(-P[14][3]*t2*t13+P[14][5]*t2*t14+P[14][0]*t2*t20-P[14][2]*t2*t26+P[14][4]*t2*t27);
A0[15][0] = t54*(-P[15][3]*t2*t13+P[15][5]*t2*t14+P[15][0]*t2*t20-P[15][2]*t2*t26+P[15][4]*t2*t27);
A0[16][0] = t54*(-P[16][3]*t2*t13+P[16][5]*t2*t14+P[16][0]*t2*t20-P[16][2]*t2*t26+P[16][4]*t2*t27);
A0[17][0] = t54*(-P[17][3]*t2*t13+P[17][5]*t2*t14+P[17][0]*t2*t20-P[17][2]*t2*t26+P[17][4]*t2*t27);
A0[18][0] = t54*(-P[18][3]*t2*t13+P[18][5]*t2*t14+P[18][0]*t2*t20-P[18][2]*t2*t26+P[18][4]*t2*t27);
A0[19][0] = t54*(-P[19][3]*t2*t13+P[19][5]*t2*t14+P[19][0]*t2*t20-P[19][2]*t2*t26+P[19][4]*t2*t27);
A0[20][0] = t54*(-P[20][3]*t2*t13+P[20][5]*t2*t14+P[20][0]*t2*t20-P[20][2]*t2*t26+P[20][4]*t2*t27);
A0[21][0] = t54*(-P[21][3]*t2*t13+P[21][5]*t2*t14+P[21][0]*t2*t20-P[21][2]*t2*t26+P[21][4]*t2*t27);
A0[22][0] = t54*(-P[22][3]*t2*t13+P[22][5]*t2*t14+P[22][0]*t2*t20-P[22][2]*t2*t26+P[22][4]*t2*t27);
A0[23][0] = t54*(-P[23][3]*t2*t13+P[23][5]*t2*t14+P[23][0]*t2*t20-P[23][2]*t2*t26+P[23][4]*t2*t27);