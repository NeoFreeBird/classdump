//
#ifndef T1StatusCellSwipeActionDelegateFavorite_h
#define T1StatusCellSwipeActionDelegateFavorite_h
@import Foundation;

#include "TFNSwipeActionDelegate-Protocol.h"

@class NSObject, NSString, TFNAnimatableButton, TFNLegacyButtonAnimator, UIView;

@interface T1StatusCellSwipeActionDelegateFavorite : NSObject <TFNSwipeActionDelegate> {
    /* instance variables */
    TFNAnimatableButton *iconView;
    TFNLegacyButtonAnimator *animator;
    id /* block */ action;
}

@property (retain, nonatomic) UIView *actionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFavorited:(_Bool)favorited action:(id /* block */)action;
- (void)updateViewWithAnimationPercent:(double)percent;
- (void)onAction;

@end

#endif /* T1StatusCellSwipeActionDelegateFavorite_h */
