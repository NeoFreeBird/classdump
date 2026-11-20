//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GTMAuthSessionDelegate_Protocol_h
#define GTMAuthSessionDelegate_Protocol_h
@import Foundation;

@protocol GTMAuthSessionDelegate

@required

@optional

/* optional instance methods */
- (id)additionalTokenRefreshParametersForAuthSession:(id)session;
- (void)updateErrorForAuthSession:(id)session originalError:(id)error completion:(id /* block */)completion;

@end

#endif /* GTMAuthSessionDelegate_Protocol_h */
