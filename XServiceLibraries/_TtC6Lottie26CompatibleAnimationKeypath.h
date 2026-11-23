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
