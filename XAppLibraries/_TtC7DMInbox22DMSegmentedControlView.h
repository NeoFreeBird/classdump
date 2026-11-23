//
#ifndef _TtC7DMInbox22DMSegmentedControlView_h
#define _TtC7DMInbox22DMSegmentedControlView_h
@import Foundation;

@class UIView, _$s10TFNUISwift25LegacySegmentedTabBarViewCMn, _$s6ChatUI21SelectedSegmentStreamCMn, _$s7Combine14AnyCancellableCMn ?, _$sSa -> _$s6ChatUI18SegmentedTabConfigVMn;

@interface DMInbox.DMSegmentedControlView : UIView { // (Swift)
    /* instance variables */
    Swift.Array -> nominal type descriptor for ChatUI.SegmentedTabConfig tabs;
    nominal type descriptor for ChatUI.SelectedSegmentStream selectedSegmentStream;
    nominal type descriptor for TFNUISwift.LegacySegmentedTabBarView tabBarView;
    nominal type descriptor for Combine.AnyCancellable ? streamSubscription;
}

/* instance methods */
- (void)didMoveToWindow;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7DMInbox22DMSegmentedControlView_h */
