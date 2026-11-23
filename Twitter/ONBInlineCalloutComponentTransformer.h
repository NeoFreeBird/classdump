//
#ifndef ONBInlineCalloutComponentTransformer_h
#define ONBInlineCalloutComponentTransformer_h
@import Foundation;

#include "ONBComponentTransformer.h"

@class TFNInlineCalloutConfiguration, UIView;

@interface ONBInlineCalloutComponentTransformer : ONBComponentTransformer {
    /* instance variables */
    TFNInlineCalloutConfiguration *_componentConfiguration;
    UIView *_componentView;
}

/* class methods */
+ (Class)mutableComponentClass;

/* instance methods */
- (id)componentView;
- (_Bool)updateVisibility:(_Bool)visibility;
- (id)private_inlineCalloutItem;
- (id)private_componentView;
- (void)private_actionLinkTapped;
- (void)private_calloutTapped;
- (long long)private_inlineCalloutStyle;

@end

#endif /* ONBInlineCalloutComponentTransformer_h */
