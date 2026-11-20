//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1LiveEventLegacyFloatingMiniPlayerControllerDelegate_Protocol_h
#define T1LiveEventLegacyFloatingMiniPlayerControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1LiveEventLegacyFloatingMiniPlayerControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)willDockWithDockingController:(id)controller;
- (void)didDockWithDockingController:(id)controller;
- (void)dockingController:(id)controller willPerformDockedViewSwipeAction:(long long)action;
- (void)dockingController:(id)controller didPerformDockedViewSwipeAction:(long long)action;
- (void)dockingController:(id)controller willPerformDockedViewTapAction:(long long)action;
- (void)dockingController:(id)controller didPerformDockedViewTapAction:(long long)action;

@end

#endif /* T1LiveEventLegacyFloatingMiniPlayerControllerDelegate_Protocol_h */
