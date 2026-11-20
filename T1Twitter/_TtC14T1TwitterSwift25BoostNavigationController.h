//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift25BoostNavigationController_h
#define _TtC14T1TwitterSwift25BoostNavigationController_h
@import Foundation;

#include "T1TabNavigationController.h"

@interface T1TwitterSwift.BoostNavigationController : T1TabNavigationController // (Swift)

/* class methods */
+ (long long)panelID;

/* instance methods */
- (id)scribePage;
- (void)tabWasSelectedWithOptions:(long long)options;
- (id)initWithAccount:(id)account tabView:(id)view;

@end

#endif /* _TtC14T1TwitterSwift25BoostNavigationController_h */
