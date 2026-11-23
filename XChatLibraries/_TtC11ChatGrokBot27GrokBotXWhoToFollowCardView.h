//
#ifndef _TtC11ChatGrokBot27GrokBotXWhoToFollowCardView_h
#define _TtC11ChatGrokBot27GrokBotXWhoToFollowCardView_h
@import Foundation;

#include "UIScrollViewDelegate-Protocol.h"

@class Swift.Bool, UIView, _$sSa -> ChatGrokBot.GrokBotXFollowTileView, _$sSa -> ChatGrokBot.GrokBotXUser, _$sSo12UIScrollViewC, __C.UIEdgeInsets;

@interface ChatGrokBot.GrokBotXWhoToFollowCardView : UIView <UIScrollViewDelegate> { // (Swift)
    /* instance variables */
    __C.UIEdgeInsets horizontalBleed;
    __C.UIScrollView scrollView;
    Swift.Bool needsScrollToStart;
    Swift.Array -> ChatGrokBot.GrokBotXFollowTileView tileViews;
    Swift.Array -> ChatGrokBot.GrokBotXUser users;
}

/* instance methods */
- (void)scrollViewWillEndDragging:(id)dragging withVelocity:(struct CGPoint { double x0; double x1; })velocity targetContentOffset:(struct CGPoint { double x0; double x1; } *)offset;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;

@end

#endif /* _TtC11ChatGrokBot27GrokBotXWhoToFollowCardView_h */
