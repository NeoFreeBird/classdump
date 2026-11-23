//
#ifndef TCMAboutCommunitySpacesPromptViewController_h
#define TCMAboutCommunitySpacesPromptViewController_h
@import Foundation;

@class _$s13XDesignSystem30StackTrayContentViewControllerCN;

@interface TCMAboutCommunitySpacesPromptViewController : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 nuxDelegate;
    @40@0:8:16@24@32 showsCreationOption;
    @40@0:8:16@24@32 didConfirm;
    @40@0:8:16@24@32 didNotifyAppearance;
    @40@0:8:16@24@32 bannerView;
    @40@0:8:16@24@32 titleLabel;
    @40@0:8:16@24@32 messageLabel;
    @40@0:8:16@24@32 rowList;
}

/* class methods */
+ (void)presentNuxFromViewController:(id)controller;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (id)initWithCoder:(id)coder;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewDidDisappear:(_Bool)disappear;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* TCMAboutCommunitySpacesPromptViewController_h */
