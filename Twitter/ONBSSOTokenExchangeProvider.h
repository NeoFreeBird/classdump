//
#ifndef ONBSSOTokenExchangeProvider_h
#define ONBSSOTokenExchangeProvider_h
@import Foundation;

@class NSArray, NSObject, NSString;

@interface ONBSSOTokenExchangeProvider : NSObject {
    /* instance variables */
    NSString *_authURL;
    NSString *_state;
    NSString *_redirectURI;
    NSString *_exchangeURL;
    NSString *_clientID;
    NSArray *_scopes;
    NSString *_codeVerifier;
}

/* instance methods */
- (id)initWithAuthURL:(id)url state:(id)state redirectURI:(id)uri exchangeURL:(id)url clientID:(id)id scopes:(id)scopes;
- (id)authRequestURL;
- (void)exchangeAuthTokenForAccessInfo:(id)info completion:(id /* block */)completion;

@end

#endif /* ONBSSOTokenExchangeProvider_h */
