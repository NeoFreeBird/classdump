//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterTweetTopicFeedbackContext_h
#define TFNTwitterTweetTopicFeedbackContext_h
@import Foundation;

#include "TFSURTUrl.h"

@class NSObject, NSString;

@interface TFNTwitterTweetTopicFeedbackContext : NSObject // (Swift)

@property (nonatomic, readonly) NSString *topic;
@property (nonatomic, readonly) NSString *topicID;
@property (nonatomic, readonly) TFSURTUrl *url;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)initWithTopic:(id)topic topicID:(id)id url:(id)url;
- (id)init;

@end

#endif /* TFNTwitterTweetTopicFeedbackContext_h */
