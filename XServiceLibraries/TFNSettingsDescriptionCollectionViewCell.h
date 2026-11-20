//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNSettingsDescriptionCollectionViewCell_h
#define TFNSettingsDescriptionCollectionViewCell_h
@import Foundation;

#include "TFNCollectionViewCell.h"
#include "TFNSettingsDescriptionContainerView.h"

@interface TFNSettingsDescriptionCollectionViewCell : TFNCollectionViewCell

@property (retain, nonatomic) TFNSettingsDescriptionContainerView *containerView;

/* class methods */
+ (struct CGSize { double x0; double x1; })sizeThatFitsItem:(id)item layoutMetrics:(id)metrics;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)accessibilityElements;

@end

#endif /* TFNSettingsDescriptionCollectionViewCell_h */
