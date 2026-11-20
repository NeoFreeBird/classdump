//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
