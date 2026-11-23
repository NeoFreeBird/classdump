//
#ifndef _TtC14T1TwitterSwift44MediaTaggedUserListTrayContentViewController_h
#define _TtC14T1TwitterSwift44MediaTaggedUserListTrayContentViewController_h
@import Foundation;

@class Swift.Bool, _$s10Foundation21NSKeyValueObservationCMn ?, _$s12CoreGraphics7CGFloatVMn, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$sSo35T1MediaTaggedUserListViewControllerC;

@interface T1TwitterSwift.MediaTaggedUserListTrayContentViewController : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    __C.T1MediaTaggedUserListViewController listViewController;
    nominal type descriptor for Foundation.NSKeyValueObservation ? contentSizeObservation;
    nominal type descriptor for CoreGraphics.CGFloat reportedHeight;
    Swift.Bool isMeasuringHeight;
    Swift.Bool isHeightUpdateScheduled;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)tfn_customizeLayoutMetrics:(id)metrics forChildViewController:(id)controller;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14T1TwitterSwift44MediaTaggedUserListTrayContentViewController_h */
