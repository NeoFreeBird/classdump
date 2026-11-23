//
#ifndef TFNEmbeddedViewControllerCell_h
#define TFNEmbeddedViewControllerCell_h
@import Foundation;

#include "TFNTableViewCell.h"

@class UIViewController;

@interface TFNEmbeddedViewControllerCell : TFNTableViewCell

@property (weak, nonatomic) UIViewController *parentForEmbeddedController;
@property (retain, nonatomic) UIViewController *embeddedController;

/* instance methods */
- (void)cleanup;
- (void)layoutSubviews;

@end

#endif /* TFNEmbeddedViewControllerCell_h */
