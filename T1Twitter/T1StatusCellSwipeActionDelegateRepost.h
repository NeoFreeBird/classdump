//
#ifndef T1StatusCellSwipeActionDelegateRepost_h
#define T1StatusCellSwipeActionDelegateRepost_h
@import Foundation;

#include "TFNSwipeActionDelegate-Protocol.h"

@class NSObject, NSString, TFNAnimatableButton, UIView;

@interface T1StatusCellSwipeActionDelegateRepost : NSObject <TFNSwipeActionDelegate> {
    /* instance variables */
    TFNAnimatableButton *iconView;
    id /* block */ action;
}

@property (retain, nonatomic) UIView *actionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithReposted:(_Bool)reposted action:(id /* block */)action;
- (void)updateViewWithAnimationPercent:(double)percent;
- (void)onAction;

@end

#endif /* T1StatusCellSwipeActionDelegateRepost_h */
