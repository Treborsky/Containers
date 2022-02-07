add_library(Containers SHARED 
	linked_list.cc
	linked_list.h
	node.cc
	node.h
)
target_link_libraries(Main Containers)
