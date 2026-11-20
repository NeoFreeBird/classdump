//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
