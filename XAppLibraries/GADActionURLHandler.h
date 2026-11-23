//
#ifndef GADActionURLHandler_h
#define GADActionURLHandler_h
@import Foundation;

#include "GADEventContextSource-Protocol.h"

@class NSMutableArray, NSObject, NSSet;
@protocol OS_dispatch_queue;

@interface GADActionURLHandler : NSObject {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_lockQueue;
    _Bool _bufferActionsPaused;
    NSMutableArray *_bufferedURLRequests;
    id <GADEventContextSource> _messageSource;
    NSSet *_allowlistedURLSchemes;
    NSSet *_notificationsToBuffer;
}

/* instance methods */
- (id)initWithMessageSource:(id)source;
- (void)handleActionURLRequest:(id)urlrequest;
- (void)pauseBufferedActions;
- (void)resumeBufferedActions;

@end

#endif /* GADActionURLHandler_h */
