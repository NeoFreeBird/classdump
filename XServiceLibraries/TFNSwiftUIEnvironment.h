//
#ifndef TFNSwiftUIEnvironment_h
#define TFNSwiftUIEnvironment_h
@import Foundation;

#include "TFNLayoutMetrics.h"

@class NSNumber, NSObject, NSString, UIColor, UIFont;

@interface TFNSwiftUIEnvironment : NSObject

@property (readonly, nonatomic) NSString *accountID;
@property (readonly, nonatomic) UIFont *font;
@property (readonly, nonatomic) TFNLayoutMetrics *layoutMetrics;
@property (readonly, nonatomic) UIColor *foregroundColor;
@property (readonly, nonatomic) UIColor *linkColor;
@property (readonly, nonatomic) UIColor *linkHighlightColor;
@property (readonly, nonatomic) NSNumber *linkHighlightBehavior;

/* instance methods */
- (id)initWithAccountID:(id)id font:(id)font layoutMetrics:(id)metrics foregroundColor:(id)color linkColor:(id)color linkHighlightColor:(id)color linkHighlightBehavior:(id)behavior;

@end

#endif /* TFNSwiftUIEnvironment_h */
