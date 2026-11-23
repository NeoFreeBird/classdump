//
#ifndef _TtC16ChatConversation26PinnedMessageIndexRailView_h
#define _TtC16ChatConversation26PinnedMessageIndexRailView_h
@import Foundation;

@class UIView, _$sSaySo6UIViewCG, _$sSi;

@interface ChatConversation.PinnedMessageIndexRailView : UIView { // (Swift)
    /* instance variables */
    Swift.Int count;
    [__C.UIView] dotViews;
    Swift.Int selectedIndex;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;

@end

#endif /* _TtC16ChatConversation26PinnedMessageIndexRailView_h */
