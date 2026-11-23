//
#ifndef TFNNoOpScribeSink_h
#define TFNNoOpScribeSink_h
@import Foundation;

#include "TFNScribeSink-Protocol.h"

@class NSObject, NSString;

@interface TFNNoOpScribeSink : NSObject <TFNScribeSink>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedSink;

/* instance methods */
- (void)receiveAction:(id)action withContext:(id)context;

@end

#endif /* TFNNoOpScribeSink_h */
