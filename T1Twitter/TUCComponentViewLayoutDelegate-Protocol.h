//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCComponentViewLayoutDelegate_Protocol_h
#define TUCComponentViewLayoutDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TUCComponentViewLayoutDelegate <NSObject>

@required

/* required instance methods */
- (id)layoutStateForComponent:(id)component isLastComponent:(_Bool)component disableBottomPadding:(_Bool)padding width:(double)width layoutContext:(id)context previousLayoutState:(id)state;
- (id)layoutStateForComponent:(id)component isLastComponent:(_Bool)component disableBottomPadding:(_Bool)padding width:(double)width layoutContext:(id)context previousLayoutState:(id)state;
- (_Bool)isLayoutState:(id)state validForComponent:(id)component isLastComponent:(_Bool)component disableBottomPadding:(_Bool)padding layoutContext:(id)context;

@optional

@end

#endif /* TUCComponentViewLayoutDelegate_Protocol_h */
