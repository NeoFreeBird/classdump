//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
