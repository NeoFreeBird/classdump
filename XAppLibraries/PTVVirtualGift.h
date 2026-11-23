//
#ifndef PTVVirtualGift_h
#define PTVVirtualGift_h
@import Foundation;

#include "PTVGiftStyle.h"

@class NSObject, NSString;

@interface PTVVirtualGift : NSObject

@property (readonly, nonatomic) NSString *remoteID;
@property (readonly, nonatomic) long long coin_amount;
@property (readonly, nonatomic) _Bool supportsAvatar;
@property (readonly, nonatomic) NSString *giftStyleID;
@property (retain, nonatomic) PTVGiftStyle *style;

/* instance methods */
- (id)initWithRemoteID:(id)id coinAmount:(long long)amount styleID:(id)id;
- (id)initWithMessage:(id)message;

@end

#endif /* PTVVirtualGift_h */
