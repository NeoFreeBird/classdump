//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1EditProfileFormDelegate_Protocol_h
#define T1EditProfileFormDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1EditProfileFormDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)editProfileFormDidTapBlueCheckmarkHintLearnMore:(id)more;
- (void)editProfileFormDidTapAccountAuthenticityLearnMore:(id)more;
- (void)editProfileFormDidChangeRows:(id)rows;

@end

#endif /* T1EditProfileFormDelegate_Protocol_h */
