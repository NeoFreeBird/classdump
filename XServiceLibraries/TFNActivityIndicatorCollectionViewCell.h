//
#ifndef TFNActivityIndicatorCollectionViewCell_h
#define TFNActivityIndicatorCollectionViewCell_h
@import Foundation;

#include "TFNActivityIndicatorView-Protocol.h"
#include "TFNCollectionViewCell.h"

@class NSString, UIActivityIndicatorView, UIColor;

@interface TFNActivityIndicatorCollectionViewCell : TFNCollectionViewCell <TFNActivityIndicatorView> {
    /* instance variables */
    UIActivityIndicatorView *_activityIndicator;
}

@property (retain, nonatomic) UIColor *activityIndicatorColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (double)height;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)prepareForReuse;

@end

#endif /* TFNActivityIndicatorCollectionViewCell_h */
