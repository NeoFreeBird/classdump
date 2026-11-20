//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVChatHistory_h
#define PTVChatHistory_h
@import Foundation;

@class NSArray, NSObject, NSString;

@interface PTVChatHistory : NSObject

@property (readonly, nonatomic) NSArray *messages;
@property (readonly, nonatomic) NSString *cursor;

/* class methods */
+ (id)historyFromDict:(id)dict;

/* instance methods */
- (id)initWithMessages:(id)messages cursor:(id)cursor;

@end

#endif /* PTVChatHistory_h */
