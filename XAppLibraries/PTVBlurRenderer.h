//
#ifndef PTVBlurRenderer_h
#define PTVBlurRenderer_h
@import Foundation;

#include "PTVBlurContext.h"

@class NSObject;

@interface PTVBlurRenderer : NSObject {
    /* instance variables */
    PTVBlurContext *_context;
}

/* class methods */
+ (id)_sharedRenderer;
+ (id)_sharedQueue;
+ (void)blurImage:(id)image blurImageStyle:(long long)style onComplete:(id /* block */)complete;

/* instance methods */
- (id)init;
- (id)blurImage:(id)image blurImageStyle:(long long)style;

@end

#endif /* PTVBlurRenderer_h */
