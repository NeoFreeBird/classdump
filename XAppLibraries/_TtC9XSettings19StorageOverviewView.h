//
#ifndef _TtC9XSettings19StorageOverviewView_h
#define _TtC9XSettings19StorageOverviewView_h
@import Foundation;

@class UIView, XSettings.StorageOverviewView.Configuration, _$sSDySS XSettings.StorageOverviewView.LegendItem, _$sSDySSSo6UIViewCG, _$sSo6UIViewC, _$sSo7UILabelC;

@interface XSettings.StorageOverviewView : UIView { // (Swift)
    /* instance variables */
    __C.UILabel summaryLabel;
    __C.UIView barView;
    __C.UIView remainderView;
    [Swift.String : __C.UIView] segmentViews;
    Swift.Dictionary empty-list Swift.String XSettings.StorageOverviewView.LegendItem legendItems;
    XSettings.StorageOverviewView.Configuration configuration;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC9XSettings19StorageOverviewView_h */
