//
#ifndef TFSFeatureSwitchesEventLogging_Protocol_h
#define TFSFeatureSwitchesEventLogging_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSFeatureSwitchesEventLogging <NSObject>

@required

/* required instance methods */
- (void)logEvent:(id)event parameters:(id)parameters;
- (void)logDownloadRequest;
- (void)logDownload;
- (void)indicateForcedRestartWithIsV1:(_Bool)v1;
- (void)logImpressionForExperiment:(id)experiment bucket:(id)bucket version:(int)version;

@optional

@end

#endif /* TFSFeatureSwitchesEventLogging_Protocol_h */
