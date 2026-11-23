//
#ifndef T1FleetLineViewDelegate_Protocol_h
#define T1FleetLineViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1FleetLineViewDelegate <NSObject>

@required

/* required instance methods */
- (void)fleetLineView:(id)view presentViewController:(id)controller isFleetsViewController:(_Bool)controller;
- (void)fleetLineView:(id)view presentMenuSheet:(id)sheet fromGestureRecognizer:(id)recognizer;
- (id)fleetLineViewScribeContext:(id)context;
- (void)fleetLineView:(id)view showProfileForUser:(id)user;
- (void)fleetLineView:(id)view pushViewController:(id)controller;
- (void)fleetLineView:(id)view didUpdateContentItemCount:(long long)count;
- (_Bool)isOnHomeTab;

@optional

@end

#endif /* T1FleetLineViewDelegate_Protocol_h */
