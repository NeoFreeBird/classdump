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
