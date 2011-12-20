LOCAL_PATH:= $(call my-dir)

# ========================================================
# nano
# ========================================================
include $(CLEAR_VARS)

LOCAL_SRC_FILES:= \
	src/browser.c \
	src/chars.c \
	src/color.c \
	src/cut.c \
	src/files.c \
	src/global.c \
	src/help.c \
	src/move.c \
	src/nano.c \
	src/prompt.c \
	src/rcfile.c \
	src/search.c \
	src/text.c \
	src/utils.c \
	src/winio.c
LOCAL_C_INCLUDES += \
	$(LOCAL_PATH) \
	external/clearsilver \
	external/clearsilver/util/regex \
	external/libncurses/include
LOCAL_CFLAGS += \
	-DHAVE_CONFIG_H \
	-DLOCALEDIR=\"/data/locale\" \
	-DSYSCONFDIR=\"/system/etc/nano\"
LOCAL_SHARED_LIBRARIES += \
	libncurses
LOCAL_STATIC_LIBRARIES += \
	libclearsilverregex
LOCAL_MODULE := nano
LOCAL_MODULE_PATH := $(TARGET_OUT_OPTIONAL_EXECUTABLES)
LOCAL_MODULE_TAGS := debug
include $(BUILD_EXECUTABLE)


# ========================================================
# nano configs
# ========================================================
etc_files := $(shell ls -1 $(LOCAL_PATH)/etc/)

NANO_ETC := $(TARGET_OUT)/etc/$(LOCAL_MODULE)/
NANO_CONFIGS := $(addprefix $(LOCAL_PATH)/etc/,$(etc_files))
$(NANO_CONFIGS): NANO_BINARY := $(LOCAL_MODULE)
$(NANO_CONFIGS): $(LOCAL_INSTALLED_MODULE)
#	@echo "Install: $@ -> $(NANO_ETC)"
	@mkdir -p $(NANO_ETC)
	$(hide) cp $@ $(NANO_ETC)

ALL_DEFAULT_INSTALLED_MODULES += $(NANO_CONFIGS)

ALL_MODULES.$(LOCAL_MODULE).INSTALLED := \
	$(ALL_MODULES.$(LOCAL_MODULE).INSTALLED) $(NANO_CONFIGS)

# ========================================================
include $(call all-makefiles-under,$(LOCAL_PATH))
