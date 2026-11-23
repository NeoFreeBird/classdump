//
#ifndef T1StatusCellSwipeActionDelegateNotInterested_h
#define T1StatusCellSwipeActionDelegateNotInterested_h
@import Foundation;

#include "TFNSwipeActionDelegate-Protocol.h"

@class NSObject, NSString, UIImageView, UIView;

@interface T1StatusCellSwipeActionDelegateNotInterested : NSObject <TFNSwipeActionDelegate> {
    /* instance variables */
    UIImageView *iconView;
    id /* block */ action;
}

@property (retain, nonatomic) UIView *actionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAction:(id /* block */)action;
- (void)updateViewWithAnimationPercent:(double)percent;
- (void)onAction;

@end

#endif /* T1StatusCellSwipeActionDelegateNotInterested_h */
