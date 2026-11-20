//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBProgressIndicatorComponentTransformer_h
#define ONBProgressIndicatorComponentTransformer_h
@import Foundation;

#include "ONBComponentTransformer.h"

@class UIView;

@interface ONBProgressIndicatorComponentTransformer : ONBComponentTransformer {
    /* instance variables */
    _Bool _forBarButtonItem;
    UIView *_componentView;
    long long _progressPercentage;
}

/* class methods */
+ (Class)mutableComponentClass;

/* instance methods */
- (id)initWithAccount:(id)account mutableComponent:(id)component;
- (_Bool)updateNumberValue:(id)value;
- (id)detailText;
- (id)componentView;
- (id)barButtonComponentView;
- (id)private_componentViewForBarButtonItem:(_Bool)item;
- (id)private_gradientView;

@end

#endif /* ONBProgressIndicatorComponentTransformer_h */
