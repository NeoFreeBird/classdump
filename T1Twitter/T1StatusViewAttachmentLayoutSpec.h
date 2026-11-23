//
#ifndef T1StatusViewAttachmentLayoutSpec_h
#define T1StatusViewAttachmentLayoutSpec_h
@import Foundation;

@class NSObject;

@interface T1StatusViewAttachmentLayoutSpec : NSObject

/* class methods */
+ (double)photoVideoCornerRadiusForOptions:(unsigned long long)options;
+ (double)_t1_concentricQuotedMediaCornerRadiusForContentInset:(double)inset;
+ (double)photoVideoCornerRadiusForOptions:(unsigned long long)options insetMediaStyle:(_Bool)style contentInset:(double)inset;
+ (double)carouselItemCornerRadiusForOptions:(unsigned long long)options contentInset:(double)inset;
+ (_Bool)isQuoteTweetAspectFitVideoForViewModel:(id)model options:(unsigned long long)options attachmentType:(unsigned long long)type account:(id)account;
+ (_Bool)hasMultipleCarouselMediaForViewModel:(id)model;
+ (_Bool)_t1_isEligibleForQuoteTweetCarouselMediaViewModel:(id)model options:(unsigned long long)options attachmentType:(unsigned long long)type account:(id)account;
+ (_Bool)isQuoteTweetCarouselMediaForViewModel:(id)model options:(unsigned long long)options attachmentType:(unsigned long long)type account:(id)account;
+ (double)carouselHeightRatioForOptions:(unsigned long long)options anatomyFeatures:(id)features;
+ (double)carouselMaxHeightRatioForOptions:(unsigned long long)options anatomyFeatures:(id)features;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })carouselBodyBleedInsetsForOptions:(unsigned long long)options displayType:(unsigned long long)type layoutMetrics:(id)metrics;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })carouselBodyBleedInsetsForOptions:(unsigned long long)options layoutMetrics:(id)metrics;
+ (_Bool)carouselRunsThroughRowGuttersForOptions:(unsigned long long)options displayType:(unsigned long long)type;
+ (_Bool)isQuoteTweetMiniMediaForTallImageQuotedViewModel:(id)model account:(id)account;

@end

#endif /* T1StatusViewAttachmentLayoutSpec_h */
