//
#ifndef _TtC13XDesignSystem33TrayCalendarContentViewController_h
#define _TtC13XDesignSystem33TrayCalendarContentViewController_h
@import Foundation;

#include "UICalendarSelectionSingleDateDelegate-Protocol.h"
#include "UICalendarViewDelegate-Protocol.h"
#include "_TtC13XDesignSystem30StackTrayContentViewController.h"

@class XDesignSystem.TrayActionButtonStripConfiguration ?, XDesignSystem.TrayHeaderConfiguration ?, _$s10Foundation14DateComponentsVMn ?, _$s10Foundation4DateVMn _$scSg ->, _$sSo14UICalendarViewC;

@interface XDesignSystem.TrayCalendarContentViewController : XDesignSystem.StackTrayContentViewController <UICalendarSelectionSingleDateDelegate, UICalendarViewDelegate> { // (Swift)
    /* instance variables */
    nominal type descriptor for Foundation.Date _$scSg -> onPrimaryAction;
    XDesignSystem.TrayHeaderConfiguration ? headerConfiguration;
    XDesignSystem.TrayActionButtonStripConfiguration ? actionStripConfiguration;
    __C.UICalendarView calendarView;
    nominal type descriptor for Foundation.DateComponents ? selectedDateComponents;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (_Bool)dateSelection:(id)selection canSelectDate:(id)date;
- (void)dateSelection:(id)selection didSelectDate:(id)date;
- (void)calendarView:(id)view didChangeVisibleDateComponentsFrom:(id)from;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC13XDesignSystem33TrayCalendarContentViewController_h */
