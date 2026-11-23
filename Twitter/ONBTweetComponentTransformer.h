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
