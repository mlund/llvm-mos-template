find_package(mega65libc REQUIRED)

add_executable(myprog myprog.c)
set_target_properties(myprog PROPERTIES OUTPUT_NAME myprog.prg)
target_link_libraries(myprog PRIVATE mega65libc::mega65libc)
