//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef BRZNotificationsPayloadTypeFilter_h
#define BRZNotificationsPayloadTypeFilter_h
@import Foundation;

@class Chat.DidEndCall, NSObject;

@interface BRZNotificationsPayloadTypeFilter : NSObject // (Swift)

@property (nonatomic, readonly) long long rawValue;
@property (nonatomic, readonly) long long hash;

/* class methods */
+ (id)received;
+ (id)opened;

/* instance methods */
- (id)initWithRawValue:(long long)value;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* BRZNotificationsPayloadTypeFilter_h */
