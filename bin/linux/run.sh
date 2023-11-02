GREEN='\033[0;32m'
NC='\033[0m' # No Color

cd ../../
echo "${GREEN}\nPROCESSING default_test.js\nnote: If you want to run other tests, go to test folder and enter\nsome directory. There are run.sh files\n${NC}"
./build/parser ./test/default_test.js
