//
#ifndef _TtC16ChatConversation16ConversationView_h
#define _TtC16ChatConversation16ConversationView_h
@import Foundation;

@class UIView, _$sSo13UILayoutGuideC, _$sSo6UIViewCSg;

@interface ChatConversation.ConversationView : UIView { // (Swift)
    /* instance variables */
    __C.UIView? contentView;
    __C.UIView? footerView;
    __C.UIView? headerView;
    __C.UILayoutGuide contentViewLayoutGuide;
    __C.UILayoutGuide footerViewLayoutGuide;
    __C.UILayoutGuide headerViewLayoutGuide;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC16ChatConversation16ConversationView_h */
