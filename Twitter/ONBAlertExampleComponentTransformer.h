//
#ifndef ONBAlertExampleComponentTransformer_h
#define ONBAlertExampleComponentTransformer_h
@import Foundation;

#include "ONBComponentTransformer.h"

@class TFNActivityIndicatorButton, UIView;

@interface ONBAlertExampleComponentTransformer : ONBComponentTransformer {
    /* instance variables */
    TFNActivityIndicatorButton *_embeddedButton;
    UIView *_componentView;
}

/* class methods */
+ (Class)mutableComponentClass;

/* instance methods */
- (id)componentView;
- (id)embeddedButton;
- (void)private_didTapButton:(id)button;

@end

#endif /* ONBAlertExampleComponentTransformer_h */
