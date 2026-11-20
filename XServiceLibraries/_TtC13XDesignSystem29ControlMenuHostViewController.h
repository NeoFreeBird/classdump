//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13XDesignSystem29ControlMenuHostViewController_h
#define _TtC13XDesignSystem29ControlMenuHostViewController_h
@import Foundation;

@class Swift.Bool, UIViewController, XDesignSystem.ControlMenu.EdgePreference, XDesignSystem.ControlMenu.Presentation, XDesignSystem.ControlMenuBackdropView ?, _$s12CoreGraphics7CGFloatVMn, _$s7Combine14AnyCancellableCMn ?, _$s7Combine19CurrentValueSubjectCMn XDesignSystem.ControlMenuState ? _$ss5NeverOMn, _$s7SwiftUI19UIHostingControllerCMn XDesignSystem.ControlMenuHostingView ?, _$sSh -> _$s7Combine14AnyCancellableCMn, __C.CGRect _$sycSg, __C.CGSize ?;

@interface XDesignSystem.ControlMenuHostViewController : UIViewController { // (Swift)
    /* instance variables */
    Swift.Bool avoidsKeyboard;
    nominal type descriptor for SwiftUI.UIHostingController XDesignSystem.ControlMenuHostingView ? hostingController;
    nominal type descriptor for CoreGraphics.CGFloat keyboardHeight;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
    nominal type descriptor for Combine.AnyCancellable ? onDismissCancellable;
    Swift.Bool registersAsSharedHost;
    __C.CGRect _$sycSg storedAnchorProvider;
    __C.CGSize ? storedContentSize;
    XDesignSystem.ControlMenu.EdgePreference storedEdgePreference;
    XDesignSystem.ControlMenu.Presentation storedPresentation;
    XDesignSystem.ControlMenuBackdropView ? backdropView;
    Swift.Bool isBackdropVisible;
    nominal type descriptor for Combine.CurrentValueSubject XDesignSystem.ControlMenuState ? nominal type descriptor for Swift.Never menuStatePublisher;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)loadView;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)change;
- (_Bool)accessibilityPerformEscape;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC13XDesignSystem29ControlMenuHostViewController_h */
