//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNSettingsDescriptionTableViewCell_h
#define TFNSettingsDescriptionTableViewCell_h
@import Foundation;

#include "TFNSettingsDescriptionContainerView.h"
#include "TFNTableViewCell.h"

@interface TFNSettingsDescriptionTableViewCell : TFNTableViewCell

@property (retain, nonatomic) TFNSettingsDescriptionContainerView *containerView;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;

@end

#endif /* TFNSettingsDescriptionTableViewCell_h */
