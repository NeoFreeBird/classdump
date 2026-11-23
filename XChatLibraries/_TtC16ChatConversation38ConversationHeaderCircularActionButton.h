//
#ifndef _TtC16ChatConversation38ConversationHeaderCircularActionButton_h
#define _TtC16ChatConversation38ConversationHeaderCircularActionButton_h
@import Foundation;

@class ChatConversation.ConversationHeaderAction ?, UIControl, _$s13XDesignSystem11PressEffectCMn ?, _$sSo11UIImageViewC, _$sSo6UIViewC, _$sSo7UILabelC;

@interface ChatConversation.ConversationHeaderCircularActionButton : UIControl { // (Swift)
    /* instance variables */
    __C.UIView contentView;
    __C.UIView circleView;
    __C.UIImageView iconImageView;
    __C.UILabel titleLabel;
    nominal type descriptor for XDesignSystem.PressEffect ? $__lazy_storage_$_pressEffect;
    ChatConversation.ConversationHeaderAction ? action;
}

@property (nonatomic) _Bool highlighted;
@property (nonatomic) _Bool enabled;

/* instance methods */
- (_Bool)isHighlighted;
- (_Bool)isEnabled;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC16ChatConversation38ConversationHeaderCircularActionButton_h */
