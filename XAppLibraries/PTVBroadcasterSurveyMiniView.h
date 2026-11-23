//
#ifndef PTVBroadcasterSurveyMiniView_h
#define PTVBroadcasterSurveyMiniView_h
@import Foundation;

#include "PTVStarSelectionView.h"

@class UILabel, UIView;

@interface PTVBroadcasterSurveyMiniView : UIView {
    /* instance variables */
    UILabel *_starLabel;
}

@property (readonly, nonatomic) PTVStarSelectionView *starPicker;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* PTVBroadcasterSurveyMiniView_h */
