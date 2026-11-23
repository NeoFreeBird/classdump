//
#ifndef FIRHeartbeatLogger_h
#define FIRHeartbeatLogger_h
@import Foundation;

#include "FIRHeartbeatController.h"
#include "FIRHeartbeatLoggerProtocol-Protocol.h"

@class NSObject, NSString;

@interface FIRHeartbeatLogger : NSObject <FIRHeartbeatLoggerProtocol>

@property (readonly, nonatomic) FIRHeartbeatController *heartbeatController;
@property (readonly, copy) id /* block */ userAgentProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id /* block */)currentUserAgentProvider;

/* instance methods */
- (id)initWithAppID:(id)id;
- (id)initWithAppID:(id)id userAgentProvider:(id /* block */)provider;
- (void)log;
- (id)headerValue;
- (void)asyncHeaderValueWithCompletionHandler:(id /* block */)handler;
- (id)flushHeartbeatsIntoPayload;
- (void)flushHeartbeatsIntoPayloadWithCompletionHandler:(id /* block */)handler;
- (long long)heartbeatCodeForToday;

@end

#endif /* FIRHeartbeatLogger_h */
