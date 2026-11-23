//
#ifndef _TtC7Profile36MiniProfileAboutScreenViewController_h
#define _TtC7Profile36MiniProfileAboutScreenViewController_h
@import Foundation;

@class Profile.MiniProfileAboutIdentityView, Profile.MiniProfileAboutListContainerView, Profile.MiniProfileAboutScreenViewController.StateGate, Swift.Bool, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$sSo16TIPImagePipelineCSg, _$sSo23TFSTwitterCanonicalUser_p;

@interface Profile.MiniProfileAboutScreenViewController : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    __C.TFSTwitterCanonicalUser user;
    __C.TIPImagePipeline? imagePipeline;
    Profile.MiniProfileAboutIdentityView identityView;
    Profile.MiniProfileAboutListContainerView listContainer;
    Profile.MiniProfileAboutScreenViewController.StateGate stateGate;
    Swift.Bool needsContainerHeightUpdate;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC7Profile36MiniProfileAboutScreenViewController_h */
