//
#ifndef TUCLayoutContext_h
#define TUCLayoutContext_h
@import Foundation;

@class NSNumber, NSObject, NSValue, TFNLayoutMetrics;

@interface TUCLayoutContext : NSObject

@property (retain, nonatomic) NSValue *contentInsetsValue;
@property (readonly, nonatomic) TFNLayoutMetrics *layoutMetrics;
@property (readonly, nonatomic) NSNumber *componentWidth;
@property (readonly, nonatomic) NSNumber *leadingInset;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentInsets;
@property (readonly, nonatomic) _Bool shouldHideFooter;

/* class methods */
+ (id)layoutContextWithLayoutMetrics:(id)metrics;

/* instance methods */
- (id)initWithLayoutMetrics:(id)metrics leadingInset:(id)inset componentWidth:(id)width contentInsetsValue:(id)value shouldHideFooter:(_Bool)footer;
- (id)withLayoutMetrics:(id)metrics;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;

@end

#endif /* TUCLayoutContext_h */
