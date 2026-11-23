//
#ifndef ONBUserComponentTransformer_h
#define ONBUserComponentTransformer_h
@import Foundation;

#include "ONBComponentTransformer.h"

@class UIView;

@interface ONBUserComponentTransformer : ONBComponentTransformer {
    /* instance variables */
    UIView *_componentView;
}

/* class methods */
+ (Class)mutableComponentClass;

/* instance methods */
- (id)componentView;

@end

#endif /* ONBUserComponentTransformer_h */
