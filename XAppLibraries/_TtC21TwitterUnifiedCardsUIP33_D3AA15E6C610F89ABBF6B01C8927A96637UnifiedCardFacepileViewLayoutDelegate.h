//
#ifndef _TtC21TwitterUnifiedCardsUIP33_D3AA15E6C610F89ABBF6B01C8927A96637UnifiedCardFacepileViewLayoutDelegate_h
#define _TtC21TwitterUnifiedCardsUIP33_D3AA15E6C610F89ABBF6B01C8927A96637UnifiedCardFacepileViewLayoutDelegate_h
@import Foundation;

#include "TFNLayoutableViewLayoutDelegate-Protocol.h"
#include "TUCComponentViewLayoutDelegate-Protocol.h"

@class NSObject;

@interface TwitterUnifiedCardsUI.(UnifiedCardFacepileViewLayoutDelegate in _D3AA15E6C610F89ABBF6B01C8927A966) : NSObject <TUCComponentViewLayoutDelegate, TFNLayoutableViewLayoutDelegate> // (Swift)

/* instance methods */
- (id)layoutStateForComponent:(id)component isLastComponent:(_Bool)component disableBottomPadding:(_Bool)padding width:(double)width layoutContext:(id)context previousLayoutState:(id)state;
- (_Bool)isLayoutState:(id)state validForComponent:(id)component isLastComponent:(_Bool)component disableBottomPadding:(_Bool)padding layoutContext:(id)context;
- (void)layoutSubviewsForLayoutableView:(id)view;
- (id)init;

@end

#endif /* _TtC21TwitterUnifiedCardsUIP33_D3AA15E6C610F89ABBF6B01C8927A96637UnifiedCardFacepileViewLayoutDelegate_h */
