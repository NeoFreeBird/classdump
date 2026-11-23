//
#ifndef TFNCheckmarkConfiguration_h
#define TFNCheckmarkConfiguration_h
@import Foundation;

@class NSObject, UIColor;

@interface TFNCheckmarkConfiguration : NSObject

@property (readonly, nonatomic) _Bool checked;
@property (readonly, nonatomic) _Bool square;
@property (readonly, nonatomic) UIColor *color;

/* instance methods */
- (id)initWithCheckedState:(_Bool)state square:(_Bool)square color:(id)color;
- (_Bool)isChecked;
- (_Bool)isSquare;

@end

#endif /* TFNCheckmarkConfiguration_h */
