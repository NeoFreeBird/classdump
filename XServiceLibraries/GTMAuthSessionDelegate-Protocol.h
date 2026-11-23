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
