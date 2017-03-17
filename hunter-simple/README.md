# hunter-simple

## Build steps
* Set `HUNTER_ROOT` environment variable.(Recommended, see [alternatives](https://github.com/hunter-packages/gate#effects))
* Generate project: `cmake -H. -B_builds -DHUNTER_STATUS_DEBUG=ON -DCMAKE_BUILD_TYPE=Debug`.
* Run build: `cmake --build _builds --config Debug`.
* Run test: `cd _builds && ctest -C Debug -VV`.
