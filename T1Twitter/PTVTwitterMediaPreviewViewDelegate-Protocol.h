//
#ifndef PTVTwitterMediaPreviewViewDelegate_Protocol_h
#define PTVTwitterMediaPreviewViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVTwitterMediaPreviewViewDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)twitterMediaPreviewView:(id)view isReadyToPlay:(_Bool)play;

@end

#endif /* PTVTwitterMediaPreviewViewDelegate_Protocol_h */
