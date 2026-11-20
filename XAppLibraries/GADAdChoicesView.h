//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
