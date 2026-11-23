//
#ifndef TAVScribeThriftLiveVideoEventDetails_h
#define TAVScribeThriftLiveVideoEventDetails_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSNumber, NSObject, NSString;

@interface TAVScribeThriftLiveVideoEventDetails : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *liveVideoEventDetailsId;
@property (copy, nonatomic) NSNumber *cardEventId;
@property (copy, nonatomic) NSString *timelineId;
@property (copy, nonatomic) NSNumber *remindMeToggleVisible;
@property (copy, nonatomic) NSNumber *remindMeSubscribed;
@property (copy, nonatomic) NSString *remindMeNotificationId;
@property (copy, nonatomic) NSNumber *promptID;
@property (copy, nonatomic) NSNumber *tweetID;
@property (copy, nonatomic) NSString *hostEventId;
@property (copy, nonatomic) NSString *targetEventId;

/* instance methods */
- (id)initWithId:(id)id cardEventId:(id)id timelineId:(id)id remindMeToggleVisible:(id)visible remindMeSubscribed:(id)subscribed remindMeNotificationId:(id)id promptID:(id)id tweetID:(id)id hostEventId:(id)id targetEventId:(id)id;
- (id)init;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)marshallerDictionary;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* TAVScribeThriftLiveVideoEventDetails_h */
