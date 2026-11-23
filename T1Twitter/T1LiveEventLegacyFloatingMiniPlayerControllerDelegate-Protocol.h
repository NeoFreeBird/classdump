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
