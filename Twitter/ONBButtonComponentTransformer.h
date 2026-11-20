//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBButtonComponentTransformer_h
#define ONBButtonComponentTransformer_h
@import Foundation;

#include "ONBComponentTransformer.h"

@class TFNActivityIndicatorButton, UIView;

@interface ONBButtonComponentTransformer : ONBComponentTransformer {
    /* instance variables */
    _Bool _didApplyBarButtonTextStyle;
    TFNActivityIndicatorButton *_embeddedButton;
    UIView *_componentView;
}

/* class methods */
+ (Class)mutableComponentClass;

/* instance methods */
- (id)componentView;
- (id)embeddedButton;
- (_Bool)updateRichText:(id)text;
- (id)barButtonComponentView;
- (void)private_applyBarButtonTextStyleToButton:(id)button;

@end

#endif /* ONBButtonComponentTransformer_h */
