//
#ifndef _TtP6Lottie32CompatibleAnimationImageProvider__Protocol_h
#define _TtP6Lottie32CompatibleAnimationImageProvider__Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol Lottie.CompatibleAnimationImageProvider <NSObject>

@required

/* required instance methods */
- (struct CGImage *)imageForAssetWithName:(id)name;

@optional

@end

#endif /* _TtP6Lottie32CompatibleAnimationImageProvider__Protocol_h */
