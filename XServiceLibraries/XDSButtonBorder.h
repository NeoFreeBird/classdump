//
#ifndef XDSButtonBorder_h
#define XDSButtonBorder_h
@import Foundation;

@class NSObject, UIColor;

@interface XDSButtonBorder : NSObject // (Swift)

@property (nonatomic, readonly) double width;
@property (nonatomic, readonly) UIColor *color;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (id)initWithWidth:(double)width color:(id)color;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* XDSButtonBorder_h */
