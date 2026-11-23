//
#ifndef TCRPlacePickerTableViewCell_h
#define TCRPlacePickerTableViewCell_h
@import Foundation;

#include "TCRPlaceView.h"
#include "UIAccessibilityIdentification-Protocol.h"

@class NSString, TFNTableViewCell, UIImageView;

@interface TCRPlacePickerTableViewCell : TFNTableViewCell <UIAccessibilityIdentification>

@property (retain, nonatomic) UIImageView *selectedImageView;
@property (readonly, nonatomic) TCRPlaceView *placeView;
@property (nonatomic) _Bool currentlySelected;
@property (copy, nonatomic) NSString *accessibilityIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (double)heightForLayoutMetrics:(id)metrics;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (_Bool)isCurrentlySelected;

@end

#endif /* TCRPlacePickerTableViewCell_h */
