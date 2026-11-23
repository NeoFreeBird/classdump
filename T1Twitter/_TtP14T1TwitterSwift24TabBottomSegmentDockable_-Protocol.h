//
#ifndef _TtP14T1TwitterSwift24TabBottomSegmentDockable__Protocol_h
#define _TtP14T1TwitterSwift24TabBottomSegmentDockable__Protocol_h
@import Foundation;

@class UIColor;

@protocol T1TwitterSwift.TabBottomSegmentDockable

@required

@property (nonatomic, readonly) double contentHeight;
@property (nonatomic, readonly) UIColor *bottomSegmentBackgroundColor;

@optional

/* optional instance methods */
- (void)bottomSegmentDidPresent;
- (void)bottomSegmentWillDismiss;
- (void)bottomSegmentDidDismiss;

@end

#endif /* _TtP14T1TwitterSwift24TabBottomSegmentDockable__Protocol_h */
