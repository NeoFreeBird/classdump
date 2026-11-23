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
