//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBTweetComponentTransformer_h
#define ONBTweetComponentTransformer_h
@import Foundation;

#include "ONBComponentTransformer.h"

@class TFNLayoutMetrics, UIView;

@interface ONBTweetComponentTransformer : ONBComponentTransformer {
    /* instance variables */
    TFNLayoutMetrics *_previousLayoutMetrics;
    UIView *_componentView;
}

/* class methods */
+ (Class)mutableComponentClass;

/* instance methods */
- (id)componentView;

@end

#endif /* ONBTweetComponentTransformer_h */
