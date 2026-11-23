//
#ifndef ONBButtonItemComponentTransformer_h
#define ONBButtonItemComponentTransformer_h
@import Foundation;

#include "ONBComponentTransformer.h"

@class TFNActivityIndicatorButton, UIView;

@interface ONBButtonItemComponentTransformer : ONBComponentTransformer {
    /* instance variables */
    TFNActivityIndicatorButton *_embeddedButton;
    UIView *_componentView;
}

/* class methods */
+ (Class)mutableComponentClass;

/* instance methods */
- (id)componentView;
- (id)embeddedButton;

@end

#endif /* ONBButtonItemComponentTransformer_h */
