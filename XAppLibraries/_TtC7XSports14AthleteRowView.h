//
#ifndef _TtC7XSports14AthleteRowView_h
#define _TtC7XSports14AthleteRowView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class XSports.AthleteRowView.Content ?, XSports.SportsImageLoader ?, _$sSo11UIImageViewC, _$sSo16TIPImagePipelineCSg, _$sSo7UILabelC;

@interface XSports.AthleteRowView : XSports.MeasurableView { // (Swift)
    /* instance variables */
    __C.TIPImagePipeline? imagePipeline;
    __C.UILabel slotLabel;
    __C.UIImageView headshotView;
    __C.UILabel titleLabel;
    __C.UILabel subtitleLabel;
    __C.UILabel trailingLabel;
    __C.UIImageView trailingImageView;
    XSports.SportsImageLoader ? $__lazy_storage_$_headshotLoader;
    XSports.SportsImageLoader ? $__lazy_storage_$_trailingImageLoader;
    XSports.AthleteRowView.Content ? content;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)traitCollectionDidChange:(id)change;

@end

#endif /* _TtC7XSports14AthleteRowView_h */
