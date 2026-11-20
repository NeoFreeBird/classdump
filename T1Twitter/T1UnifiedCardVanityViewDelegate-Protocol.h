//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1UnifiedCardVanityViewDelegate_Protocol_h
#define T1UnifiedCardVanityViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1UnifiedCardVanityViewDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)unifiedCardVanityViewDidTapCTAButton:(id)ctabutton;

@end

#endif /* T1UnifiedCardVanityViewDelegate_Protocol_h */
