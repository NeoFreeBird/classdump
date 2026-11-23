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
