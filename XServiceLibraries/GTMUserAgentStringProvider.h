//
#ifndef GTMUserAgentStringProvider_h
#define GTMUserAgentStringProvider_h
@import Foundation;

#include "GTMUserAgentProvider-Protocol.h"

@class NSObject, NSString;

@interface GTMUserAgentStringProvider : NSObject <GTMUserAgentProvider>

@property (readonly, copy) NSString *cachedUserAgent;
@property (readonly, copy) NSString *userAgent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserAgentString:(id)string;

@end

#endif /* GTMUserAgentStringProvider_h */
