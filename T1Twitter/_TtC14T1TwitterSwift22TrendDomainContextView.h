//
#ifndef _TtC14T1TwitterSwift22TrendDomainContextView_h
#define _TtC14T1TwitterSwift22TrendDomainContextView_h
@import Foundation;

@class NSString, T1TwitterSwift.TrendDomainContextViewModel ?, UIView, _$sSo7UILabelC;

@interface T1TwitterSwift.TrendDomainContextView : UIView { // (Swift)
    /* instance variables */
    T1TwitterSwift.TrendDomainContextViewModel ? viewModel;
    __C.UILabel rankLabel;
    __C.UILabel separatorLabel;
    __C.UILabel domainContextLabel;
}

@property (nonatomic, copy) NSString *accessibilityLabel;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC14T1TwitterSwift22TrendDomainContextView_h */
