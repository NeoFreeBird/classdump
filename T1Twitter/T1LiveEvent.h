//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1LiveEvent_h
#define T1LiveEvent_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "T1ShareableByURL-Protocol.h"
#include "TFSTwitterCanonicalUser-Protocol.h"
#include "TTACoreShareable-Protocol.h"

@class NSArray, NSObject, NSString, TFSTwitterEntityImageInfo, TFSTwitterLiveEventRemindMeSubscription, TFSTwitterLiveEventSponsorshipDetails, TFSTwitterRect;

@interface T1LiveEvent : NSObject <TTACoreShareable, T1ShareableByURL, NSCopying>

@property (readonly, nonatomic) NSString *twitterURLForShare;
@property (readonly, nonatomic) NSString *twitterURLForShareToSnap;
@property (readonly, nonatomic) NSString *twitterURLForEmail;
@property (readonly, nonatomic) NSString *twitterURLForCopy;
@property (readonly, nonatomic) NSString *twitterURLForMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) _Bool shareTokenInURLEnabled;
@property (readonly, copy, nonatomic) NSString *eventID;
@property (readonly, copy, nonatomic) NSString *shortTitle;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *category;
@property (readonly, copy, nonatomic) NSString *timeString;
@property (readonly, copy, nonatomic) id <TFSTwitterCanonicalUser> attributionUser;
@property (readonly, copy, nonatomic) NSString *descriptionText;
@property (readonly, copy, nonatomic) NSArray *descriptionEntities;
@property (readonly, copy, nonatomic) NSString *badge;
@property (readonly, copy, nonatomic) NSString *hashtag;
@property (readonly, nonatomic) _Bool sensitive;
@property (readonly, nonatomic) TFSTwitterLiveEventRemindMeSubscription *remindMeSubscription;
@property (readonly, copy, nonatomic) TFSTwitterLiveEventSponsorshipDetails *sponsorshipDetails;
@property (readonly, nonatomic) TFSTwitterEntityImageInfo *thumbnailImageInfo;
@property (readonly, nonatomic) TFSTwitterEntityImageInfo *squareThumbnailImageInfo;
@property (readonly, copy, nonatomic) TFSTwitterRect *thumbnailImageCropRect;
@property (readonly, copy, nonatomic) NSArray *timelineVariants;

/* class methods */
+ (id)liveEventForAPILiveEvent:(id)event usersDictionary:(id)dictionary;

/* instance methods */
- (id)_t1_twitterURLForShareWithFormat:(id)format;
- (id)_t1_transformShareURL:(id)url;
- (_Bool)isUserGeneratedByAccount:(id)account;
- (id)initWithEventID:(id)id shortTitle:(id)title title:(id)title subtitle:(id)subtitle category:(id)category timeString:(id)string attributionUser:(id)user descriptionText:(id)text descriptionEntities:(id)entities badge:(id)badge hashtag:(id)hashtag sensitive:(_Bool)sensitive remindMeSubscription:(id)subscription sponsorshipDetails:(id)details thumbnailImageInfo:(id)info squareThumbnailImageInfo:(id)info thumbnailImageCropRect:(id)rect timelineVariants:(id)variants;
- (id)initPartialLiveEventWithEventID:(id)id;
- (id)init;
- (_Bool)isEqual:(id)equal;
- (_Bool)isEqualToLiveEvent:(id)event;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)scribeParameters;
- (_Bool)isSensitive;

@end

#endif /* T1LiveEvent_h */
