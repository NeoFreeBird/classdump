//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
