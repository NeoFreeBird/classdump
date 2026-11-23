//
#ifndef _TtC14T1TwitterSwift20URTTimelineTrendCell_h
#define _TtC14T1TwitterSwift20URTTimelineTrendCell_h
@import Foundation;

#include "T1AutoplayableContainer-Protocol.h"
#include "TAVAutoplayViewContainer-Protocol.h"
#include "TFNPreviewable-Protocol.h"
#include "TVPPlayerSessionSource-Protocol.h"

@class NSArray, NSString, T1TwitterSwift.TrendView, T1TwitterSwift.TrendViewModel ?, TFNTableViewCell, UIImage, UIView;

@interface T1TwitterSwift.URTTimelineTrendCell : TFNTableViewCell <T1AutoplayableContainer, TFNPreviewable, TAVAutoplayViewContainer> { // (Swift)
    /* instance variables */
    T1TwitterSwift.TrendViewModel ? viewModel;
    T1TwitterSwift.TrendView trendView;
}

@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, copy) NSString *accessibilityHint;
@property (nonatomic, copy) NSArray *accessibilityCustomActions;
@property (nonatomic, readonly) id <TVPPlayerSessionSource> playerSessionSource;
@property (nonatomic, readonly) UIView *playerContainerView;
@property (nonatomic, readonly) UIImage *playerPreviewImage;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (id)previewConfigurationForLocation:(struct CGPoint { double x0; double x1; })location;
- (id)autoplayable;

@end

#endif /* _TtC14T1TwitterSwift20URTTimelineTrendCell_h */
