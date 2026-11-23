//
#ifndef PTVBroadcastDetailsViewSection_h
#define PTVBroadcastDetailsViewSection_h
@import Foundation;

@class NSObject;

@interface PTVBroadcastDetailsViewSection : NSObject

@property (readonly, nonatomic) long long type;

/* class methods */
+ (id)sectionWithType:(long long)type;

/* instance methods */
- (id)initWithType:(long long)type;

@end

#endif /* PTVBroadcastDetailsViewSection_h */
