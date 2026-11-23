//
#ifndef T1InvalidCNREReporter_h
#define T1InvalidCNREReporter_h
@import Foundation;

#include "TFSInvalidClientNetworkEventsReporter-Protocol.h"

@class NSObject, NSString;

@interface T1InvalidCNREReporter : NSObject <TFSInvalidClientNetworkEventsReporter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)logger:(id)logger didReceiveInvalidNetworkEvent:(id)event;
- (void)logger:(id)logger didReceiveResponseWithEmptyMetrics:(id)metrics;

@end

#endif /* T1InvalidCNREReporter_h */
