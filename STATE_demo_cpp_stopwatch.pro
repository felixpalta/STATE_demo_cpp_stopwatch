TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    watchstartedstate.cpp \
    watchcontext.cpp \
    watchstoppedstate.cpp \
    watchpausedstate.cpp

*g++*{
QMAKE_CXXFLAGS +=   -Weffc++ -std=c++11 -pedantic -Wall -Wextra \
                    -Wunreachable-code -Wshadow \
                    -Wold-style-cast -Wnon-virtual-dtor  \
                    -Woverloaded-virtual \
                    -Wenum-compare  \
                                        #OFF for QT
                    -Wctor-dtor-privacy	\
                    -Wsign-conversion  \
                    -Wconversion \
}

HEADERS += \
    iwatchstate.h \
    watchstartedstate.h \
    watchcontext.h \
    watchstoppedstate.h \
    watchpausedstate.h \
    iwatchcontext.h
