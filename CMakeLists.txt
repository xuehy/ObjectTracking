project(surfacetracking)
link_libraries(/usr/lib64/libopencv_calib3d.so /usr/lib64/libopencv_contrib.so 
		/usr/lib64/libopencv_core.so /usr/lib64/libopencv_features2d.so 
		/usr/lib64/libopencv_flann.so /usr/lib64/libopencv_gpu.so 
		/usr/lib64/libopencv_highgui.so /usr/lib64/libopencv_imgproc.so 
		/usr/lib64/libopencv_legacy.so /usr/lib64/libopencv_ml.so 
		/usr/lib64/libopencv_nonfree.so /usr/lib64/libopencv_objdetect.so 
		/usr/lib64/libopencv_photo.so /usr/lib64/libopencv_stitching.so 
		/usr/lib64/libopencv_ts.so /usr/lib64/libopencv_video.so 
		/usr/lib64/libopencv_videostab.so  
)

#source directory
AUX_SOURCE_DIRECTORY(. DIR_SRCS)
#set environment variable
SET(SOURCEs
${DIR_SRCS}
)



add_executable(surfacetracking main.cpp init.cpp GetFrame.cpp)

