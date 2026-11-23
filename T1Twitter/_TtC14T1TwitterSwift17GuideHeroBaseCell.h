//
#ifndef _TtC14T1TwitterSwift17GuideHeroBaseCell_h
#define _TtC14T1TwitterSwift17GuideHeroBaseCell_h
@import Foundation;

#include "TFNLayoutMetricsEnvironment-Protocol.h"

@class TFNTableViewCell, _$sSo11UIStackViewC, _$sSo16TFNDismissButtonC, _$sSo9TFNButtonC;

@interface T1TwitterSwift.GuideHeroBaseCell : TFNTableViewCell <TFNLayoutMetricsEnvironment> { // (Swift)
    /* instance variables */
    __C.TFNDismissButton caretButton;
    __C.TFNButton muteButton;
    __C.UIStackView topTrailingButtonContainerView;
}

/* instance methods */
- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;
- (void)layoutMetricsDidChange:(id)change to:(id)to;
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC14T1TwitterSwift17GuideHeroBaseCell_h */
