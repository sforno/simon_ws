%% Import data from text file.
% Script for importing data from the following text file

%% Initialize variables.
filename_pose = 'C:\Users\Utente\Dropbox\Abschlussarbeit\PEM\4-Results\graph_localization\tuned_gmap\f4\pose.csv';
filename_odom = 'C:\Users\Utente\Dropbox\Abschlussarbeit\PEM\4-Results\graph_localization\tuned_gmap\f4\odom.csv';
delimiter = ';';
startRow = 2;

%% Format string for each line of text:

formatSpec = '%f%f%f%s%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%[^\n\r]'; %%[^\n\r]

%% Open the text file.
fileID_pose = fopen(filename_pose,'r');
fileID_odom = fopen(filename_odom,'r');

%% Read columns of data according to format string.
% This call is based on the structure of the file used to generate this
% code. If an error occurs for a different file, try regenerating the code
% from the Import Tool.
dataArray_pose = textscan(fileID_pose, formatSpec, 'Delimiter', delimiter, 'HeaderLines' ,startRow-1, 'ReturnOnError', false);
dataArray_odom = textscan(fileID_odom, formatSpec, 'Delimiter', delimiter, 'HeaderLines' ,startRow-1, 'ReturnOnError', false);

%% Close the text file.
fclose(fileID_pose);
fclose(fileID_odom);

%% Allocate imported array to column variable names for the file odom_amcl_graphmap
time_odom = dataArray_odom{:, 1};
fieldheaderseq_odom = dataArray_odom{:, 2};
fieldheaderstamp_odom = dataArray_odom{:, 3};
fieldheaderframe_id_odom = dataArray_odom{:, 4};
fieldposeposepositionx_odom = dataArray_odom{:, 5};
fieldposeposepositiony_odom = dataArray_odom{:, 6};
fieldposeposepositionz_odom = dataArray_odom{:, 7};
fieldposeposeorientationx_odom = dataArray_odom{:, 8};
fieldposeposeorientationy_odom = dataArray_odom{:, 9};
fieldposeposeorientationz_odom = dataArray_odom{:, 10};
fieldposeposeorientationw_odom = dataArray_odom{:, 11};
% fieldposecovariance0_odom = dataArray_odom{:, 12};
% fieldposecovariance1_odom = dataArray_odom{:, 13};
% fieldposecovariance2_odom = dataArray_odom{:, 14};
% fieldposecovariance3_odom = dataArray_odom{:, 15};
% fieldposecovariance4_odom = dataArray_odom{:, 16};
% fieldposecovariance5_odom = dataArray_odom{:, 17};
% fieldposecovariance6_odom = dataArray_odom{:, 18};
% fieldposecovariance7_odom = dataArray_odom{:, 19};
% fieldposecovariance8_odom = dataArray_odom{:, 20};
% fieldposecovariance9_odom = dataArray_odom{:, 21};
% fieldposecovariance10_odom = dataArray_odom{:, 22};
% fieldposecovariance11_odom = dataArray_odom{:, 23};
% fieldposecovariance12_odom = dataArray_odom{:, 24};
% fieldposecovariance13_odom = dataArray_odom{:, 25};
% fieldposecovariance14_odom = dataArray_odom{:, 26};
% fieldposecovariance15_odom = dataArray_odom{:, 27};
% fieldposecovariance16_odom = dataArray_odom{:, 28};
% fieldposecovariance17_odom = dataArray_odom{:, 29};
% fieldposecovariance18_odom = dataArray_odom{:, 30};
% fieldposecovariance19_odom = dataArray_odom{:, 31};
% fieldposecovariance20_odom = dataArray_odom{:, 32};
% fieldposecovariance21_odom = dataArray_odom{:, 33};
% fieldposecovariance22_odom = dataArray_odom{:, 34};
% fieldposecovariance23_odom = dataArray_odom{:, 35};
% fieldposecovariance24_odom = dataArray_odom{:, 36};
% fieldposecovariance25_odom = dataArray_odom{:, 37};
% fieldposecovariance26_odom = dataArray_odom{:, 38};
% fieldposecovariance27_odom = dataArray_odom{:, 39};
% fieldposecovariance28_odom = dataArray_odom{:, 40};
% fieldposecovariance29_odom = dataArray_odom{:, 41};
% fieldposecovariance30_odom = dataArray_odom{:, 42};
% fieldposecovariance31_odom = dataArray_odom{:, 43};
% fieldposecovariance32_odom = dataArray_odom{:, 44};
% fieldposecovariance33_odom = dataArray_odom{:, 45};
% fieldposecovariance34_odom = dataArray_odom{:, 46};
% fieldposecovariance35_odom = dataArray_odom{:, 47};

%% Allocate imported array to column variable names for the file pose_amcl_graphmap
time_pose = dataArray_pose{:, 1};
fieldheaderseq_pose = dataArray_pose{:, 2};
fieldheaderstamp_pose = dataArray_pose{:, 3};
fieldheaderframe_id_pose = dataArray_pose{:, 4};
fieldposeposepositionx_pose = dataArray_pose{:, 5};
fieldposeposepositiony_pose = dataArray_pose{:, 6};
fieldposeposepositionz_pose = dataArray_pose{:, 7};
fieldposeposeorientationx_pose = dataArray_pose{:, 8};
fieldposeposeorientationy_pose = dataArray_pose{:, 9};
fieldposeposeorientationz_pose = dataArray_pose{:, 10};
fieldposeposeorientationw_pose = dataArray_pose{:, 11};
% fieldposecovariance0_pose = dataArray_pose{:, 12};
% fieldposecovariance1_pose = dataArray_pose{:, 13};
% fieldposecovariance2_pose = dataArray_pose{:, 14};
% fieldposecovariance3_pose = dataArray_pose{:, 15};
% fieldposecovariance4_pose = dataArray_pose{:, 16};
% fieldposecovariance5_pose = dataArray_pose{:, 17};
% fieldposecovariance6_pose = dataArray_pose{:, 18};
% fieldposecovariance7_pose = dataArray_pose{:, 19};
% fieldposecovariance8_pose = dataArray_pose{:, 20};
% fieldposecovariance9_pose = dataArray_pose{:, 21};
% fieldposecovariance10_pose = dataArray_pose{:, 22};
% fieldposecovariance11_pose = dataArray_pose{:, 23};
% fieldposecovariance12_pose = dataArray_pose{:, 24};
% fieldposecovariance13_pose = dataArray_pose{:, 25};
% fieldposecovariance14_pose = dataArray_pose{:, 26};
% fieldposecovariance15_pose = dataArray_pose{:, 27};
% fieldposecovariance16_pose = dataArray_pose{:, 28};
% fieldposecovariance17_pose = dataArray_pose{:, 29};
% fieldposecovariance18_pose = dataArray_pose{:, 30};
% fieldposecovariance19_pose = dataArray_pose{:, 31};
% fieldposecovariance20_pose = dataArray_pose{:, 32};
% fieldposecovariance21_pose = dataArray_pose{:, 33};
% fieldposecovariance22_pose = dataArray_pose{:, 34};
% fieldposecovariance23_pose = dataArray_pose{:, 35};
% fieldposecovariance24_pose = dataArray_pose{:, 36};
% fieldposecovariance25_pose = dataArray_pose{:, 37};
% fieldposecovariance26_pose = dataArray_pose{:, 38};
% fieldposecovariance27_pose = dataArray_pose{:, 39};
% fieldposecovariance28_pose = dataArray_pose{:, 40};
% fieldposecovariance29_pose = dataArray_pose{:, 41};
% fieldposecovariance30_pose = dataArray_pose{:, 42};
% fieldposecovariance31_pose = dataArray_pose{:, 43};
% fieldposecovariance32_pose = dataArray_pose{:, 44};
% fieldposecovariance33_pose = dataArray_pose{:, 45};
% fieldposecovariance34_pose = dataArray_pose{:, 46};
% fieldposecovariance35_pose = dataArray_pose{:, 47};

%% Prepare vectors for error functions
%% Transform rotations from quaternions to euler
% Reference rotations
% Inputs should be with dimension nx4 and of the form q = [w,x,y,z] according to Mathworks

orientation_ref = [fieldposeposeorientationw_odom,fieldposeposeorientationx_odom,fieldposeposeorientationy_odom,fieldposeposeorientationz_odom];
orientation_actual = [fieldposeposeorientationw_pose,fieldposeposeorientationx_pose,fieldposeposeorientationy_pose,fieldposeposeorientationz_pose];

euler_ref = quat2eul(orientation_ref); %output order Z,Y,X rotation axis, we need at the end just the Z [radiants]
euler_actual = quat2eul(orientation_actual); %output order Z,Y,X rotation axis, we need at the end just the Z [radiants]

euler_ref = euler_ref(:,1); %save only Z
euler_actual = euler_actual(:,1); %save only Z
%% A
Aindex_start = 334; %firts value with x = 15
Aindex_end = 2534; % end
Aspace = (Aindex_end - Aindex_start)/22;
Ax = zeros(1,23);
Ay = zeros(1,23);
Atheta = zeros(1,23);

 Ax(1,1) = fieldposeposepositionx_odom(Aindex_start);
 Ay(1,1) = fieldposeposepositiony_odom(Aindex_start);
 Atheta(1,1) = euler_ref(Aindex_start);
 
for index = 2:23
   Ax(1,index) = fieldposeposepositionx_odom(Aindex_start+Aspace*(index-1));
   Ay(1,index) = fieldposeposepositiony_odom(Aindex_start+Aspace*(index-1));
   Atheta(1,index) = euler_ref(Aindex_start+Aspace*(index-1));
end

pose_x_A = zeros(1,23);
pose_y_A = zeros(1,23);
rot_A = zeros(1,23);
index_v_A = zeros(1,23);

% create x vector 
for j = 1: 23
    
for index = 1:135 % fieldposeposepositionx_pose 150 = roughly 37
    
if(fieldposeposepositionx_pose(index,1)>= Ax(1,j) - 0.12 && fieldposeposepositionx_pose(index,1)<= Ax(1,j) + 0.12)
    pose_x_A(1,j) = fieldposeposepositionx_pose(index);
    index_v_A(1,j) = index;
end

end

end

% create y vector
 for j = 1:23
      temp = index_v_A(1,j);
      pose_y_A(1,j) = fieldposeposepositiony_pose(temp,1);
 end
 
% create actual vector rotation from vector index_v_A
for j= 1:23
    temp = index_v_A(1,j);
    rot_A(1,j) = euler_actual(temp,1);
end
%% B
Bindex_start = 2950;
Bindex_end = 4300;
Bspace = round((Bindex_end - Bindex_start)/13);
Bx = zeros(1,13);
By = zeros(1,13);
Btheta = zeros(1,13);

Bx(1,1) = fieldposeposepositionx_odom(Bindex_start);
By(1,1) = fieldposeposepositiony_odom(Bindex_start);
Btheta = euler_ref(Bindex_start);
for index = 2:14
   Bx(1,index) = fieldposeposepositionx_odom(Bindex_start+Bspace*(index-1));
   By(1,index) = fieldposeposepositiony_odom(Bindex_start+Bspace*(index-1));
   Btheta(1,index) = euler_ref(Bindex_start+Bspace*(index-1));
end 
 

pose_y_B = zeros(1,14);
index_v_B = zeros(1,14);
pose_x_B = zeros(1,14);
rot_B = zeros(1,14);


%first create the y vertical vector
for j = 1: 14
    
for index = 135:200 %look at fieldposeposepositiony_pose index 0:13 meters
    
if(fieldposeposepositiony_pose(index,1)>= By(1,j) - 0.10 && fieldposeposepositiony_pose(index,1)<= By(1,j) + 0.10)
    pose_y_B(1,j) = fieldposeposepositiony_pose(index);
    index_v_B(1,j) = index;
end

end

end

%create x vector from y

for j = 1:14
      temp = index_v_B(1,j);
      pose_x_B(1,j) = fieldposeposepositionx_pose(temp,1);
end

for j= 1:14
    temp = index_v_B(1,j);
    rot_B(1,j) = euler_actual(temp,1);
end
%% C
Cindex_start = 4830;
Cindex_end = 5740;
Cspace = round((Cindex_end - Cindex_start)/10);
Cx = zeros(1,10);
Cy = zeros(1,10);
Ctheta = zeros(1,10);

Cx(1,1) = fieldposeposepositionx_odom(Cindex_start);
Cy(1,1) = fieldposeposepositiony_odom(Cindex_start);
Ctheta = euler_ref(Cindex_start);
for index = 2:11
   Cx(1,index) = fieldposeposepositionx_odom(Cindex_start+Cspace*(index-1));
   Cy(1,index) = fieldposeposepositiony_odom(Cindex_start+Cspace*(index-1));
   Ctheta(1,index) = euler_ref(Cindex_start+Cspace*(index-1));
end

pose_x_C = zeros(1,11);
index_v_C = zeros(1,11);
pose_y_C = zeros(1,11);
rot_C = zeros(1,11);

% create x vector 
for j = 1:11
    
for index = 200:254 % look at fieldposeposepositionx_pose(index) --> 37: 27 meters
    
if(fieldposeposepositionx_pose(index,1)>= Cx(1,j) - 0.10 && fieldposeposepositionx_pose(index,1)<= Cx(1,j) + 0.10)
    pose_x_C(1,j) = fieldposeposepositionx_pose(index);
    index_v_C(1,j) = index;
end

end

end

%create y vector
 for j = 1:11
      temp = index_v_C(1,j);
      pose_y_C(1,j) = fieldposeposepositiony_pose(temp,1);
 end

for j= 1:11
    temp = index_v_C(1,j);
    rot_C(1,j) = euler_actual(temp,1);
end
%% D
Dindex_start = 6100;  %y=13
Dindex_end = 6680;    %y=8
Dspace = round((Dindex_end - Dindex_start)/4);
Dx = zeros(1,4); 
Dy = zeros(1,4);
Dtheta = zeros(1,4);

Dx(1,1) = fieldposeposepositionx_odom(Dindex_start);
Dy(1,1) = fieldposeposepositiony_odom(Dindex_start);
Dtheta = euler_ref(Dindex_start);
for index = 2:5
   Dx(1,index) = fieldposeposepositionx_odom(Dindex_start+Dspace*(index-1));
   Dy(1,index) = fieldposeposepositiony_odom(Dindex_start+Dspace*(index-1));
   Dtheta(1,index) = euler_ref(Dindex_start+Dspace*(index-1));
end

pose_y_D = zeros(1,5);
index_v_D = zeros(1,5);
pose_x_D = zeros(1,5);
rot_D = zeros(1,5);

%first create the y vertical vector
for j = 1:5
    
for index = 255:287 %look at fieldposeposepositiony_pose index --> 13:8 meters
    
if(fieldposeposepositiony_pose(index,1)>= Dy(1,j) - 0.12 && fieldposeposepositiony_pose(index,1)<= Dy(1,j) + 0.12)
    pose_y_D(1,j) = fieldposeposepositiony_pose(index);
    index_v_D(1,j) = index;
end

end

end

% create x vector
for j = 1:5
      temp = index_v_D(1,j);
      pose_x_D(1,j) = fieldposeposepositionx_pose(temp,1);
end
 
for j= 1:5
    temp = index_v_D(1,j);
    rot_D(1,j) = euler_actual(temp,1);
end
%% Make full vector
X = [Ax,Bx,Cx,Dx];
Y = [Ay,By,Cy,Dy];
TH = [Atheta, Btheta, Ctheta, Dtheta];
pose_x = [pose_x_A,pose_x_B,pose_x_C,pose_x_D];
pose_y = [pose_y_A,pose_y_B,pose_y_C,pose_y_D];
rot = [rot_A,rot_B,rot_C,rot_D];

%% Plots
%   figure;
   %plot(fieldposeposepositionx_pose,fieldposeposepositiony_pose,'r--o')
   %hold on
  % plot(fieldposeposepositionx_odom,fieldposeposepositiony_odom,'g--');
  % hold on
%     plot(X,Y,'b--o');
%     hold on
%     plot(pose_x,pose_y,'r--o');
%   hold on
%   plot(fieldposeposepositionx_pose,fieldposeposepositiony_pose, 'm--o');
%   axis ([15 30 0 -1])

%% Error functions 

% We use the error function suggested in the paper of: 
% On Measuring the Accuracy of SLAM Algorithms, Grisetti, Stachniss (Literature Research\Thesis most used material)
% Eq 4. error(delta) = 1/N.delta_segments*sum(trans((delta_actual-delta_ref)^2)+rot((delta_actual-delta_ref)^2))
size = size(pose_x,2); %need just one of them variable size(pose_x)=size(pose_y)=size(X)=size(Y)
delta_trans_actual = zeros(1,size-1);
delta_trans_ref = zeros(1,size-1);
delta_rot_actual = zeros(1,size-1);
delta_rot_ref = zeros(1,size-1);
 
 % calculate translation deltas of pose_x and pose_y (actual pose)
for index=1:size-1
    delta_trans_actual(1,index) = sqrt((pose_x(1,index+1)-pose_x(1,index))^2+(pose_y(1,index+1)-pose_y(1,index))^2);
end

 %calculate translation deltas of X and Y (reference pose)
for index=1:size-1
    delta_trans_ref(1,index) = sqrt((X(1,index+1)-X(1,index))^2+(Y(1,index+1)-Y(1,index))^2);
end

 %calculate rotation deltas of rot vector (actual rotation) [rad]
for index=1:size-1
    delta_rot_actual(1,index) = abs(rot(1,index+1)-rot(1,index));
end

 %calculate rotation deltas of rot vector (reference rotation) [rad]
for index=1:size-1
    delta_rot_ref(1,index) = abs(TH(1,index+1)-TH(1,index));
end
 
%calculate the energy difference of the translational component, acc to 4)
for index=1:size-1
    delta_trans_result(1,index) = delta_trans_actual(1,index)-delta_trans_ref(1,index);
end
delta_trans_result = delta_trans_result.^2;
%calculate the energy difference of the translational component, acc to 4)
for index=1:size-1
    delta_rot_result(1,index) = delta_rot_actual(1,index) - delta_rot_ref(1,index);
end
delta_rot_result = delta_rot_result.^2;

%% Translational and rotational error
translation = (1/(size-1))*(sum(delta_trans_result));
rotation = (1/(size-1))*(sum(delta_rot_result));
error = translation+rotation;

%% Error plots
%plot relative distance between points, it is more of woww cool

%translation
for index=1:53
    distance_t(1,index) = sqrt((pose_x(1,index)-X(1,index))^2+(pose_y(1,index)-Y(1,index))^2);
end
average_t = mean(distance_t);
%rotation [deg]
for index=1:53
    distance_r(1,index) = (abs(rot(1,index)-TH(1,index)))*(180/pi);
end
average_r = mean(distance_r);
%make full vector to plot
path = 1:1:53;

figure
plot(path,distance_t,'b--o','LineWidth',1);
hold on
plot([path(1) path(end)],[average_t average_t], 'm--','LineWidth',2)
for index=1:53
    line([path(index) path(index)],[0 distance_t(index)]);
end
xlabel('Distance traveled [m]');ylabel('Translation deviation [m]');
legend('Deviation from reference path','Mean');
title('Error with default alfas')

figure
plot(path,distance_r,'b--o','LineWidth',1);
hold on
plot([path(1) path(end)],[average_r average_r], 'm--','LineWidth',2)
for index=1:53
    line([path(index) path(index)],[0 distance_r(index)]);
end
xlabel('Distance traveled [m]');ylabel('Rotation deviation [deg]');
legend('Deviation from reference path','Mean');
title('Error with default alfas');

%create vectore reference path for the curvature
refer_y = zeros(1,53);

refer_y(1,1:22) = 0;
refer_y(1,22:35) = 90;
refer_y(1,35:45) = 180;
refer_y(1,45:53) = -90;

figure
plot(path,rot*(180/pi),'b--o','LineWidth',1)
hold on
plot(path,refer_y,'r--','LineWidth',1)
xlabel('Distance traveled [m]');ylabel('Rotation of the robot during path [deg]');
title('Robot rotations during path - 0,90,180,-90 in order (making 4 corners)');

%% Clear temporary variables
clearvars filename delimiter startRow formatSpec fileID dataArray ans;