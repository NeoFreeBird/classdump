//
#ifndef _TtC14CallScheduleUI28ScheduledCallGuestAvatarView_h
#define _TtC14CallScheduleUI28ScheduledCallGuestAvatarView_h
@import Foundation;

@class CallScheduleUI.ScheduledCallRSVPBadgeView, CallUI.CallAvatarView, UIView, _$sSo12CAShapeLayerC;

@interface CallScheduleUI.ScheduledCallGuestAvatarView : UIView { // (Swift)
    /* instance variables */
    CallUI.CallAvatarView avatarView;
    CallScheduleUI.ScheduledCallRSVPBadgeView badgeView;
    __C.CAShapeLayer avatarMaskLayer;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14CallScheduleUI28ScheduledCallGuestAvatarView_h */
