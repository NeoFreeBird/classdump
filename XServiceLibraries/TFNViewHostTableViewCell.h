//
#ifndef TFNViewHostTableViewCell_h
#define TFNViewHostTableViewCell_h
@import Foundation;

#include "TFNTableViewCell.h"

@class UIView;
@protocol TFNViewHostTableViewCellDelegate;

@interface TFNViewHostTableViewCell : TFNTableViewCell

@property (retain, nonatomic) UIView *hostedView;
@property (weak, nonatomic) id <TFNViewHostTableViewCellDelegate> delegate;

/* instance methods */
- (void)setBackgroundColor:(id)color;
- (void)prepareForReuse;

@end

#endif /* TFNViewHostTableViewCell_h */
