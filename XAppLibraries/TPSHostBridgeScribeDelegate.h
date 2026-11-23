//
#ifndef TPSHostBridgeScribeDelegate_h
#define TPSHostBridgeScribeDelegate_h
@import Foundation;

#include "TFSFeatureSwitchesEventLogging-Protocol.h"
#include "TFSTwitterAuthenticatedScribeDelegate-Protocol.h"

@class NSObject, NSString;

@interface TPSHostBridgeScribeDelegate : NSObject <TFSFeatureSwitchesEventLogging>

@property (weak, nonatomic) id <TFSTwitterAuthenticatedScribeDelegate> bridgingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithAuthenticatedScribeDelegate:(id)delegate;
- (void)logDownload;
- (void)logDownloadRequest;
- (void)logEvent:(id)event parameters:(id)parameters;
- (void)indicateForcedRestartWithIsV1:(_Bool)v1;
- (void)logImpressionForExperiment:(id)experiment bucket:(id)bucket version:(int)version;

@end

#endif /* TPSHostBridgeScribeDelegate_h */
