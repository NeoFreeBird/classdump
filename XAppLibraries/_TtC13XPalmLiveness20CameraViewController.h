//
#ifndef _TtC13XPalmLiveness20CameraViewController_h
#define _TtC13XPalmLiveness20CameraViewController_h
@import Foundation;

@class Swift.Bool, UIViewController, XPalmLiveness.CameraViewController.DisplayedPhase, XPalmLiveness.LivenessPolicy, XPalmLiveness.PalmLivenessEngine ?, XPalmLiveness.PalmScanOverlayModel, XPalmLiveness.XPalmLivenessStrings, _$s10Foundation4DataVMn, _$sSo31UINotificationFeedbackGeneratorC;

@interface XPalmLiveness.CameraViewController : UIViewController { // (Swift)
    /* instance variables */
    XPalmLiveness.LivenessAssessment function type (escaping) completion;
    XPalmLiveness.XPalmLivenessStrings strings;
    nominal type descriptor for Foundation.Data challengeNonce;
    XPalmLiveness.LivenessPolicy policy;
    XPalmLiveness.PalmScanOverlayModel overlayModel;
    XPalmLiveness.PalmLivenessEngine ? engine;
    __C.UINotificationFeedbackGenerator stageHaptic;
    Swift.Bool didComplete;
    XPalmLiveness.CameraViewController.DisplayedPhase displayedPhase;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)disappear;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC13XPalmLiveness20CameraViewController_h */
