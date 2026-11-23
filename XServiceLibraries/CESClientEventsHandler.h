//
#ifndef CESClientEventsHandler_h
#define CESClientEventsHandler_h
@import Foundation;

#include "TFSScribeOutgoingEventsHandler-Protocol.h"

@class NSObject;

@interface CESClientEventsHandler : NSObject <TFSScribeOutgoingEventsHandler> { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 context;
    B24@0:8@"NSString"16 accountId;
    B24@0:8@"NSString"16 commandLoader;
}

/* instance methods */
- (id)initWithContext:(id)context accountId:(id)id commandLoader:(id)loader;
- (id)flushGroupsWithAccountId:(id)id priority:(int)priority;
- (void)handleScribeOutgoingEvents:(id)events retryDistribution:(id)distribution completionHandler:(id /* block */)handler;
- (id)init;

@end

#endif /* CESClientEventsHandler_h */
