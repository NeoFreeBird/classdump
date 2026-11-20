//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtP6Lottie31CompatibleAnimationFontProvider__Protocol_h
#define _TtP6Lottie31CompatibleAnimationFontProvider__Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol Lottie.CompatibleAnimationFontProvider <NSObject>

@required

/* required instance methods */
- (const struct __CTFont *)fontForFamily:(id)family size:(double)size;

@optional

@end

#endif /* _TtP6Lottie31CompatibleAnimationFontProvider__Protocol_h */
