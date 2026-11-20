//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6Lottie26CompatibleAnimationKeypath_h
#define _TtC6Lottie26CompatibleAnimationKeypath_h
@import Foundation;

@class Lottie.AnimationKeypath, NSObject;

@interface Lottie.CompatibleAnimationKeypath : NSObject { // (Swift)
    /* instance variables */
    Lottie.AnimationKeypath animationKeypath;
}

/* instance methods */
- (id)initWithKeypath:(id)keypath;
- (id)initWithKeys:(id)keys;
- (id)init;

@end

#endif /* _TtC6Lottie26CompatibleAnimationKeypath_h */
