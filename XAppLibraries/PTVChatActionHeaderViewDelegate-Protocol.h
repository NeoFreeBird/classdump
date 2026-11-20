//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVChatActionHeaderViewDelegate_Protocol_h
#define PTVChatActionHeaderViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVChatActionHeaderViewDelegate <NSObject>

@required

/* required instance methods */
- (void)chatActionHeaderViewDidChangeMessageViewIndex:(unsigned long long)index;
- (void)chatActionHeaderViewDidEndScroll;
- (id)chatActionHeaderViewMessageAtCurrentIndex;

@optional

@end

#endif /* PTVChatActionHeaderViewDelegate_Protocol_h */
