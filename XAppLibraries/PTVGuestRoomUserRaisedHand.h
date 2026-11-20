//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVGuestRoomUserRaisedHand_h
#define PTVGuestRoomUserRaisedHand_h
@import Foundation;

@class NSObject, NSString;

@interface PTVGuestRoomUserRaisedHand : NSObject

@property (readonly, nonatomic) NSString *emoji;

/* class methods */
+ (id)raisedHandWithEmoji:(id)emoji;
+ (id)loweredHand;

/* instance methods */
- (id)init;
- (id)initWithEmoji:(id)emoji;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;

@end

#endif /* PTVGuestRoomUserRaisedHand_h */
