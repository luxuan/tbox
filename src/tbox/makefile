# prefix
include $(PRO_DIR)/prefix.mak

# module name
NAMES 					= tbox

# module type
tbox_TYPE 				= LIB

# config
tbox_CONFIG 			= y

# basic files
tbox_C_FILES 			+= \
						tbox \
						math/math \
						math/int32 \
						math/fixed16 \
						math/random \
						math/impl/random_linear \
						prefix/state \
						memory/pool \
						memory/fixed_pool \
						memory/large_pool \
						memory/small_pool \
						memory/string_pool \
						memory/impl/prefix \
						memory/impl/static_fixed_pool \
						memory/impl/static_large_pool \
						memory/impl/native_large_pool \
						memory/memory \
						memory/buffer \
						memory/static_buffer \
						memory/queue_buffer \
						string/string \
						string/static_string \
						algorithm/sort \
						algorithm/heap_sort \
						algorithm/quick_sort \
						algorithm/insert_sort \
						algorithm/bubble_sort \
						algorithm/find \
						algorithm/find_if \
						algorithm/rfind \
						algorithm/rfind_if \
						algorithm/binary_find \
						algorithm/binary_find_if \
						algorithm/distance \
						algorithm/walk \
						algorithm/rwalk \
						algorithm/count \
						algorithm/count_if \
						algorithm/remove \
						algorithm/remove_if \
						algorithm/remove_first \
						algorithm/remove_first_if \
						algorithm/predicate \
						container/heap \
						container/stack \
						container/vector \
						container/queue \
						container/circle_queue \
						container/priority_queue \
						container/hash_map \
						container/hash_set \
						container/list \
						container/list_entry \
						container/single_list \
						container/single_list_entry \
						container/bloom_filter \
						container/iterator \
						container/iterator/str \
						container/iterator/ptr \
						container/iterator/mem \
						container/iterator/long \
						container/iterator/size \
						container/element/str \
						container/element/ptr \
						container/element/mem \
						container/element/hash \
						container/element/true \
						container/element/null \
						container/element/long \
						container/element/size \
						container/element/uint8 \
						container/element/uint16 \
						container/element/uint32 \
						network/network \
						network/dns/cache \
						network/dns/server \
						network/dns/looker \
						network/url \
						network/ipv4 \
						network/ipv6 \
						network/ipaddr \
						network/hwaddr \
						network/http \
						network/cookies \
						network/impl/http/date \
						network/impl/http/option \
						network/impl/http/status \
						network/impl/http/method \
						asio/aioo \
						asio/aiop \
						stream/static_stream \
						stream/stream \
						stream/filter \
						stream/impl/stream/http \
						stream/impl/stream/file \
						stream/impl/stream/data \
						stream/impl/stream/sock \
						stream/impl/stream/filter \
						stream/impl/filter/cache \
						stream/impl/filter/chunked \
						stream/transfer \
						utils/bits \
						utils/md5 \
						utils/sha \
						utils/crc \
						utils/url \
						utils/dump \
						utils/used \
						utils/trace \
						utils/base32 \
						utils/base64 \
						utils/singleton \
						utils/lock_profiler \
						libc/libc \
						libc/misc/time/time \
						libc/misc/time/mktime \
						libc/misc/time/gmmktime \
						libc/misc/time/gmtime \
						libc/misc/time/localtime \
						libc/stdio/puts \
						libc/stdio/wputs \
						libc/stdio/printf \
						libc/stdio/wprintf \
						libc/stdio/sprintf \
						libc/stdio/snprintf \
						libc/stdio/swprintf \
						libc/stdio/vsnprintf \
						libc/stdio/vswprintf \
						libc/stdio/printf_object \
						libc/stdlib/stdlib \
						libc/stdlib/random \
						libc/stdlib/mbstowcs \
						libc/stdlib/wcstombs \
						libc/string/memset \
						libc/string/memcpy \
						libc/string/memcmp \
						libc/string/memmov \
						libc/string/memdup \
						libc/string/strlen \
						libc/string/strnlen \
						libc/string/strcat \
						libc/string/strncat \
						libc/string/strcpy \
						libc/string/strncpy \
						libc/string/strlcpy \
						libc/string/strdup \
						libc/string/strndup \
						libc/string/strcmp \
						libc/string/strncmp \
						libc/string/stricmp \
						libc/string/strnicmp \
						libc/string/strstr \
						libc/string/stristr \
						libc/string/strnstr \
						libc/string/strnistr \
						libc/string/strrstr \
						libc/string/strirstr \
						libc/string/strnrstr \
						libc/string/strnirstr \
						libc/string/strchr \
						libc/string/strichr \
						libc/string/strrchr \
						libc/string/strirchr \
						libc/string/strnrchr \
						libc/string/strnirchr \
						libc/string/wcslen \
						libc/string/wcsnlen \
						libc/string/wcscat \
						libc/string/wcsncat \
						libc/string/wcscpy \
						libc/string/wcsncpy \
						libc/string/wcslcpy \
						libc/string/wcsdup \
						libc/string/wcsndup \
						libc/string/wcscmp \
						libc/string/wcsncmp \
						libc/string/wcsicmp \
						libc/string/wcsnicmp \
						libc/string/wcsstr \
						libc/string/wcsistr \
						libc/string/wcsrstr \
						libc/string/wcsirstr \
						libc/string/wcsnrstr \
						libc/string/wcsnirstr \
						libc/string/wcschr \
						libc/string/wcsichr \
						libc/string/wcsrchr \
						libc/string/wcsirchr \
						libc/string/wcsnrchr \
						libc/string/wcsnirchr \
						libm/libm \
						libm/idivi8 \
						libm/ilog2i \
						libm/isqrti \
						libm/isqrti64

# float
tbox_C_FILES-$(TB_CONFIG_TYPE_FLOAT) += \
						libm/isinf \
						libm/isinff \
						libm/isfin \
						libm/isfinf \
						libm/isnan \
						libm/isnanf \
						libm/sqrt \
						libm/sqrtf \
						libm/sin \
						libm/sinf \
						libm/cos \
						libm/cosf \
						libm/tan \
						libm/tanf \
						libm/atan \
						libm/atanf \
						libm/asin \
						libm/asinf \
						libm/acos \
						libm/acosf \
						libm/exp \
						libm/expf \
						libm/expi \
						libm/expif \
						libm/exp1 \
						libm/exp1f \
						libm/atan2 \
						libm/atan2f \
						libm/log2 \
						libm/log2f \
						libm/sincos \
						libm/sincosf \
						libm/pow

# platform
tbox_C_FILES 			+= \
						platform/dns \
						platform/page \
						platform/path \
						platform/file \
						platform/time \
						platform/sched \
						platform/timer \
						platform/ltimer \
						platform/print \
						platform/mutex \
						platform/event \
						platform/socket \
						platform/thread \
						platform/memory \
						platform/process \
						platform/dynamic \
						platform/atomic64 \
						platform/ifaddrs \
						platform/platform \
						platform/hostname \
						platform/processor \
						platform/directory \
						platform/semaphore \
						platform/backtrace \
						platform/cache_time \
						platform/thread_pool \
						platform/environment \
						platform/thread_store \
						platform/aioo \
						platform/aiop 


# arm
tbox_ASM_FILES-$(ARM) 	+= utils/impl/crc_arm

# openssl
ifneq ($(POLARSSL),y)
tbox_C_FILES-$(OPENSSL) += \
						network/impl/ssl/openssl 
endif

# polarssl
tbox_C_FILES-$(POLARSSL) += \
						network/impl/ssl/polarssl 

# xml
tbox_C_FILES-$(TB_CONFIG_MODULE_HAVE_XML) += \
						xml/node \
						xml/reader \
						xml/writer

# charset
tbox_C_FILES-$(TB_CONFIG_MODULE_HAVE_CHARSET) += \
						charset/charset \
						charset/ascii \
						charset/utf8 \
						charset/utf16 \
						charset/utf32 \
						charset/ucs2 \
						charset/ucs4 \
						charset/gb2312 \
						charset/iso8859 \
						stream/impl/filter/charset

# asio
ifeq ($(TB_CONFIG_MODULE_HAVE_ASIO),y)
tbox_C_FILES 			+= \
						asio/aico \
						asio/aicp \
						asio/http \
						asio/dns \
						stream/async_stream \
						stream/impl/async_stream/http \
						stream/impl/async_stream/file \
						stream/impl/async_stream/data \
						stream/impl/async_stream/sock \
						stream/impl/async_stream/filter \
						stream/impl/async_stream/prefix \
						stream/async_transfer \
						stream/transfer_pool \
 						platform/aicp

tbox_C_FILES-$(OPENSSL) += \
						asio/ssl 
tbox_C_FILES-$(POLARSSL) += \
						asio/ssl 
endif

# object
ifeq ($(TB_CONFIG_MODULE_HAVE_OBJECT),y)
tbox_C_FILES 			+= \
						utils/option \
						container/element/obj \
						object/object \
						object/null \
						object/data \
						object/date \
						object/array \
						object/string \
						object/number \
						object/boolean \
						object/dictionary \
						object/impl/reader/bin \
						object/impl/reader/json \
						object/impl/reader/bplist \
						object/impl/reader/reader \
						object/impl/writer/bin \
						object/impl/writer/json \
						object/impl/writer/bplist \
						object/impl/writer/writer

tbox_C_FILES-$(TB_CONFIG_MODULE_HAVE_XML) += \
						object/impl/reader/xml \
						object/impl/writer/xml \
						object/impl/reader/xplist \
						object/impl/writer/xplist
endif

# zip
ifeq ($(TB_CONFIG_MODULE_HAVE_ZIP),y)
tbox_C_FILES 			+= \
						zip/zip \
						zip/vlc/fixed \
						zip/vlc/golomb \
						zip/vlc/gamma \
						zip/rlc \
						stream/impl/filter/zip 

tbox_C_FILES-$(ZLIB) += \
						zip/zlib \
						zip/gzip \
						zip/zlibraw 
endif

# database
ifeq ($(TB_CONFIG_MODULE_HAVE_DATABASE),y)
tbox_C_FILES 			+= \
						database/sql \
						database/value 

tbox_C_FILES-$(MYSQL) 	+= \
						database/impl/mysql

tbox_C_FILES-$(SQLITE3) += \
						database/impl/sqlite3
endif

# ios
tbox_M_FILES-$(IOS) += \
						platform/mach/ios/directory

# android
tbox_C_FILES-$(ANDROID) += \
						platform/linux/android/android \
						platform/linux/android/directory 

# windows
tbox_C_FILES-$(MSVC)$(MINGW)$(CYGWIN) += \
						platform/windows/socket_pool \
						platform/windows/interface/interface \
						platform/windows/interface/user32 \
						platform/windows/interface/ws2_32 \
						platform/windows/interface/dbghelp \
						platform/windows/interface/shell32 \
						platform/windows/interface/mswsock \
						platform/windows/interface/kernel32 \
						platform/windows/interface/iphlpapi 

# flags
tbox_CXFLAGS 			+= -D__tb_prefix__=\"tbox\"

# include files
tbox_INC_FILES 			= \
						tbox.h \
						config.h \
						prefix.h \
						prefix/prefix.h \
						prefix/type.h \
						prefix/malloc.h \
						prefix/utils.h \
						prefix/limits.h \
						prefix/cpu.h \
						prefix/asm.h \
						prefix/arch.h \
						prefix/keyword.h \
						prefix/compiler.h \
						prefix/assembler.h \
						prefix/version.h \
						prefix/endian.h \
						prefix/assert.h \
						prefix/check.h \
						prefix/abort.h \
						prefix/trace.h \
						prefix/state.h \
						prefix/packed.h \
						prefix/config.h \
						prefix/prefix.S \
						prefix/asm/prefix.h \
						prefix/asm/prefix.S \
						prefix/asm/asm.h \
						prefix/asm/cache.h \
						prefix/asm/arm/prefix.h \
						prefix/asm/arm/prefix.S \
						memory/pool.h \
						memory/fixed_pool.h \
						memory/large_pool.h \
						memory/small_pool.h \
						memory/string_pool.h \
						memory/prefix.h \
						memory/memory.h \
						memory/buffer.h \
						memory/queue_buffer.h \
						memory/static_buffer.h \
						asio/asio.h \
						asio/prefix.h \
						asio/aioo.h \
						asio/aioe.h \
						asio/aiop.h \
						asio/aicp.h \
						asio/aico.h \
						asio/aice.h \
						asio/http.h \
						asio/dns.h \
						asio/ssl.h \
						math/prefix.h \
						math/math.h \
						math/fixed.h \
						math/fixed6.h \
						math/fixed16.h \
						math/fixed30.h \
						math/int32.h \
						math/random.h \
						math/impl/fixed16_arm.h \
						math/impl/fixed30_arm.h \
						string/prefix.h \
						string/string.h \
						string/string.h \
						string/static_string.h \
						algorithm/prefix.h \
						algorithm/algorithm.h \
						algorithm/for.h \
						algorithm/for_if.h \
						algorithm/rfor.h \
						algorithm/rfor_if.h \
						algorithm/sort.h \
						algorithm/heap_sort.h \
						algorithm/quick_sort.h \
						algorithm/insert_sort.h \
						algorithm/bubble_sort.h \
						algorithm/find.h \
						algorithm/find_if.h \
						algorithm/rfind.h \
						algorithm/rfind_if.h \
						algorithm/binary_find.h \
						algorithm/binary_find_if.h \
						algorithm/distance.h \
						algorithm/walk.h \
						algorithm/rwalk.h \
						algorithm/count.h \
						algorithm/count_if.h \
						algorithm/remove.h \
						algorithm/remove_if.h \
						algorithm/remove_first.h \
						algorithm/remove_first_if.h \
						algorithm/predicate.h \
						container/prefix.h \
						container/container.h \
						container/element.h \
						container/heap.h \
						container/stack.h \
						container/vector.h \
						container/iterator.h \
						container/queue.h \
						container/circle_queue.h \
						container/priority_queue.h \
						container/hash_map.h \
						container/hash_set.h \
						container/list.h \
						container/list_entry.h \
						container/single_list.h \
						container/single_list_entry.h \
						container/bloom_filter.h \
						platform/platform.h \
						platform/prefix.h \
						platform/dns.h \
						platform/page.h \
						platform/file.h \
						platform/path.h \
						platform/time.h \
						platform/sched.h \
						platform/mutex.h \
						platform/timer.h \
						platform/ltimer.h \
						platform/thread.h \
						platform/socket.h \
						platform/event.h \
						platform/print.h \
						platform/atomic.h \
						platform/memory.h \
						platform/barrier.h \
						platform/dynamic.h \
						platform/process.h \
						platform/ifaddrs.h \
						platform/hostname.h \
						platform/spinlock.h \
						platform/atomic64.h \
						platform/processor.h \
						platform/directory.h \
						platform/exception.h \
						platform/backtrace.h \
						platform/semaphore.h \
						platform/cache_time.h \
						platform/environment.h \
						platform/thread_pool.h \
						platform/thread_store.h \
						platform/compiler/prefix.h \
						platform/compiler/gcc/prefix.h \
						platform/compiler/gcc/barrier.h \
						platform/compiler/gcc/atomic.h \
						platform/compiler/gcc/atomic64.h \
						platform/arch/frame.h \
						platform/arch/prefix.h \
						platform/arch/atomic.h \
						platform/arch/barrier.h \
						platform/arch/x86/frame.h \
						platform/arch/x86/prefix.h \
						platform/arch/x86/atomic.h \
						platform/arch/x86/barrier.h \
						platform/arch/x64/frame.h \
						platform/arch/x64/prefix.h \
						platform/arch/x64/atomic.h \
						platform/arch/x64/barrier.h \
						platform/arch/arm/prefix.h \
						platform/arch/arm/atomic.h \
						platform/windows/prefix.h \
						platform/windows/atomic.h \
						platform/windows/barrier.h \
						platform/windows/atomic64.h \
						platform/windows/exception.h \
						platform/windows/interface/prefix.h \
						platform/windows/interface/interface.h \
						platform/windows/interface/user32.h \
						platform/windows/interface/shell32.h \
						platform/windows/interface/kernel32.h \
						platform/windows/interface/mswsock.h \
						platform/windows/interface/dbghelp.h \
						platform/windows/interface/iphlpapi.h \
						platform/windows/interface/ws2_32.h \
						platform/libc/prefix.h \
						platform/libc/exception.h \
						platform/mach/prefix.h \
						platform/mach/barrier.h \
						network/prefix.h \
						network/network.h \
						network/ipv4.h \
						network/ipv6.h \
						network/hwaddr.h \
						network/ipaddr.h \
						network/url.h \
						network/ssl.h \
						network/dns/dns.h \
						network/dns/cache.h \
						network/dns/looker.h \
						network/dns/server.h \
						network/dns/prefix.h \
						network/http.h \
						network/prefix.h \
						network/cookies.h \
						charset/charset.h \
						charset/prefix.h \
						stream/prefix.h \
						stream/stream.h \
						stream/stream.h \
						stream/async_stream.h \
						stream/static_stream.h \
						stream/transfer_pool.h \
						stream/async_transfer.h \
						stream/transfer.h \
						stream/transfer.h \
						stream/filter.h \
						object/prefix.h \
						object/object.h \
						object/null.h \
						object/data.h \
						object/date.h \
						object/array.h \
						object/number.h \
						object/string.h \
						object/boolean.h \
						object/dictionary.h \
						utils/prefix.h \
						utils/utils.h \
						utils/bits.h \
						utils/sha.h \
						utils/md5.h \
						utils/crc.h \
						utils/url.h \
						utils/used.h \
						utils/dump.h \
						utils/trace.h \
						utils/option.h \
						utils/base32.h \
						utils/base64.h \
						utils/singleton.h \
						utils/lock_profiler.h \
						utils/impl/bits_x86.h \
						utils/impl/bits_arm.h \
						utils/impl/bits_sh4.h \
						utils/impl/bits_gcc.h \
						utils/base64.h \
						xml/xml.h \
						xml/prefix.h \
						xml/node.h \
						xml/reader.h \
						xml/writer.h \
						database/prefix.h \
						database/sql.h \
						database/value.h \
						database/database.h \
						zip/prefix.h \
						zip/zip.h \
						zip/vlc.h \
						libc/prefix.h \
						libc/libc.h \
						libc/stdlib/prefix.h \
						libc/stdlib/stdlib.h \
						libc/stdio/prefix.h \
						libc/stdio/stdio.h \
						libc/stdio/printf_object.h \
						libc/string/prefix.h \
						libc/string/string.h \
						libc/misc/misc.h \
						libc/misc/prefix.h \
						libc/misc/ctype.h \
						libc/misc/limits.h \
						libc/misc/stdarg.h \
						libc/misc/setjmp.h \
						libc/misc/signal.h \
						libc/misc/time/prefix.h \
						libc/misc/time/time.h \
						libc/misc/time/type.h \
						libm/prefix.h \
						libm/math.h \
						libm/libm.h \
						libm/inf.h \
						libm/nan.h \
						libm/maf.h \
						libm/mif.h \
						libm/pi.h \
						libm/fabs.h \
						libm/round.h \
						libm/ceil.h \
						libm/floor.h

# demo
SUB_PROS-$(DEMO) 		+= ../demo

# suffix
include $(PRO_DIR)/suffix.mak

