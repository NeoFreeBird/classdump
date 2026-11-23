//
#ifndef T1OnboardingAuthTokenStorage_h
#define T1OnboardingAuthTokenStorage_h
@import Foundation;

#include "TFSTwitterAuthTimelineTokenStorageDelegate-Protocol.h"

@class NSObject, NSString;

@interface T1OnboardingAuthTokenStorage : NSObject <TFSTwitterAuthTimelineTokenStorageDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)setAuthTimelineToken:(id)token;
- (id)authTimelineToken;

@end

#endif /* T1OnboardingAuthTokenStorage_h */
