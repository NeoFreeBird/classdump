//
#ifndef ONBPreciseLocationComponentTransformer_h
#define ONBPreciseLocationComponentTransformer_h
@import Foundation;

#include "ONBComponentTransformer.h"

@class UIView;

@interface ONBPreciseLocationComponentTransformer : ONBComponentTransformer {
    /* instance variables */
    UIView *_componentView;
}

/* class methods */
+ (Class)mutableComponentClass;

/* instance methods */
- (id)detailText;
- (id)componentView;
- (void)private_didTapSwitchControl:(id)control;
- (id /* block */)private_regrantBlock;

@end

#endif /* ONBPreciseLocationComponentTransformer_h */
