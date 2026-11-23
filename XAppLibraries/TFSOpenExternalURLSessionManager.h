//
#ifndef TFSOpenExternalURLSessionManager_h
#define TFSOpenExternalURLSessionManager_h
@import Foundation;

#include "TFNExternalURLAbuseProtection.h"

@class NSObject;

@interface TFSOpenExternalURLSessionManager : NSObject

@property (readonly, nonatomic) TFNExternalURLAbuseProtection *abuseProtection;

/* class methods */
+ (void)initialize;
+ (_Bool)protectsAgainstUntrustedURLs;
+ (void)setProtectsAgainstUntrustedURLs:(_Bool)urls;
+ (void)_tfn_resetURLsKnownToFail;

/* instance methods */
- (id)init;
- (void)openExternalURL:(id)url context:(id)context completion:(id /* block */)completion;
- (void)_tfs_userCancelledOpenExternalURLPrompt:(id /* block */)urlprompt;
- (void)_tfs_openExternalURL:(id)url completion:(id /* block */)completion;
- (_Bool)_tfn_shouldBlockLoadForURL:(id)url;
- (void)_tfn_promptUserToLoadURL:(id)url completion:(id /* block */)completion;
- (void)_tfn_openOutboundURL:(id)url completion:(id /* block */)completion;

@end

#endif /* TFSOpenExternalURLSessionManager_h */
