//
#ifndef TFSTwitterStatusBundle_h
#define TFSTwitterStatusBundle_h
@import Foundation;

#include "TFSTwitterCardData.h"
#include "TFSTwitterCommunity.h"
#include "TFSTwitterConversation.h"
#include "TFSTwitterImageInterstitial.h"
#include "TFSTwitterStatus.h"
#include "TFSTwitterUnifiedCard.h"
#include "TFSTwitterUser.h"

@class NSArray, NSObject;

@interface TFSTwitterStatusBundle : NSObject // (Swift)

@property (nonatomic, readonly) TFSTwitterStatus *status;
@property (nonatomic, readonly) TFSTwitterUser *fromUser;
@property (nonatomic, readonly) TFSTwitterCardData *cardData;
@property (nonatomic, readonly) NSArray *cardUsers;
@property (nonatomic, readonly) TFSTwitterCommunity *community;
@property (nonatomic, readonly) NSArray *conversationTopParticipants;
@property (nonatomic, readonly) TFSTwitterStatusBundle *retweetedTweet;
@property (nonatomic, readonly) TFSTwitterStatusBundle *quotedTweet;
@property (nonatomic, readonly) TFSTwitterConversation *conversation;
@property (nonatomic, readonly) TFSTwitterUnifiedCard *unifiedCard;
@property (nonatomic, readonly) TFSTwitterImageInterstitial *imageInterstitial;

/* instance methods */
- (id)statusBundleWithEditControl:(id)control;
- (id)statusBundleWithUpdatedEntities:(id)entities;
- (id)init;

@end

#endif /* TFSTwitterStatusBundle_h */
