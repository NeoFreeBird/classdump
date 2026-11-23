//
#ifndef GADAdChoicesView_h
#define GADAdChoicesView_h
@import Foundation;

@class UIView;

@interface GADAdChoicesView : UIView

@property (retain, nonatomic) UIView *adChoicesContentView;

/* instance methods */
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;

@end

#endif /* GADAdChoicesView_h */
