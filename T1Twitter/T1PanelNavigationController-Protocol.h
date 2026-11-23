//
#ifndef T1PanelNavigationController_Protocol_h
#define T1PanelNavigationController_Protocol_h
@import Foundation;

#include "TFNNavigationStack-Protocol.h"

@class UIViewController;

@protocol T1PanelNavigationController <TFNNavigationStack>

@required

@property (nonatomic, readonly) long long panelID;
@property (nonatomic, readonly) UIViewController *primaryContentViewController;
@property (nonatomic, readonly) UIViewController *activeContentViewController;

/* required instance methods */
- (id)scribePage;

@optional

@end

#endif /* T1PanelNavigationController_Protocol_h */
