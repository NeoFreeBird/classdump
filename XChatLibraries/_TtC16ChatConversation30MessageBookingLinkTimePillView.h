//
#ifndef _TtC16ChatConversation30MessageBookingLinkTimePillView_h
#define _TtC16ChatConversation30MessageBookingLinkTimePillView_h
@import Foundation;

@class Swift.Bool, UIControl, _$sSo7UILabelC;

@interface ChatConversation.MessageBookingLinkTimePillView : UIControl { // (Swift)
    /* instance variables */
    __C.UILabel timeLabel;
    Swift.Bool isSelectable;
}

@property (nonatomic) _Bool enabled;
@property (nonatomic) _Bool selected;

/* instance methods */
- (_Bool)isEnabled;
- (_Bool)isSelected;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)traitCollectionDidChange:(id)change;

@end

#endif /* _TtC16ChatConversation30MessageBookingLinkTimePillView_h */
