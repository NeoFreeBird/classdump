//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TLSLogMessageInfo_h
#define TLSLogMessageInfo_h
@import Foundation;

@class NSDate, NSDictionary, NSObject, NSString;

@interface TLSLogMessageInfo : NSObject {
    /* instance variables */
    NSDictionary *_formattedMessages;
    NSString *_fileFunctionLineString;
}

@property (readonly, nonatomic) long long level;
@property (readonly, copy, nonatomic) NSString *file;
@property (readonly, copy, nonatomic) NSString *function;
@property (readonly, nonatomic) long long line;
@property (readonly, copy, nonatomic) NSString *channel;
@property (readonly, nonatomic) id contextObject;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) double logLifespan;
@property (readonly, nonatomic) unsigned int threadId;
@property (readonly, copy, nonatomic) NSString *threadName;
@property (readonly, copy, nonatomic) NSString *message;

/* instance methods */
- (id)initWithLevel:(long long)level file:(id)file function:(id)function line:(long long)line channel:(id)channel timestamp:(id)timestamp logLifespan:(double)lifespan threadId:(unsigned int)id threadName:(id)name contextObject:(id)object message:(id)message;
- (id)init;
- (id)composeFormattedMessage;
- (id)composeFormattedMessageWithOptions:(long long)options;
- (id)composeFileFunctionLineString;

@end

#endif /* TLSLogMessageInfo_h */
