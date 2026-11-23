//
#ifndef GACAppCheckBackoffWrapper_h
#define GACAppCheckBackoffWrapper_h
@import Foundation;

#include "GACAppCheckBackoffOperationFailure.h"
#include "GACAppCheckBackoffWrapperProtocol-Protocol.h"

@class NSObject, NSString;

@interface GACAppCheckBackoffWrapper : NSObject <GACAppCheckBackoffWrapperProtocol>

@property (readonly, nonatomic) id /* block */ dateProvider;
@property (retain, nonatomic) GACAppCheckBackoffOperationFailure *lastFailure;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id /* block */)currentDateProvider;

/* instance methods */
- (id)init;
- (id)initWithDateProvider:(id /* block */)provider;
- (id)applyBackoffToOperation:(id /* block */)operation errorHandler:(id /* block */)handler;
- (_Bool)isNextOperationAllowed;
- (_Bool)hasTimeIntervalPassedSinceLastFailure:(double)failure;
- (id)promiseWithRetryDisallowedError:(id)error;
- (id)queue;
- (double)exponentialBackoffIntervalForFailure:(id)failure;
- (id /* block */)defaultAppCheckProviderErrorHandler;

@end

#endif /* GACAppCheckBackoffWrapper_h */
