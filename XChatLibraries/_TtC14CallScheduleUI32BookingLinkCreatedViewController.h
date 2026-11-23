//
#ifndef _TtC14CallScheduleUI32BookingLinkCreatedViewController_h
#define _TtC14CallScheduleUI32BookingLinkCreatedViewController_h
@import Foundation;

@class CallModels.CallBookingLink, CallScheduleUI.BookingLinkDisplayFormatter, CallScheduleUI.BookingLinkSharing, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$s13XDesignSystem9ListItemsCMn, _$syyc;

@interface CallScheduleUI.BookingLinkCreatedViewController : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    nominal type descriptor for XDesignSystem.ListItems actionsList;
    CallScheduleUI.BookingLinkDisplayFormatter formatter;
    CallModels.CallBookingLink link;
    () -> () onBack;
    CallScheduleUI.BookingLinkSharing sharing;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14CallScheduleUI32BookingLinkCreatedViewController_h */
