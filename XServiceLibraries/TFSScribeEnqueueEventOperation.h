//
#ifndef TFSScribeEnqueueEventOperation_h
#define TFSScribeEnqueueEventOperation_h
@import Foundation;

#include "TFSScribeEventSerializer-Protocol.h"
#include "TFSScribeOperation.h"

@interface TFSScribeEnqueueEventOperation : TFSScribeOperation

@property (readonly, nonatomic) id <TFSScribeEventSerializer> eventSerializer;
@property (readonly, copy, nonatomic) id /* block */ didEnqueueEvent;

/* instance methods */
- (id)initWithApplicationLink:(id)link databaseProvider:(id)provider event:(id)event didEnqueueEvent:(id /* block */)event;
- (void)main;

@end

#endif /* TFSScribeEnqueueEventOperation_h */
