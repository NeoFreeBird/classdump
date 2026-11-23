//
#ifndef _TtC13XDesignSystem33TrayPasscodeContentViewController_h
#define _TtC13XDesignSystem33TrayPasscodeContentViewController_h
@import Foundation;

#include "_TtC13XDesignSystem30StackTrayContentViewController.h"

@class Swift.Bool, XDesignSystem.PasscodeInputViewController, XDesignSystem.TrayBodyLabel, XDesignSystem.TrayHeaderConfiguration ?;

@interface XDesignSystem.TrayPasscodeContentViewController : XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    Swift.Bool locksTrayWhileSubmitting;
    XDesignSystem.TrayHeaderConfiguration ? header;
    XDesignSystem.TrayBodyLabel bodyLabel;
    XDesignSystem.PasscodeInputViewController input;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)textSizeDidChange;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC13XDesignSystem33TrayPasscodeContentViewController_h */
