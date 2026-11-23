//
#ifndef T1StatusContentDisclosureAdapter_h
#define T1StatusContentDisclosureAdapter_h
@import Foundation;

@class TFNComposableViewAdapter;

@interface T1StatusContentDisclosureAdapter : TFNComposableViewAdapter { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *type;
    NSNumber"16@0:8 *impressionScribedIds;
}

/* instance methods */
- (id)initWithType:(long long)type viewIdentifier:(long long)identifier;
- (id)initWithViewIdentifier:(long long)identifier;
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (id)initializeView;
- (void)setViewModel:(id)model forView:(id)view;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;

@end

#endif /* T1StatusContentDisclosureAdapter_h */
