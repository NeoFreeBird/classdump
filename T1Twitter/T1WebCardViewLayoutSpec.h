//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1WebCardViewLayoutSpec_h
#define T1WebCardViewLayoutSpec_h
@import Foundation;

@class NSObject;

@interface T1WebCardViewLayoutSpec : NSObject

/* class methods */
+ (double)infoTextTopPadding;
+ (double)titleTopPadding;
+ (double)imageRatioForModel:(id)model;
+ (id)borderColorForViewModel:(id)model;
+ (double)compactImageHeight;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })infoAndActionEdgeInsetsForViewModel:(id)model;
+ (id)webDestinationColorForViewModel:(id)model;
+ (unsigned long long)websiteLinesForViewModel:(id)model;
+ (id)webDestinationFont;
+ (unsigned long long)maxTitleLinesForViewModel:(id)model;
+ (id)titleFontForViewModel:(id)model;
+ (id)titleColorForViewModel:(id)model;
+ (unsigned long long)maxDescriptionLinesForViewModel:(id)model otherTextLines:(unsigned long long)lines;
+ (id)descriptionFont;
+ (id)descriptionColorForViewModel:(id)model;
+ (long long)ctaButtonSize;
+ (_Bool)isCompactLayoutForViewModel:(id)model;
+ (struct CGSize { double x0; double x1; })targetImageSizeForViewModel:(id)model cardWidth:(double)width imageRatio:(double)ratio;
+ (double)imageWidthForViewModel:(id)model layoutMetrics:(id)metrics;

@end

#endif /* T1WebCardViewLayoutSpec_h */
