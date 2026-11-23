//
#ifndef TFNModuleTableHeaderView_h
#define TFNModuleTableHeaderView_h
@import Foundation;

#include "TFNModuleHeaderView.h"
#include "TFNTableViewHeaderFooterView.h"

@class CALayer;

@interface TFNModuleTableHeaderView : TFNTableViewHeaderFooterView

@property (retain, nonatomic) CALayer *topBorderLayer;
@property (retain, nonatomic) CALayer *bottomBorderLayer;
@property (nonatomic) double gapHeightAboveHeader;
@property (readonly, nonatomic) TFNModuleHeaderView *innerHeaderView;
@property (nonatomic) _Bool useAlternateBackgroundColor;

/* instance methods */
- (id)initWithReuseIdentifier:(id)identifier;
- (void)layoutSubviews;
- (void)setIsPinnedAtTopOfTable:(_Bool)table;
- (void)willDisplayInDataViewController:(id)controller forSection:(long long)section;
- (id)_tfn_makeNewBorderLayer;

@end

#endif /* TFNModuleTableHeaderView_h */
