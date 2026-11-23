//
#ifndef GTMStandardUserAgentProvider_h
#define GTMStandardUserAgentProvider_h
@import Foundation;

#include "GTMUserAgentProvider-Protocol.h"

@class NSBundle, NSObject, NSString;

@interface GTMStandardUserAgentProvider : NSObject <GTMUserAgentProvider> {
    /* instance variables */
    NSBundle *_bundle;
}

@property (copy) NSString *cachedUserAgent;
@property (readonly, copy) NSString *userAgent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithBundle:(id)bundle;

@end

#endif /* GTMStandardUserAgentProvider_h */
