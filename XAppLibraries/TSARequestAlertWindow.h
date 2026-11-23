//
#ifndef TSARequestAlertWindow_h
#define TSARequestAlertWindow_h
@import Foundation;

#include "TSARequestItem-Protocol.h"

@class TFNAlertWindow, UIWindow;

@interface TSARequestAlertWindow : TFNAlertWindow {
    /* instance variables */
    id <TSARequestItem> _requestItem;
}

@property (retain, nonatomic) UIWindow *retainedSelf;
@property (readonly, nonatomic) _Bool isVisible;
@property (copy, nonatomic) id /* block */ openURLBlock;

/* instance methods */
- (id)initWithRequestItem:(id)item;
- (void)_learnMore:(id)more;

@end

#endif /* TSARequestAlertWindow_h */
