//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TLSExtGenericOSLogActivityMonitor_h
#define TLSExtGenericOSLogActivityMonitor_h
@import Foundation;

#include "TLSExtOSLogActivityMonitor-Protocol.h"

@class NSObject, NSString;

@interface TLSExtGenericOSLogActivityMonitor : NSObject <TLSExtOSLogActivityMonitor> {
    /* instance variables */
    id /* block */ _logMessageBlock;
    id /* block */ _activityStreamEventBlock;
    NSString *_defaultChannel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDefaultChannel:(id)channel logMessageBlock:(id /* block */)block activityStreamEventBlock:(id /* block */)block;
- (id)tlsext_defaultChannel;
- (void)tlsext_logMessage:(id)message;
- (void)tlsext_activityStreamEvent:(id)event;

@end

#endif /* TLSExtGenericOSLogActivityMonitor_h */
