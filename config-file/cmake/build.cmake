find_program(APP_DATE date)
if(NOT APP_DATE)
	message(FATAL_ERROR "Unable to find program 'date'")
endif(NOT APP_DATE)

find_program(APP_UNAME uname)
if(NOT APP_UNAME)
	message(FATAL_ERROR "Unable to find program 'uname'")
endif(NOT APP_UNAME)

# mark_as_advanced(APP_DATE APP_UNAME)

#BUILD_DATE=$(LANG=en_US LC_ALL=en_US LOCALE=en_US date)
#BUILD_ARCH="$(uname -sr) ($(uname -m))"
execute_process(COMMAND ${APP_DATE} RESULT_VARIABLE RETVAL OUTPUT_VARIABLE
	BUILD_DATE OUTPUT_STRIP_TRAILING_WHITESPACE)
execute_process(COMMAND ${APP_UNAME} -srm RESULT_VARIABLE RETVAL
	OUTPUT_VARIABLE BUILD_ARCH OUTPUT_STRIP_TRAILING_WHITESPACE)
