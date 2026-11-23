//
#ifndef _TtC21TwitterUnifiedCardsUI50UnifiedCardsButtonGroupComponentViewLayoutDelegate_h
#define _TtC21TwitterUnifiedCardsUI50UnifiedCardsButtonGroupComponentViewLayoutDelegate_h
@import Foundation;

#include "TFNLayoutableViewLayoutDelegate-Protocol.h"
#include "TUCComponentViewLayoutDelegate-Protocol.h"

@class NSObject;

@interface TwitterUnifiedCardsUI.UnifiedCardsButtonGroupComponentViewLayoutDelegate : NSObject <TUCComponentViewLayoutDelegate, TFNLayoutableViewLayoutDelegate> // (Swift)

/* instance methods */
- (id)layoutStateForComponent:(id)component isLastComponent:(_Bool)component disableBottomPadding:(_Bool)padding width:(double)width layoutContext:(id)context previousLayoutState:(id)state;
- (_Bool)isLayoutState:(id)state validForComponent:(id)component isLastComponent:(_Bool)component disableBottomPadding:(_Bool)padding layoutContext:(id)context;
- (void)layoutSubviewsForLayoutableView:(id)view;
- (id)init;

@end

#endif /* _TtC21TwitterUnifiedCardsUI50UnifiedCardsButtonGroupComponentViewLayoutDelegate_h */
