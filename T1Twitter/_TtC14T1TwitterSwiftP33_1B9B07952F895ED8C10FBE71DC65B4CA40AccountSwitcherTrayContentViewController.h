//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwiftP33_1B9B07952F895ED8C10FBE71DC65B4CA40AccountSwitcherTrayContentViewController_h
#define _TtC14T1TwitterSwiftP33_1B9B07952F895ED8C10FBE71DC65B4CA40AccountSwitcherTrayContentViewController_h
@import Foundation;

@class _$s13XDesignSystem30StackTrayContentViewControllerCN;

@interface T1TwitterSwift.(AccountSwitcherTrayContentViewController in _1B9B07952F895ED8C10FBE71DC65B4CA) : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *accountsViewController;
    NSNumber"16@0:8 *pendingSwitch;
    NSNumber"16@0:8 *contentSizeObservation;
    NSNumber"16@0:8 *lastReportedHeight;
    NSNumber"16@0:8 *presentedCompactStyle;
    NSNumber"16@0:8 *acceptsHeightChanges;
    NSNumber"16@0:8 *isMeasuringHeight;
    NSNumber"16@0:8 *isLayoutFixEnabled;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)tfnPresentedCustomDismissAnimated:(_Bool)animated completion:(id /* block */)completion;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14T1TwitterSwiftP33_1B9B07952F895ED8C10FBE71DC65B4CA40AccountSwitcherTrayContentViewController_h */
