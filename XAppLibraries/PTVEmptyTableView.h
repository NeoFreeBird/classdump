//
#ifndef PTVEmptyTableView_h
#define PTVEmptyTableView_h
@import Foundation;

#include "PTVTableViewFullScreen-Protocol.h"

@class NSString, UIImageView, UILabel, UIView;

@interface PTVEmptyTableView : UIView <PTVTableViewFullScreen>

@property (readonly, nonatomic) UILabel *emptyLabel;
@property (readonly, nonatomic) UILabel *subtitleLabel;
@property (nonatomic) _Bool shouldCoverTableHeaderView;
@property (retain, nonatomic) UIImageView *emptyImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithText:(id)text imageHidden:(_Bool)hidden;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForFullViewScreenInTableView:(id)view;
- (void)setImageHidden:(_Bool)hidden;
- (void)setLabelText:(id)text;
- (void)setSubtitleText:(id)text;

@end

#endif /* PTVEmptyTableView_h */
