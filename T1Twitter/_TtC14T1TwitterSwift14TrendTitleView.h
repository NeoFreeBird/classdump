//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift14TrendTitleView_h
#define _TtC14T1TwitterSwift14TrendTitleView_h
@import Foundation;

@class T1TwitterSwift.TrendTitleViewModel ?, UIView, _$sSo7UILabelC;

@interface T1TwitterSwift.TrendTitleView : UIView { // (Swift)
    /* instance variables */
    __C.UILabel titleLabel;
    T1TwitterSwift.TrendTitleViewModel ? viewModel;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)dealloc;
- (id)initWithCoder:(id)coder;
- (void)updateTitle;
- (void)hashflagImageDidDownload:(id)download;

@end

#endif /* _TtC14T1TwitterSwift14TrendTitleView_h */
