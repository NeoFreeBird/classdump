//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef LHLSNetworkSessionNSURLSessionFactory_h
#define LHLSNetworkSessionNSURLSessionFactory_h
@import Foundation;

#include "LHLSNetworkSessionNSURLSessionFactory-Protocol.h"

@class NSObject;

@interface LHLSNetworkSessionNSURLSessionFactory : NSObject <LHLSNetworkSessionNSURLSessionFactory>

/* instance methods */
- (id)URLSessionWithDelegate:(id)delegate;

@end

#endif /* LHLSNetworkSessionNSURLSessionFactory_h */
