//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef LHLSNetworkSessionNSURLSessionFactory_Protocol_h
#define LHLSNetworkSessionNSURLSessionFactory_Protocol_h
@import Foundation;

@protocol LHLSNetworkSessionNSURLSessionFactory

@required

/* required instance methods */
- (id)URLSessionWithDelegate:(id)delegate;

@optional

@end

#endif /* LHLSNetworkSessionNSURLSessionFactory_Protocol_h */
