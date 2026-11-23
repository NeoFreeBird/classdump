//
#ifndef _TtC21TwitterUnifiedCardsUI42AppStoreDetailsComponentViewLayoutDelegate_h
#define _TtC21TwitterUnifiedCardsUI42AppStoreDetailsComponentViewLayoutDelegate_h
@import Foundation;

#include "TFNLayoutableViewLayoutDelegate-Protocol.h"
#include "TUCComponentViewLayoutDelegate-Protocol.h"

@class NSObject;

@interface TwitterUnifiedCardsUI.AppStoreDetailsComponentViewLayoutDelegate : NSObject <TUCComponentViewLayoutDelegate, TFNLayoutableViewLayoutDelegate> // (Swift)

/* instance methods */
- (void)layoutSubviewsForLayoutableView:(id)view;
- (id)layoutStateForComponent:(id)component isLastComponent:(_Bool)component disableBottomPadding:(_Bool)padding width:(double)width layoutContext:(id)context previousLayoutState:(id)state;
- (_Bool)isLayoutState:(id)state validForComponent:(id)component isLastComponent:(_Bool)component disableBottomPadding:(_Bool)padding layoutContext:(id)context;
- (id)init;

@end

#endif /* _TtC21TwitterUnifiedCardsUI42AppStoreDetailsComponentViewLayoutDelegate_h */
