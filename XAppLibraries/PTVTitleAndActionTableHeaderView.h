//
#ifndef PTVTitleAndActionTableHeaderView_h
#define PTVTitleAndActionTableHeaderView_h
@import Foundation;

#include "PTVExtendedButton.h"
#include "PTVTableHeaderView.h"

@class NSString;

@interface PTVTitleAndActionTableHeaderView : PTVTableHeaderView

@property (readonly, nonatomic) PTVExtendedButton *rightButton;
@property (retain, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) id /* block */ targetBlock;

/* instance methods */
- (void)viewInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame title:(id)title buttonTitle:(id)title;
- (id)initWithWidth:(double)width title:(id)title buttonTitle:(id)title;
- (void)buttonPressed;

@end

#endif /* PTVTitleAndActionTableHeaderView_h */
