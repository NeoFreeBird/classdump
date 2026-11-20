//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13XDesignSystem29TrayListContentViewController_h
#define _TtC13XDesignSystem29TrayListContentViewController_h
@import Foundation;

#include "_TtC13XDesignSystem30StackTrayContentViewController.h"

@class XDesignSystem.ListItems, XDesignSystem.TrayActionButtonStripConfiguration ?, XDesignSystem.TrayEdge, XDesignSystem.TrayHeaderConfiguration ?, XDesignSystem.TraySizing, _$syycSg;

@interface XDesignSystem.TrayListContentViewController : XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    XDesignSystem.ListItems list;
    (() -> ())? onPrimaryAction;
    (() -> ())? onSecondaryAction;
    XDesignSystem.TrayHeaderConfiguration ? headerConfiguration;
    XDesignSystem.TrayActionButtonStripConfiguration ? actionStripConfiguration;
    XDesignSystem.TraySizing sizing;
    XDesignSystem.TrayEdge fullBleedEdges;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC13XDesignSystem29TrayListContentViewController_h */
