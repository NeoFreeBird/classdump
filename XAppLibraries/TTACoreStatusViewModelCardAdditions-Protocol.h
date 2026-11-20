//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTACoreStatusViewModelCardAdditions_Protocol_h
#define TTACoreStatusViewModelCardAdditions_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TTACoreStatusViewModelCardAdditions <NSObject>

@required

@property (nonatomic, readonly) _Bool isAmplifyCardVideo;
@property (nonatomic, readonly) _Bool isVideoCardTypeAmplify;
@property (nonatomic, readonly) _Bool isGIF;
@property (nonatomic, readonly) _Bool isPhoto;
@property (nonatomic, readonly) _Bool isPlayable;
@property (nonatomic, readonly) _Bool isAdsVideoCard;
@property (nonatomic, readonly) _Bool isPeriscope;
@property (nonatomic, readonly) _Bool isPoll;
@property (nonatomic, readonly) _Bool isSurvey;
@property (nonatomic, readonly) _Bool isLiveEvent;
@property (nonatomic, readonly) _Bool isBroadcast;
@property (nonatomic, readonly) _Bool isScheduledBroadcast;
@property (nonatomic, readonly) _Bool isVideoPoll;
@property (nonatomic, readonly) _Bool isYouTubeCard;
@property (nonatomic, readonly) _Bool isAudioArticle;
@property (nonatomic, readonly) _Bool isVoice;
@property (nonatomic, readonly) _Bool isMomentCard;
@property (nonatomic, readonly) long long profileImageShape;
@property (nonatomic, readonly) _Bool spaceEntity;
@property (nonatomic, readonly) _Bool spaceEntity;

/* required instance methods */
- (_Bool)isSpaceEntity;
- (_Bool)isSpaceEntity;

@optional

@end

#endif /* TTACoreStatusViewModelCardAdditions_Protocol_h */
