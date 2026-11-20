//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterBroadcast_h
#define TFSTwitterBroadcast_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "TFSTwitterEntityUserMediaWatchInfo.h"

@class NSArray, NSDate, NSNumber, NSObject, NSString, NSURL;

@interface TFSTwitterBroadcast : NSObject <NSCoding, NSCopying> { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 user;
    B24@0:8@"NSString"16 status;
    B24@0:8@"NSString"16 cardData;
}

@property (nonatomic, readonly) NSURL *assetCacheURL;
@property (nonatomic, readonly) _Bool isPlayable;
@property (nonatomic, readonly) _Bool isEndedOrTimedOut;
@property (nonatomic, readonly) NSDate *endedOrTimedoutDate;
@property (nonatomic, readonly) _Bool shouldBeRenderedSixteenByNine;
@property (nonatomic, readonly) _Bool isEndedWithoutReplay;
@property (nonatomic, readonly) _Bool isLiveOrNotStarted;
@property (nonatomic, readonly) _Bool isLive;
@property (nonatomic, readonly) _Bool isWaitingToStartBroadcast;
@property (nonatomic, readonly) _Bool hasModerators;
@property (nonatomic, readonly) NSString *viewerCount;
@property (nonatomic, readonly) NSString *broadcastID;
@property (nonatomic, readonly) NSString *appComponent;
@property (nonatomic, readonly) NSString *mediaKey;
@property (nonatomic, readonly) _Bool acceptsGifts;
@property (nonatomic, readonly) _Bool acceptsGuests;
@property (nonatomic, readonly) NSNumber *chatOption;
@property (nonatomic, readonly) _Bool callInDisabled;
@property (nonatomic, readonly) NSString *totalWatching;
@property (nonatomic, readonly) NSString *totalWatched;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) NSNumber *version;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *pingDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSDate *timedoutDate;
@property (nonatomic, readonly) NSString *imageURL;
@property (nonatomic, readonly) NSString *imageURLSmall;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) long long width;
@property (nonatomic, readonly) long long height;
@property (nonatomic, readonly) long long cameraRotation;
@property (nonatomic, readonly) _Bool isAvailableForReplay;
@property (nonatomic, retain) TFSTwitterEntityUserMediaWatchInfo *userMediaWatchInfo;
@property (nonatomic, readonly) long long broadcastSource;
@property (nonatomic, readonly) NSString *tweetID;
@property (nonatomic, readonly) _Bool requiresFineGrainGeoblocking;
@property (nonatomic, readonly) _Bool isPrivateChat;
@property (nonatomic, readonly) NSString *moderatorChannel;
@property (nonatomic, readonly) _Bool isHighLatency;
@property (nonatomic, readonly) _Bool isUnavailableInPeriscope;
@property (nonatomic, readonly) NSArray *heartThemes;
@property (nonatomic, readonly) NSDate *scheduledStartDate;
@property (nonatomic, readonly) NSURL *preLiveSlateURL;
@property (nonatomic, readonly) _Bool hasCopyrightViolationInterstitial;
@property (nonatomic, readonly) NSString *copyrightViolationCopyrightHolderName;
@property (nonatomic, readonly) NSString *copyrightViolationCopyrightContentName;
@property (nonatomic, readonly) _Bool copyrightViolationBroadcasterAllowed;
@property (nonatomic, readonly) _Bool copyrightViolationMatchAccepted;
@property (nonatomic, readonly) _Bool copyrightViolationMatchDisputed;
@property (nonatomic, readonly) double replayEditedStartTime;
@property (nonatomic, readonly) double replayEditedThumbnailTime;
@property (nonatomic, readonly) _Bool isReplayTitleEditingDisabled;
@property (nonatomic, readonly) _Bool replayTitleEdited;
@property (nonatomic, readonly) NSString *broadcasterUserID;
@property (nonatomic, readonly) NSString *broadcasterUsername;
@property (nonatomic, readonly) NSString *broadcasterDisplayName;
@property (nonatomic, readonly) NSString *broadcasterProfileImageURL;
@property (nonatomic, readonly) NSString *broadcasterTwitterUserID;
@property (nonatomic, readonly) NSString *broadcasterTwitterUsername;
@property (nonatomic, readonly) NSString *preferredBroadcasterUsername;
@property (nonatomic, readonly) NSString *preferredBroadcasterDisplayName;
@property (nonatomic, readonly) _Bool hasLocation;
@property (nonatomic, readonly) NSString *cityName;
@property (nonatomic, readonly) NSString *countryName;
@property (nonatomic, readonly) NSString *countryStateName;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x0; double x1; } broadcasterCoordinate;
@property (nonatomic, readonly) NSString *broadcasterDisplayUsername;
@property (nonatomic, readonly) NSDate *lastUpdated;

/* class methods */
+ (id)broadcastsByIDDictionaryWithJSONDictionary:(id)jsondictionary;
+ (id)unavailableBroadcastIDsWithJSONDictionary:(id)jsondictionary;

/* instance methods */
- (id)getStatusBundle;
- (long long)compareVersionToBroadcast:(id)broadcast;
- (id)initWithJSONDictionary:(id)jsondictionary;
- (id)toJSONDictionary;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)initWithBroadcastID:(id)id appComponent:(id)component mediaKey:(id)key acceptsGifts:(_Bool)gifts chatOption:(id)option acceptsGuests:(_Bool)guests callInDisabled:(_Bool)disabled totalWatching:(id)watching totalWatched:(id)watched state:(long long)state version:(id)version startDate:(id)date pingDate:(id)date endDate:(id)date timedoutDate:(id)date imageURL:(id)url imageURLSmall:(id)urlsmall title:(id)title width:(long long)width height:(long long)height cameraRotation:(long long)rotation isAvailableForReplay:(_Bool)replay broadcastSource:(long long)source tweetID:(id)id requiresFineGrainGeoblocking:(_Bool)geoblocking isPrivateChat:(_Bool)chat moderatorChannel:(id)channel isHighLatency:(_Bool)latency isUnavailableInPeriscope:(_Bool)periscope heartThemes:(id)themes scheduledStartDate:(id)date preLiveSlateURL:(id)url hasCopyrightViolationInterstitial:(_Bool)interstitial copyrightViolationCopyrightHolderName:(id)name copyrightViolationCopyrightContentName:(id)name copyrightViolationBroadcasterAllowed:(_Bool)allowed copyrightViolationMatchAccepted:(_Bool)accepted copyrightViolationMatchDisputed:(_Bool)disputed replayEditedStartTime:(double)time replayEditedThumbnailTime:(double)time isReplayTitleEditingDisabled:(_Bool)disabled replayTitleEdited:(_Bool)edited broadcasterUserID:(id)id broadcasterUsername:(id)username broadcasterDisplayName:(id)name broadcasterProfileImageURL:(id)url broadcasterTwitterUserID:(id)id broadcasterTwitterUsername:(id)username hasLocation:(_Bool)location cityName:(id)name countryName:(id)name countryStateName:(id)name broadcasterCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })coordinate lastUpdated:(id)updated;
- (_Bool)isEqualToBroadcast:(id)broadcast;
- (_Bool)isEqual:(id)equal;
- (id)copyWithZone:(void *)zone;
- (id)init;

@end

#endif /* TFSTwitterBroadcast_h */
