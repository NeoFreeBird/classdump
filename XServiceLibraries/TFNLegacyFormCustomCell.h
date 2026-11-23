//
#ifndef TFNLegacyFormCustomCell_h
#define TFNLegacyFormCustomCell_h
@import Foundation;

#include "TFNLegacyFormBaseCell.h"
#include "TFNLegacyFormCustomItem.h"

@class UIImageView;

@interface TFNLegacyFormCustomCell : TFNLegacyFormBaseCell {
    /* instance variables */
    UIImageView *_disclosureView;
}

@property (readonly, nonatomic) TFNLegacyFormCustomItem *customItem;

/* class methods */
+ (id)cellForCollectionView:(id)view withItem:(id)item appearance:(id)appearance options:(id)options indexPath:(id)path;
+ (double)heightForCustomItem:(id)item withWidth:(double)width appearance:(id)appearance layoutMetrics:(id)metrics customizeAction:(id /* block */)action;
+ (void)private_configureCell:(id)cell withItem:(id)item forAppearance:(id)appearance;

/* instance methods */
- (id)disclosureView;
- (_Bool)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;

@end

#endif /* TFNLegacyFormCustomCell_h */
