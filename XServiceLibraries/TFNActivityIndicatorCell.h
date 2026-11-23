//
#ifndef TFNActivityIndicatorCell_h
#define TFNActivityIndicatorCell_h
@import Foundation;

#include "TFNActivityIndicatorView-Protocol.h"
#include "TFNTableViewCell.h"

@class NSString, UIActivityIndicatorView, UIColor;

@interface TFNActivityIndicatorCell : TFNTableViewCell <TFNActivityIndicatorView> {
    /* instance variables */
    UIActivityIndicatorView *_activityIndicator;
}

@property (retain, nonatomic) UIColor *activityIndicatorColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)layoutSubviews;
- (void)prepareForReuse;

@end

#endif /* TFNActivityIndicatorCell_h */
