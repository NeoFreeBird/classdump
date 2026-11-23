//
#ifndef _TtP11TwitterHome32HomeNavigationBarTitleViewPlugin__Protocol_h
#define _TtP11TwitterHome32HomeNavigationBarTitleViewPlugin__Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class UIView;

@protocol TwitterHome.HomeNavigationBarTitleViewPlugin <NSObject>

@required

@property (nonatomic, readonly) UIView *titleView;

@optional

/* optional instance methods */
- (void)homeTimelineContainerDidAppear;

@end

#endif /* _TtP11TwitterHome32HomeNavigationBarTitleViewPlugin__Protocol_h */
