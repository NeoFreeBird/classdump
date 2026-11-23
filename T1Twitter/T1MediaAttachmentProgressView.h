//
#ifndef T1MediaAttachmentProgressView_h
#define T1MediaAttachmentProgressView_h
@import Foundation;

#include "T1MediaAttachmentProgressBarView.h"

@class UIActivityIndicatorView, UIImageView, UIView;

@interface T1MediaAttachmentProgressView : UIView {
    /* instance variables */
    _Bool _activityIndicatorViewHidden;
    _Bool _progressBarViewHidden;
    _Bool _offlineCloudImageHidden;
    _Bool _offlineCloudImageViewHidden;
    UIActivityIndicatorView *_activityIndicatorView;
    T1MediaAttachmentProgressBarView *_progressBarView;
    UIImageView *_offlineCloudImageView;
}

@property (nonatomic) unsigned long long style;
@property (nonatomic) _Bool shouldHideOfflineCloud;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) double progress;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)_updateStyle;
- (void)setState:(unsigned long long)state progress:(double)progress;
- (void)_updateViews;
- (void)_setActivityIndicatorHidden:(_Bool)hidden animated:(_Bool)animated;
- (void)_setProgressBarViewHidden:(_Bool)hidden animated:(_Bool)animated;
- (void)_setOfflineCloudImageHidden:(_Bool)hidden animated:(_Bool)animated;
- (void)_updateOfflineCloudImageViewHiddenAnimated:(_Bool)animated;
- (void)_setOfflineCloudImageViewHidden:(_Bool)hidden animated:(_Bool)animated;

@end

#endif /* T1MediaAttachmentProgressView_h */
