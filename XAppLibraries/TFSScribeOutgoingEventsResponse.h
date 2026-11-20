//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
