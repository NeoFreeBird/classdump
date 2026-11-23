//
#ifndef GTMOAuth2Compatibility_h
#define GTMOAuth2Compatibility_h
@import Foundation;

@class NSObject;

@interface GTMOAuth2Compatibility : NSObject // (Swift)

/* class methods */
+ (id)persistenceResponseStringForAuthSession:(id)session;
+ (id)authSessionForPersistenceString:(id)string tokenURL:(id)url redirectURI:(id)uri clientID:(id)id clientSecret:(id)secret error:(id *)error;

/* instance methods */
- (id)init;

@end

#endif /* GTMOAuth2Compatibility_h */
