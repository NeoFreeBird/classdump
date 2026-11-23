//
#ifndef _TtP14ChatNetworking20RequestAuthenticator__Protocol_h
#define _TtP14ChatNetworking20RequestAuthenticator__Protocol_h
@import Foundation;

@protocol ChatNetworking.RequestAuthenticator

@required

/* required instance methods */
- (void)signWithRequest:(id)request parameters:(id)parameters completion:(id /* block */)completion;

@optional

@end

#endif /* _TtP14ChatNetworking20RequestAuthenticator__Protocol_h */
