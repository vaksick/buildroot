diff --git a/package/freetype/ft2build.h.patch b/package/freetype/ft2build.h.patch
--- a/ft2build.h
+++ b/ft2build.h
@@ -37,7 +37,7 @@
-#include <freetype/config/ftheader.h>
+#include <freetype2/freetype/config/ftheader.h>
 
 #endif /* FT2BUILD_H_ */