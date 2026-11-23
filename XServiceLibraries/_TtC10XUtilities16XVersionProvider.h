//
#ifndef _TtC10XUtilities16XVersionProvider_h
#define _TtC10XUtilities16XVersionProvider_h
@import Foundation;

#include "_TtP15XAppAttestation32AttestationClientVersionProvider_-Protocol.h"

@class NSObject, _$sSSSg;

@interface XUtilities.XVersionProvider : NSObject <XAppAttestation.AttestationClientVersionProvider> { // (Swift)
    /* instance variables */
    Swift.String? $__lazy_storage_$_cachedClientVersion;
}

/* class methods */
+ (id)shared;
+ (id)userAgentAppName;
+ (void)setUserAgentAppName:(id)name;
+ (id)sharedInstance;

/* instance methods */
- (id)platform;
- (id)platformWithAppName:(id)name;
- (id)osVersion;
- (id)appName;
- (id)clientVersion;
- (id)init;

@end

#endif /* _TtC10XUtilities16XVersionProvider_h */
