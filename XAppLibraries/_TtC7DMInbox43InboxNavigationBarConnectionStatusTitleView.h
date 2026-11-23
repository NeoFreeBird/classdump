//
#ifndef _TtC7DMInbox43InboxNavigationBarConnectionStatusTitleView_h
#define _TtC7DMInbox43InboxNavigationBarConnectionStatusTitleView_h
@import Foundation;

@class DMInbox.InboxNavigationBarConnectionStatusTitleViewListener ?, DMUI.ConnectionStatusView, UIView;

@interface DMInbox.InboxNavigationBarConnectionStatusTitleView : UIView { // (Swift)
    /* instance variables */
    DMInbox.InboxNavigationBarConnectionStatusTitleViewListener ? listener;
    DMUI.ConnectionStatusView connectionStatusView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)didTap:(id)tap;

@end

#endif /* _TtC7DMInbox43InboxNavigationBarConnectionStatusTitleView_h */
