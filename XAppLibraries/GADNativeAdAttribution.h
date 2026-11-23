//
#ifndef GADNativeAdAttribution_h
#define GADNativeAdAttribution_h
@import Foundation;

@class NSArray, NSObject, NSString, UIColor, UIFont;

@interface GADNativeAdAttribution : NSObject

@property (readonly, nonatomic) NSArray *icons;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) UIFont *font;
@property (readonly, copy, nonatomic) UIColor *textColor;
@property (readonly, copy, nonatomic) UIColor *backgroundColor;

/* instance methods */
- (id)initWithDictionary:(id)dictionary icons:(id)icons;

@end

#endif /* GADNativeAdAttribution_h */
