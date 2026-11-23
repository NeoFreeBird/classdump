//
#ifndef TFSTwitterAuthTimelineTokenStorageDelegate_Protocol_h
#define TFSTwitterAuthTimelineTokenStorageDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSTwitterAuthTimelineTokenStorageDelegate <NSObject>

@required

/* required instance methods */
- (void)setAuthTimelineToken:(id)token;
- (id)authTimelineToken;

@optional

@end

#endif /* TFSTwitterAuthTimelineTokenStorageDelegate_Protocol_h */
