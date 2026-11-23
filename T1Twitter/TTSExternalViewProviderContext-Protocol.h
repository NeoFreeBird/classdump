//
#ifndef TTSExternalViewProviderContext_Protocol_h
#define TTSExternalViewProviderContext_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TTSExternalViewProviderContext <NSObject>

@required

/* required instance methods */
- (id)makeAvatarImageView;
- (id)makeAffiliateBadgeView;
- (id)makeAvatarPresenceView;
- (id)makeUserBadgesImageView;
- (id)makeMessageButton;

@optional

@end

#endif /* TTSExternalViewProviderContext_Protocol_h */
