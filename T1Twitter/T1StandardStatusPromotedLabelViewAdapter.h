//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1StandardStatusPromotedLabelViewAdapter_h
#define T1StandardStatusPromotedLabelViewAdapter_h
@import Foundation;

@class TFNComposableViewAdapter;

@interface T1StandardStatusPromotedLabelViewAdapter : TFNComposableViewAdapter { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *iconHeight;
    NSNumber"16@0:8 *currentLabelType;
    NSNumber"16@0:8 *currentDisplay;
    NSNumber"16@0:8 *context;
    NSNumber"16@0:8 *hostStatusView;
    NSNumber"16@0:8 *currentStatusID;
    NSNumber"16@0:8 *currentScribeContext;
    NSNumber"16@0:8 *currentAccount;
    NSNumber"16@0:8 *$__lazy_storage_$_promotedImageView;
    NSNumber"16@0:8 *$__lazy_storage_$_promotedLabel;
}

/* instance methods */
- (id)initWithViewIdentifier:(long long)identifier context:(long long)context;
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (id)initializeView;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;
- (void)setViewModel:(id)model forView:(id)view;
- (void)handleLabelTap:(id)tap;
- (void)view:(id)view willMoveToHostView:(id)view;
- (id)initWithViewIdentifier:(long long)identifier;

@end

#endif /* T1StandardStatusPromotedLabelViewAdapter_h */
