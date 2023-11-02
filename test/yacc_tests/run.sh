GREEN='\033[0;32m'
NC='\033[0m' # No Color
for f in ./*.js
do
    echo "${GREEN}\nPROCESSING $f\n${NC}"
    ./../../build/parser $f
done
