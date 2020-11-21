#!/bin/bash
OUTPUTS="tests/outputs"
TEST_EXEC="tests/exec"

# COLORS
OK='\033[0;32m'
ERROR='\033[0;31m'
clear
./$TEST_EXEC > $OUTPUTS/user
diff -U 3 $OUTPUTS/expectation $OUTPUTS/user > /dev/null
if [ $? -eq 0 ];
then
	echo -e "${OK}The tests passed !"
else
	echo -e "${ERROR}The tests failed !"
fi
