//
#ifndef _TtC14T1TwitterSwift30PremiumHubNavigationController_h
#define _TtC14T1TwitterSwift30PremiumHubNavigationController_h
@import Foundation;

#include "T1TabNavigationController.h"

@class _$syycSg;

@interface T1TwitterSwift.PremiumHubNavigationController : T1TabNavigationController { // (Swift)
    /* instance variables */
    (() -> ())? onDidDisappear;
}

/* class methods */
+ (long long)panelID;

/* instance methods */
- (id)scribePage;
- (void)tabWasSelectedWithOptions:(long long)options;
- (void)viewDidDisappear:(_Bool)disappear;
- (id)initWithAccount:(id)account tabView:(id)view;

@end

#endif /* _TtC14T1TwitterSwift30PremiumHubNavigationController_h */
