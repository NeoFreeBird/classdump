//
#ifndef BRZNotificationsPayloadTypeFilter_h
#define BRZNotificationsPayloadTypeFilter_h
@import Foundation;

@class /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift, NSObject;

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
