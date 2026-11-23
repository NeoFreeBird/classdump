//
#ifndef PTVVirtualGiftContributor_h
#define PTVVirtualGiftContributor_h
@import Foundation;

#include "PTVMergeParticipantUser.h"

@class NSObject, NSString;

@interface PTVVirtualGiftContributor : NSObject

@property (readonly, nonatomic) NSString *userID;
@property (nonatomic) long long contributedStars;
@property (readonly, nonatomic) long long participant_index;
@property (nonatomic) _Bool is_present;
@property (retain, nonatomic) PTVMergeParticipantUser *user;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (id)initWithUserID:(id)id contributedStars:(long long)stars participantIndex:(long long)index;

@end

#endif /* PTVVirtualGiftContributor_h */
