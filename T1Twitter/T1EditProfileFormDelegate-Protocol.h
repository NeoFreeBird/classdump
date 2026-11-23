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
