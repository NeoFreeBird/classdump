//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSHTTPRequestScribeMethods_Protocol_h
#define TFSHTTPRequestScribeMethods_Protocol_h
@import Foundation;

@protocol TFSHTTPRequestScribeMethods

@required

/* required instance methods */
- (void)logWithAttempt:(id)attempt for:(id)_for disposition:(long long)disposition retryCount:(unsigned long long)count;
- (void)logWithAuthDependencyError:(id)error for:(id)_for;
- (void)logRedirectFrom:(id)from to:(id)to requestOperationId:(long long)id;
- (id)legacyScribeForResponse:(id)response;
- (void)logTransactionMetrics:(id)metrics forResponse:(id)response;

@optional

@end

#endif /* TFSHTTPRequestScribeMethods_Protocol_h */
