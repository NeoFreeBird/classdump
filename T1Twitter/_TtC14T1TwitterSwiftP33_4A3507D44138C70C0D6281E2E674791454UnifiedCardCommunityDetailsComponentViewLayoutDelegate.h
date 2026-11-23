//
#ifndef _TtC14T1TwitterSwiftP33_4A3507D44138C70C0D6281E2E674791454UnifiedCardCommunityDetailsComponentViewLayoutDelegate_h
#define _TtC14T1TwitterSwiftP33_4A3507D44138C70C0D6281E2E674791454UnifiedCardCommunityDetailsComponentViewLayoutDelegate_h
@import Foundation;

#include "TFNLayoutableViewLayoutDelegate-Protocol.h"
#include "TUCComponentViewLayoutDelegate-Protocol.h"

@class NSObject;

@interface T1TwitterSwift.(UnifiedCardCommunityDetailsComponentViewLayoutDelegate in _4A3507D44138C70C0D6281E2E6747914) : NSObject <TUCComponentViewLayoutDelegate, TFNLayoutableViewLayoutDelegate> // (Swift)

/* instance methods */
- (_Bool)isLayoutState:(id)state validForComponent:(id)component isLastComponent:(_Bool)component disableBottomPadding:(_Bool)padding layoutContext:(id)context;
- (id)layoutStateForComponent:(id)component isLastComponent:(_Bool)component disableBottomPadding:(_Bool)padding width:(double)width layoutContext:(id)context previousLayoutState:(id)state;
- (void)layoutSubviewsForLayoutableView:(id)view;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwiftP33_4A3507D44138C70C0D6281E2E674791454UnifiedCardCommunityDetailsComponentViewLayoutDelegate_h */
