//
#ifndef TLPInternalEvent_h
#define TLPInternalEvent_h
@import Foundation;

@class NSDictionary, NSObject, NSString;

@interface TLPInternalEvent : NSObject

@property (readonly, nonatomic) long long eventType;
@property (readonly, copy, nonatomic) NSString *eventTopic;
@property (readonly, copy, nonatomic) NSDictionary *payload;

/* class methods */
+ (id)eventWithJSONData:(id)jsondata;

/* instance methods */
- (id)initWithEventType:(long long)type topic:(id)topic payload:(id)payload;
- (id)description;

@end

#endif /* TLPInternalEvent_h */
