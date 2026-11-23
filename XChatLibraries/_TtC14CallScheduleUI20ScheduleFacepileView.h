//
#ifndef _TtC14CallScheduleUI20ScheduleFacepileView_h
#define _TtC14CallScheduleUI20ScheduleFacepileView_h
@import Foundation;

@class UIView, _$sSa -> CallUI.CallAvatarView, _$sSi;

@interface CallScheduleUI.ScheduleFacepileView : UIView { // (Swift)
    /* instance variables */
    Swift.Array -> CallUI.CallAvatarView avatarViews;
    Swift.Int faceCount;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC14CallScheduleUI20ScheduleFacepileView_h */
