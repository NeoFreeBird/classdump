//
#ifndef APMEExperimentObserverDelegate_Protocol_h
#define APMEExperimentObserverDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSObject;
@protocol OS_dispatch_queue;

@protocol APMEExperimentObserverDelegate <NSObject>

@required

@optional

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

/* optional instance methods */
- (void)clientDidReceiveNewSnapshot:(id)snapshot;
- (void)client:(id)client didReceiveFetchError:(id)error;
- (_Bool)shouldFetchExperimentsForClient:(id)client;

@end

#endif /* APMEExperimentObserverDelegate_Protocol_h */
