//
#ifndef TFSTwitterAuthSingleSignOn_h
#define TFSTwitterAuthSingleSignOn_h
@import Foundation;

@class NSObject, NSString, TFSAuthConsumerCredential;

@interface TFSTwitterAuthSingleSignOn : NSObject

@property (retain, nonatomic) TFSAuthConsumerCredential *requestingAppCredential;
@property (copy, nonatomic) NSString *oauthCallbackURLString;
@property (copy, nonatomic) NSString *sourceAppBundleID;

/* instance methods */
- (id)initWithRequestingAppCredential:(id)credential oauthCallbackURLString:(id)urlstring sourceAppBundleID:(id)id;
- (void)retrieveRequestTokenAndAccountPermissionsWithCompletion:(id /* block */)completion;
- (void)retrieveAccessTokenWithAccountID:(id)id authParameters:(id)parameters completion:(id /* block */)completion;

@end

#endif /* TFSTwitterAuthSingleSignOn_h */
