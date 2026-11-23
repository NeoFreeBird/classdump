//
#ifndef TFNTwitterTweetContext_h
#define TFNTwitterTweetContext_h
@import Foundation;

#include "TFNTwitterTweetBasketballContext.h"
#include "TFNTwitterTweetGenericContext.h"
#include "TFNTwitterTweetTopicFeedbackContext.h"
#include "TFSURTUrl.h"

@class NSObject;

@interface TFNTwitterTweetContext : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 icon;
}

@property (nonatomic, readonly) long long contextType;
@property (nonatomic, readonly) TFNTwitterTweetBasketballContext *basketballContext;
@property (nonatomic, readonly) TFNTwitterTweetGenericContext *genericContext;
@property (nonatomic, readonly) TFNTwitterTweetTopicFeedbackContext *topicFeedbackContext;
@property (nonatomic, readonly) TFSURTUrl *url;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)initWithLiveEventPostContext:(id)context;
- (id)init;

@end

#endif /* TFNTwitterTweetContext_h */
