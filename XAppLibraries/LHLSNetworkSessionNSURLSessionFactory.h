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
