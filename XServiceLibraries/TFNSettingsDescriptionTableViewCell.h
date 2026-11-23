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
