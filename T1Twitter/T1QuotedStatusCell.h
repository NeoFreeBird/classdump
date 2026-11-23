//
#ifndef T1QuotedStatusCell_h
#define T1QuotedStatusCell_h
@import Foundation;

#include "T1AutoplayableContainer-Protocol.h"
#include "T1QuotedStandardStatusView.h"
#include "TAVAutoplayViewContainer-Protocol.h"
#include "TVPPlayerSessionSource-Protocol.h"

@class NSString, TFNTableViewCell, UIImage, UIView;

@interface T1QuotedStatusCell : TFNTableViewCell <TAVAutoplayViewContainer, T1AutoplayableContainer>

@property (retain, nonatomic) T1QuotedStandardStatusView *quotedStatusView;
@property (nonatomic) unsigned long long quotedStatusViewDisplayType;
@property (readonly, nonatomic) id <TVPPlayerSessionSource> playerSessionSource;
@property (readonly, nonatomic) UIView *playerContainerView;
@property (readonly, nonatomic) UIImage *playerPreviewImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (double)heightForStatus:(id)status account:(id)account width:(double)width layoutMetrics:(id)metrics withOptions:(unsigned long long)options;
+ (unsigned long long)quotedStandardStatusViewDisplayType;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)layoutMetricsDidChange:(id)change to:(id)to;
- (void)_t1_setupQuotedStatusView;
- (double)_t1_maxWidthForQuotedStatusViewWithLayoutMetrics:(id)metrics;
- (id)autoplayable;

@end

#endif /* T1QuotedStatusCell_h */
