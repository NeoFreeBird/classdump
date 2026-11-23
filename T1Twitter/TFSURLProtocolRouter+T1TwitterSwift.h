//
#ifndef TFSURLProtocolRouter_T1TwitterSwift_h
#define TFSURLProtocolRouter_T1TwitterSwift_h
@import Foundation;

@interface TFSURLProtocolRouter (T1TwitterSwift)

/* instance methods */
- (_Bool)supportsUrtURL:(id)url;
- (unsigned long long)handleUrtURL:(id)url navigationContext:(id)context referrer:(id)referrer;
- (unsigned long long)handleUrtURL:(id)url navigationContext:(id)context referrer:(id)referrer routeCompletion:(id /* block */)completion;

@end

#endif /* TFSURLProtocolRouter_T1TwitterSwift_h */
