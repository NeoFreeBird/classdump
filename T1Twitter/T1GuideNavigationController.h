//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1GuideNavigationController_h
#define T1GuideNavigationController_h
@import Foundation;

#include "T1TabNavigationController.h"

@class NSString;

@interface T1GuideNavigationController : T1TabNavigationController // (Swift)

@property (nonatomic, copy) NSString *selectedTabID;

/* class methods */
+ (long long)panelID;

/* instance methods */
- (id)scribePage;
- (id)scribeSection;
- (void)tabWasSelectedWithOptions:(long long)options;
- (void)viewDidDisappear:(_Bool)disappear;
- (void)handleTabSelectionIfAlreadySelected;
- (void)tabWasLongPressed;
- (id)initWithAccount:(id)account tabView:(id)view;

@end

#endif /* T1GuideNavigationController_h */
