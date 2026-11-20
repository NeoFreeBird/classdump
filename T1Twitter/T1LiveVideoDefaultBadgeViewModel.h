//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1LiveVideoDefaultBadgeViewModel_h
#define T1LiveVideoDefaultBadgeViewModel_h
@import Foundation;

#include "T1LiveVideoBadgeViewModel-Protocol.h"

@class NSObject, NSString;

@interface T1LiveVideoDefaultBadgeViewModel : NSObject <T1LiveVideoBadgeViewModel>

@property (copy, nonatomic) NSString *badgeText;
@property (nonatomic) _Bool isEventCurrentlyLive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;

@end

#endif /* T1LiveVideoDefaultBadgeViewModel_h */
