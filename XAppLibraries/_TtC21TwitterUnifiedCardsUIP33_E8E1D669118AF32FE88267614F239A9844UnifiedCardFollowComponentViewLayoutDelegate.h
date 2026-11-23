//
#ifndef _TtC21TwitterUnifiedCardsUIP33_E8E1D669118AF32FE88267614F239A9844UnifiedCardFollowComponentViewLayoutDelegate_h
#define _TtC21TwitterUnifiedCardsUIP33_E8E1D669118AF32FE88267614F239A9844UnifiedCardFollowComponentViewLayoutDelegate_h
@import Foundation;

#include "TFNLayoutableViewLayoutDelegate-Protocol.h"
#include "TUCComponentViewLayoutDelegate-Protocol.h"

@class NSObject;

@interface TwitterUnifiedCardsUI.(UnifiedCardFollowComponentViewLayoutDelegate in _E8E1D669118AF32FE88267614F239A98) : NSObject <TUCComponentViewLayoutDelegate, TFNLayoutableViewLayoutDelegate> // (Swift)

/* instance methods */
- (id)layoutStateForComponent:(id)component isLastComponent:(_Bool)component disableBottomPadding:(_Bool)padding width:(double)width layoutContext:(id)context previousLayoutState:(id)state;
- (_Bool)isLayoutState:(id)state validForComponent:(id)component isLastComponent:(_Bool)component disableBottomPadding:(_Bool)padding layoutContext:(id)context;
- (void)layoutSubviewsForLayoutableView:(id)view;
- (id)init;

@end

#endif /* _TtC21TwitterUnifiedCardsUIP33_E8E1D669118AF32FE88267614F239A9844UnifiedCardFollowComponentViewLayoutDelegate_h */
