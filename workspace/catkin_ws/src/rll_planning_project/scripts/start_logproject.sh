#!/bin/bash

# Build the catkin_ws
cd $(pwd)/../../.. ; catkin_make

# Launch the nodes
rm -rf outlog
xterm  -hold -e "source devel/setup.bash; roslaunch rll_planning_project moveit_planning_execution.launch 2>&1 | tee outlog" &
sleep 10
xterm  -hold -e "source devel/setup.bash; roslaunch rll_planning_project planning_iface.launch 2>&1 | tee outlog" &
sleep 4	
xterm  -hold -e "source devel/setup.bash; roslaunch rll_planning_project path_planner.launch 2>&1 | tee outlog" &
sleep 4
xterm  -hold -e "source devel/setup.bash; roslaunch rll_project_runner run_project.launch 2>&1 | tee outlog" &

# Termiante the project
echo "Press Enter key to terminate the project"
read -s -n 1 key
if [[ $key = "" ]]; then 
	killall -e xterm
	echo "Project terminated!"
fi

