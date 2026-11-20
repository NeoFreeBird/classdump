//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1SettingsConnectedSSOAccountCell_h
#define T1SettingsConnectedSSOAccountCell_h
@import Foundation;

#include "T1SettingsConnectedSSOAccountView.h"

@class TFNTableViewCell;

@interface T1SettingsConnectedSSOAccountCell : TFNTableViewCell

@property (retain, nonatomic) T1SettingsConnectedSSOAccountView *connectedSSOAccountView;

/* class methods */
+ (double)heightForCellWithMaxWidth:(double)width isConnected:(_Bool)connected;

/* instance methods */
- (id)initWithSSOAccountItem:(id)item;
- (void)layoutSubviews;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_t1_calculateEdgeInsets;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_t1_accountViewFrameFromBounds;

@end

#endif /* T1SettingsConnectedSSOAccountCell_h */
