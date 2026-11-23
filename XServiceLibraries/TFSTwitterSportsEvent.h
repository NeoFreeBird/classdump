//
#ifndef TFSTwitterSportsEvent_h
#define TFSTwitterSportsEvent_h
@import Foundation;

@class NSObject, NSString;

@interface TFSTwitterSportsEvent : NSObject

@property (readonly, copy, nonatomic) NSString *eventID;
@property (readonly, nonatomic) long long type;

/* instance methods */
- (id)initWithEventID:(id)id type:(long long)type;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;

@end

#endif /* TFSTwitterSportsEvent_h */
