//
#ifndef _TtC14DMConversation26AvatarConnectionStatusView_h
#define _TtC14DMConversation26AvatarConnectionStatusView_h
@import Foundation;

@class DMConversation.AvatarConnectionStatusViewListener ?, DMUI.ConnectionStatusView, DMUI.HorizontalFacepileView, UIView;

@interface DMConversation.AvatarConnectionStatusView : UIView { // (Swift)
    /* instance variables */
    DMConversation.AvatarConnectionStatusViewListener ? listener;
    DMUI.HorizontalFacepileView avatarFacepileView;
    DMUI.ConnectionStatusView connectionStatusView;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)didTapAvatarFacepile:(id)facepile;
- (void)didTapConnectionStatusView:(id)view;

@end

#endif /* _TtC14DMConversation26AvatarConnectionStatusView_h */
