//
#ifndef T1TwitterSearchExternalViewContext_h
#define T1TwitterSearchExternalViewContext_h
@import Foundation;

#include "TTSExternalViewProviderContext-Protocol.h"

@class NSObject, NSString;

@interface T1TwitterSearchExternalViewContext : NSObject <TTSExternalViewProviderContext>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)makeAvatarImageView;
- (id)makeAffiliateBadgeView;
- (id)makeAvatarPresenceView;
- (id)makeUserBadgesImageView;
- (id)makeMessageButton;

@end

#endif /* T1TwitterSearchExternalViewContext_h */
