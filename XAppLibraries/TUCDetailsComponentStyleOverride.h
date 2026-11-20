//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCDetailsComponentStyleOverride_h
#define TUCDetailsComponentStyleOverride_h
@import Foundation;

@class NSNumber, NSObject, UIColor, UIFont;

@interface TUCDetailsComponentStyleOverride : NSObject // (Swift)

@property (nonatomic, readonly) UIFont *titleFont;
@property (nonatomic, readonly) UIColor *titleTextColor;
@property (nonatomic, readonly) NSNumber *titleMaxNumberOfLines;
@property (nonatomic, readonly) UIFont *subtitleFont;
@property (nonatomic, readonly) UIColor *subtitleTextColor;
@property (nonatomic, readonly) NSNumber *subtitleExtraTopPadding;
@property (nonatomic, readonly) NSNumber *leadingInset;
@property (nonatomic, readonly) NSNumber *trailingInset;
@property (nonatomic, readonly) UIColor *backgroundColor;

/* instance methods */
- (id)initWithTitleFont:(id)font titleTextColor:(id)color titleMaxNumberOfLines:(id)lines subtitleFont:(id)font subtitleTextColor:(id)color subtitleExtraTopPadding:(id)padding leadingInset:(id)inset trailingInset:(id)inset backgroundColor:(id)color;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TUCDetailsComponentStyleOverride_h */
