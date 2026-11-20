//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
