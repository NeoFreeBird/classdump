//
#ifndef _TtC13XDesignSystem29TrayTextContentViewController_h
#define _TtC13XDesignSystem29TrayTextContentViewController_h
@import Foundation;

#include "_TtC13XDesignSystem30StackTrayContentViewController.h"

@class XDesignSystem.TrayActionButtonStripConfiguration ?, XDesignSystem.TrayHeaderConfiguration ?, _$syycSg;

@interface XDesignSystem.TrayTextContentViewController : XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    XDesignSystem.TrayHeaderConfiguration ? headerConfiguration;
    XDesignSystem.TrayActionButtonStripConfiguration ? actionStripConfiguration;
    (() -> ())? onPrimaryAction;
    (() -> ())? onSecondaryAction;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC13XDesignSystem29TrayTextContentViewController_h */
