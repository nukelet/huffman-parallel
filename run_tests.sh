if [[ ! -d build ]]
then
    mkdir build
fi

cd build
cmake ..
cd ..
cmake --build build
