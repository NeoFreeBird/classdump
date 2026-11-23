//
#ifndef TAVTimeProgressControlBarItem_h
#define TAVTimeProgressControlBarItem_h
@import Foundation;

#include "TAVControlBarItem.h"

@class UILabel, UIStackView;

@interface TAVTimeProgressControlBarItem : TAVControlBarItem

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) UILabel *currentTimeLabel;

/* class methods */
+ (id)private_timeLabel;
+ (id)private_durationStringWithCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })cmtime;

/* instance methods */
- (id)initWithIdentifier:(id)identifier;
- (id)view;
- (void)player:(id)player didUpdatePlaybackState:(id)state;

@end

#endif /* TAVTimeProgressControlBarItem_h */
