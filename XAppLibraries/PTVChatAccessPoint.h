//
#ifndef PTVChatAccessPoint_h
#define PTVChatAccessPoint_h
@import Foundation;

@class NSObject, NSString;

@interface PTVChatAccessPoint : NSObject

@property (readonly, nonatomic) NSString *endpoint;
@property (readonly, nonatomic) NSString *accessToken;

/* instance methods */
- (id)init;
- (id)initWithEndpoint:(id)endpoint accessToken:(id)token;

@end

#endif /* PTVChatAccessPoint_h */
