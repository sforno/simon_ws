## *********************************************************
## 
## File autogenerated for the costmap_converter package 
## by the dynamic_reconfigure package.
## Please do not edit.
## 
## ********************************************************/

from dynamic_reconfigure.encoding import extract_params

inf = float('inf')

config_description = {'upper': 'DEFAULT', 'lower': 'groups', 'srcline': 246, 'name': 'Default', 'parent': 0, 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'cstate': 'true', 'parentname': 'Default', 'class': 'DEFAULT', 'field': 'default', 'state': True, 'parentclass': '', 'groups': [], 'parameters': [{'srcline': 293, 'description': 'Parameter for DB_Scan, maximum distance to neighbors [m]', 'max': 10.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'cluster_max_distance', 'edit_method': '', 'default': 0.4, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 293, 'description': 'Parameter for DB_Scan: minimum number of points that define a cluster', 'max': 20, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'cluster_min_pts', 'edit_method': '', 'default': 2, 'level': 0, 'min': 1, 'type': 'int'}, {'srcline': 293, 'description': 'Parameter for DB_Scan: maximum number of points that define a cluster (limit cluster size to avoid large L- and U-shapes)', 'max': 200, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'cluster_max_pts', 'edit_method': '', 'default': 30, 'level': 0, 'min': 2, 'type': 'int'}, {'srcline': 293, 'description': 'Clear keypoints of the convex polygon that are close to each other [distance in meters] (0: keep all)', 'max': 10.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'convex_hull_min_pt_separation', 'edit_method': '', 'default': 0.1, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 293, 'description': 'Minimum distance from a point to the line to be counted as support point', 'max': 10.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'support_pts_max_dist', 'edit_method': '', 'default': 0.3, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 293, 'description': 'A line is only defined, if the distance between two consecutive support points is less than this treshold. Set to 0 in order to deactivate this check.', 'max': 10.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'support_pts_max_dist_inbetween', 'edit_method': '', 'default': 1.0, 'level': 0, 'min': 0.0, 'type': 'double'}, {'srcline': 293, 'description': 'Minimum number of support points to represent a line', 'max': 50, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'min_support_pts', 'edit_method': '', 'default': 2, 'level': 0, 'min': 0, 'type': 'int'}], 'type': '', 'id': 0}

min = {}
max = {}
defaults = {}
level = {}
type = {}
all_level = 0

#def extract_params(config):
#    params = []
#    params.extend(config['parameters'])    
#    for group in config['groups']:
#        params.extend(extract_params(group))
#    return params

for param in extract_params(config_description):
    min[param['name']] = param['min']
    max[param['name']] = param['max']
    defaults[param['name']] = param['default']
    level[param['name']] = param['level']
    type[param['name']] = param['type']
    all_level = all_level | param['level']

