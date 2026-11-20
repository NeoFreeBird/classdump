//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
