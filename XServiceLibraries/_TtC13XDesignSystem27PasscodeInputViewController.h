//
#ifndef _TtC13XDesignSystem27PasscodeInputViewController_h
#define _TtC13XDesignSystem27PasscodeInputViewController_h
@import Foundation;

@class Swift.Bool, UIViewController, XDesignSystem.PasscodeEntry, XDesignSystem.PasscodeSlots, _$s7SwiftUI19UIHostingControllerCMn XDesignSystem.PasscodePad, _$sSi, _$sySScSg;

@interface XDesignSystem.PasscodeInputViewController : UIViewController { // (Swift)
    /* instance variables */
    ((Swift.String) -> ())? onComplete;
    Swift.Bool isSubmitting;
    Swift.Int length;
    XDesignSystem.PasscodeSlots slots;
    XDesignSystem.PasscodeEntry entry;
    nominal type descriptor for SwiftUI.UIHostingController XDesignSystem.PasscodePad padViewController;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)loadView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC13XDesignSystem27PasscodeInputViewController_h */
