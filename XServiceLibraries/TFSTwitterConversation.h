//
#ifndef TFSTwitterConversation_h
#define TFSTwitterConversation_h
@import Foundation;

@class NSObject;

@interface TFSTwitterConversation : NSObject // (Swift)

@property (nonatomic, readonly) long long conversationID;
@property (nonatomic, readonly) _Bool conversationMuted;

/* class methods */
+ (id)observableForConversationID:(long long)id modelContext:(id)context;
+ (id)assimilatePendingMuteForConversationID:(long long)id mute:(_Bool)mute modelContext:(id)context;

/* instance methods */
- (id)initWithConversationID:(long long)id conversationMuted:(_Bool)muted;
- (id)init;

@end

#endif /* TFSTwitterConversation_h */
