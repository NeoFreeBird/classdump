//
#ifndef TFSScribeOutgoingEventsResponse_h
#define TFSScribeOutgoingEventsResponse_h
@import Foundation;

@class NSObject;

@interface TFSScribeOutgoingEventsResponse : NSObject

@property (readonly, nonatomic) unsigned long long behavior;

/* class methods */
+ (id)new;

/* instance methods */
- (id)init;
- (id)initWithBehavior:(unsigned long long)behavior;

@end

#endif /* TFSScribeOutgoingEventsResponse_h */
