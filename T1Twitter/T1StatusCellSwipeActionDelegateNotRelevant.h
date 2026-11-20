//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1StatusCellSwipeActionDelegateNotRelevant_h
#define T1StatusCellSwipeActionDelegateNotRelevant_h
@import Foundation;

#include "TFNSwipeActionDelegate-Protocol.h"

@class NSObject, NSString, UIImageView, UIView;

@interface T1StatusCellSwipeActionDelegateNotRelevant : NSObject <TFNSwipeActionDelegate> {
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

#endif /* T1StatusCellSwipeActionDelegateNotRelevant_h */
