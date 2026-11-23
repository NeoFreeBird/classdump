//
#ifndef TFNTwitterConversationTreeContextProvider_Protocol_h
#define TFNTwitterConversationTreeContextProvider_Protocol_h
@import Foundation;

@protocol TFNTwitterStatusConversationTreeContext;

@protocol TFNTwitterConversationTreeContextProvider

@required

@property (nonatomic, readonly) id <TFNTwitterStatusConversationTreeContext> conversationTreeContext;

@optional

@end

#endif /* TFNTwitterConversationTreeContextProvider_Protocol_h */
