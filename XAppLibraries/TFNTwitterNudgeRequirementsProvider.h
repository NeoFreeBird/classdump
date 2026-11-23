//
#ifndef TFNTwitterNudgeRequirementsProvider_h
#define TFNTwitterNudgeRequirementsProvider_h
@import Foundation;

@class NSObject, NSString;

@interface TFNTwitterNudgeRequirementsProvider : NSObject

@property (readonly, nonatomic) long long userID;
@property (readonly, copy, nonatomic) NSString *screenName;

/* instance methods */
- (id)initWithAccount:(id)account;
- (id)init;
- (_Bool)shouldNudgeTweetForComposition:(id)composition;
- (_Bool)_tfn_shouldNudgeForReplyTweet:(id)tweet;
- (_Bool)_tfn_shouldNudgeForOriginalTweet:(id)tweet;
- (_Bool)_tfn_shouldNudgeForQuoteTweet:(id)tweet;
- (_Bool)_tfn_shouldNudgeForRetweet:(id)retweet;

@end

#endif /* TFNTwitterNudgeRequirementsProvider_h */
