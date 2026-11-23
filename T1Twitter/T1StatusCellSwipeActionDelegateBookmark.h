//
#ifndef T1StatusCellSwipeActionDelegateBookmark_h
#define T1StatusCellSwipeActionDelegateBookmark_h
@import Foundation;

#include "TFNSwipeActionDelegate-Protocol.h"

@class NSObject, NSString, TFNAnimatableButton, UIView;

@interface T1StatusCellSwipeActionDelegateBookmark : NSObject <TFNSwipeActionDelegate> {
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
- (id)initWithBookmarked:(_Bool)bookmarked action:(id /* block */)action;
- (void)updateViewWithAnimationPercent:(double)percent;
- (void)onAction;

@end

#endif /* T1StatusCellSwipeActionDelegateBookmark_h */
