//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC21TwitterUnifiedCardsUI52CompactCardWebsiteDetailsComponentViewLayoutDelegate_h
#define _TtC21TwitterUnifiedCardsUI52CompactCardWebsiteDetailsComponentViewLayoutDelegate_h
@import Foundation;

#include "TFNLayoutableViewLayoutDelegate-Protocol.h"
#include "TUCComponentViewLayoutDelegate-Protocol.h"

@class NSObject;

@interface TwitterUnifiedCardsUI.CompactCardWebsiteDetailsComponentViewLayoutDelegate : NSObject <TUCComponentViewLayoutDelegate, TFNLayoutableViewLayoutDelegate> // (Swift)

/* instance methods */
- (id)layoutStateForComponent:(id)component isLastComponent:(_Bool)component disableBottomPadding:(_Bool)padding width:(double)width layoutContext:(id)context previousLayoutState:(id)state;
- (_Bool)isLayoutState:(id)state validForComponent:(id)component isLastComponent:(_Bool)component disableBottomPadding:(_Bool)padding layoutContext:(id)context;
- (void)layoutSubviewsForLayoutableView:(id)view;
- (id)init;

@end

#endif /* _TtC21TwitterUnifiedCardsUI52CompactCardWebsiteDetailsComponentViewLayoutDelegate_h */
