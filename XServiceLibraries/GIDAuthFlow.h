//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GIDAuthFlow_h
#define GIDAuthFlow_h
@import Foundation;

#include "GIDCallbackQueue.h"
#include "GIDProfileData.h"
#include "OIDAuthState.h"

@class NSError, NSString;

@interface GIDAuthFlow : GIDCallbackQueue

@property (retain, nonatomic) OIDAuthState *authState;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *emmSupport;
@property (retain, nonatomic) GIDProfileData *profileData;

/* instance methods */

@end

#endif /* GIDAuthFlow_h */
