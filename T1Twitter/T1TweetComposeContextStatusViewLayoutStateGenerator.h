//
#ifndef T1TweetComposeContextStatusViewLayoutStateGenerator_h
#define T1TweetComposeContextStatusViewLayoutStateGenerator_h
@import Foundation;

#include "TTACoreStatusViewLayoutStateGenerator-Protocol.h"

@class NSObject, NSString;

@interface T1TweetComposeContextStatusViewLayoutStateGenerator : NSObject <TTACoreStatusViewLayoutStateGenerator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)layoutStateForViewModel:(id)model options:(unsigned long long)options account:(id)account layoutMetrics:(id)metrics withPreviousLayoutState:(id)state;

@end

#endif /* T1TweetComposeContextStatusViewLayoutStateGenerator_h */
