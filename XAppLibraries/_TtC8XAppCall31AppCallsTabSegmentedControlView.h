//
#ifndef _TtC8XAppCall31AppCallsTabSegmentedControlView_h
#define _TtC8XAppCall31AppCallsTabSegmentedControlView_h
@import Foundation;

@class UIView, _$s10TFNUISwift25LegacySegmentedTabBarViewCMn, _$s14CallScheduleUI21CallsTabSegmentStreamCMn, _$s7Combine14AnyCancellableCMn ?, _$sSa -> _$s14CallScheduleUI15CallsTabSegmentOMn;

@interface XAppCall.AppCallsTabSegmentedControlView : UIView { // (Swift)
    /* instance variables */
    Swift.Array -> nominal type descriptor for CallScheduleUI.CallsTabSegment segments;
    nominal type descriptor for CallScheduleUI.CallsTabSegmentStream callsTabSegmentStream;
    nominal type descriptor for TFNUISwift.LegacySegmentedTabBarView tabBarView;
    nominal type descriptor for Combine.AnyCancellable ? segmentSubscription;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC8XAppCall31AppCallsTabSegmentedControlView_h */
