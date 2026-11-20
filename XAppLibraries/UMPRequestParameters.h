//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UMPRequestParameters_h
#define UMPRequestParameters_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "UMPDebugSettings.h"

@class NSNumber, NSObject;

@interface UMPRequestParameters : NSObject <NSCopying> {
    /* instance variables */
    NSNumber *_tagForUnderAgeOfConsentValue;
}

@property (nonatomic) _Bool tagForUnderAgeOfConsent;
@property (copy, nonatomic) UMPDebugSettings *debugSettings;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)tagForUnderAgeOfConsentValue;

@end

#endif /* UMPRequestParameters_h */
