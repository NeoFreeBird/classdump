//
#ifndef PTVBroadcastEditTitleViewDelegate_Protocol_h
#define PTVBroadcastEditTitleViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVBroadcastEditTitleViewDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)broadcastEditTitleViewDidBeginEditingTitle:(id)title;
- (void)broadcastEditTitleViewDidEditTitle:(id)title;
- (void)broadcastEditTitleViewDidEndEditingTitle:(id)title;

@end

#endif /* PTVBroadcastEditTitleViewDelegate_Protocol_h */
