//
#ifndef ONBBooleanComponentTransformer_h
#define ONBBooleanComponentTransformer_h
@import Foundation;

#include "ONBComponentTransformer.h"

@class UIView;

@interface ONBBooleanComponentTransformer : ONBComponentTransformer {
    /* instance variables */
    UIView *_componentView;
}

/* class methods */
+ (Class)mutableComponentClass;

/* instance methods */
- (id)detailText;
- (id)componentView;
- (void)private_didTapSwitchControl:(id)control;

@end

#endif /* ONBBooleanComponentTransformer_h */
