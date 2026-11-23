//
#ifndef TFNBadgesLayout_h
#define TFNBadgesLayout_h
@import Foundation;

@class NSObject;

@interface TFNBadgesLayout : NSObject // (Swift)

/* class methods */
+ (struct CGSize { double x0; double x1; })sizeWithBadges:(id)badges;
+ (struct CGSize { double x0; double x1; })sizeWithBadges:(id)badges customSize:(struct CGSize { double x0; double x1; })size;

/* instance methods */
- (id)init;

@end

#endif /* TFNBadgesLayout_h */
