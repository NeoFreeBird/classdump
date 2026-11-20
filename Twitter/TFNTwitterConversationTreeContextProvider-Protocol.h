//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
