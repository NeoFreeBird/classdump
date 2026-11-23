//
#ifndef _TtCC21TwitterUnifiedCardsUI27SwipeableMediaComponentView14LayoutDelegate_h
#define _TtCC21TwitterUnifiedCardsUI27SwipeableMediaComponentView14LayoutDelegate_h
@import Foundation;

#include "TFNLayoutableViewLayoutDelegate-Protocol.h"
#include "TUCComponentViewLayoutDelegate-Protocol.h"

@class NSObject;

@interface TwitterUnifiedCardsUI.SwipeableMediaComponentView.LayoutDelegate : NSObject <TUCComponentViewLayoutDelegate, TFNLayoutableViewLayoutDelegate> // (Swift)

/* instance methods */
- (id)init;
- (id)layoutStateForComponent:(id)component isLastComponent:(_Bool)component disableBottomPadding:(_Bool)padding width:(double)width layoutContext:(id)context previousLayoutState:(id)state;
- (_Bool)isLayoutState:(id)state validForComponent:(id)component isLastComponent:(_Bool)component disableBottomPadding:(_Bool)padding layoutContext:(id)context;
- (void)layoutSubviewsForLayoutableView:(id)view;

@end

#endif /* _TtCC21TwitterUnifiedCardsUI27SwipeableMediaComponentView14LayoutDelegate_h */
