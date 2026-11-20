//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVJanusMessage_h
#define PTVJanusMessage_h
@import Foundation;

@class NSObject, NSString;

@interface PTVJanusMessage : NSObject {
    /* instance variables */
    NSString *_transactionId;
}

@property (readonly, nonatomic) unsigned long long type;

/* instance methods */
- (id)initWithType:(unsigned long long)type;
- (id)JSONDictionary;

@end

#endif /* PTVJanusMessage_h */
