//
#ifndef _TtP11TwitterHome33HomeNavigationBarButtonItemPlugin__Protocol_h
#define _TtP11TwitterHome33HomeNavigationBarButtonItemPlugin__Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class UIBarButtonItem;

@protocol TwitterHome.HomeNavigationBarButtonItemPlugin <NSObject>

@required

@property (nonatomic, readonly) UIBarButtonItem *rightBarButtonItem;

@optional

/* optional instance methods */
- (void)homeTimelineContainerDidAppear;

@end

#endif /* _TtP11TwitterHome33HomeNavigationBarButtonItemPlugin__Protocol_h */
