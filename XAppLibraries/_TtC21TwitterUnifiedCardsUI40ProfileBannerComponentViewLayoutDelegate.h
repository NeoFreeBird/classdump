//
#ifndef _TtC21TwitterUnifiedCardsUI40ProfileBannerComponentViewLayoutDelegate_h
#define _TtC21TwitterUnifiedCardsUI40ProfileBannerComponentViewLayoutDelegate_h
@import Foundation;

#include "TUCComponentViewLayoutDelegate-Protocol.h"

@class NSObject;

@interface TwitterUnifiedCardsUI.ProfileBannerComponentViewLayoutDelegate : NSObject <TUCComponentViewLayoutDelegate> // (Swift)

/* instance methods */
- (id)layoutStateForComponent:(id)component isLastComponent:(_Bool)component disableBottomPadding:(_Bool)padding width:(double)width layoutContext:(id)context previousLayoutState:(id)state;
- (_Bool)isLayoutState:(id)state validForComponent:(id)component isLastComponent:(_Bool)component disableBottomPadding:(_Bool)padding layoutContext:(id)context;
- (id)init;

@end

#endif /* _TtC21TwitterUnifiedCardsUI40ProfileBannerComponentViewLayoutDelegate_h */
