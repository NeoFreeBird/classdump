//
#ifndef T1FleetLineControlling_Protocol_h
#define T1FleetLineControlling_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class UIView;

@protocol T1FleetLineControlling <NSObject>

@required

@property (nonatomic, readonly) UIView *accessoryView;
@property (nonatomic, readonly) _Bool hidden;
@property (nonatomic, readonly) _Bool hidden;
@property (nonatomic) _Bool accessoryChangesSuspended;

/* required instance methods */
- (_Bool)isHidden;
- (_Bool)isHidden;
- (void)attachToViewController:(id)controller;
- (void)attachToViewController:(id)controller;
- (void)didPullToRefresh;
- (void)contentFocusDidChange:(_Bool)change;
- (void)parentDidLayoutSubviews;

@optional

@end

#endif /* T1FleetLineControlling_Protocol_h */
