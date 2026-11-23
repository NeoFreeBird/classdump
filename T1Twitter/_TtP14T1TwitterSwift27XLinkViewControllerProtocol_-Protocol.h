//
#ifndef _TtP14T1TwitterSwift27XLinkViewControllerProtocol__Protocol_h
#define _TtP14T1TwitterSwift27XLinkViewControllerProtocol__Protocol_h
@import Foundation;

#include "T1URTViewController.h"
#include "TTACoreBasicStatusView-Protocol.h"

@class UIView;

@protocol T1TwitterSwift.XLinkViewControllerProtocol

@required

@property (nonatomic, readonly) UIView<TTACoreBasicStatusView> *provideFocalStatusHostView;
@property (nonatomic, readonly) double focalStatusOffsetBelowPinnedRow;
@property (nonatomic, readonly) T1URTViewController *provideTimelineViewController;

/* required instance methods */
- (void)updateForState:(long long)state;
- (void)updateFocalPinningInsets;

@optional

@end

#endif /* _TtP14T1TwitterSwift27XLinkViewControllerProtocol__Protocol_h */
