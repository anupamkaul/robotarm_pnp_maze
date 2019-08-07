#!/bin/sh

# setup up search directories (use /home/workspace/catkin_ws for standard builds)
catkin_dir=/home/anupam/robond/optional/kuka_challenge/workspace/catkin_ws
catkin_src_dir=$catkin_dir/src

# The simulation can be started with:
xterm -hold -e "source devel/setup.bash; roslaunch rll_planning_project moveit_planning_execution.launch" &
sleep 5

# And the planning interface with:
xterm -hold -e "source devel/setup.bash; roslaunch rll_planning_project planning_iface.launch" & 
sleep 5

# The python node with the path planning algorithm is launched with:
xterm -hold -e "source devel/setup.bash; roslaunch rll_planning_project path_planner.launch" &
sleep 5

# A single planning and path execution run can be initiated with:
#xterm -hold -e "source devel/setup.bash; roslaunch rll_project_runner run_project.launch" &
#sleep 5


# notes --

# The example path planning code with exemplary calls to the Move and CheckPath services can be found in ./scripts/path_planner.py.

#The initial position and the dimensions of the grasp object can be changed in the launch file for the planning interface (./launch/planning_iface.launch). The parameters can also be altered on the command-line by passing them as arguments to the launch command.

# notes # --
