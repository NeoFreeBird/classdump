//
#ifndef _TtC14T1TwitterSwift18CondensedTweetView_h
#define _TtC14T1TwitterSwift18CondensedTweetView_h
@import Foundation;

#include "T1AutoplayableContainer-Protocol.h"
#include "TAVAutoplayViewContainer-Protocol.h"
#include "TVPPlayerSessionSource-Protocol.h"

@class TFNCollectionViewCell, UIImage, UIView, _$sSo26T1QuotedStandardStatusViewC;

@interface T1TwitterSwift.CondensedTweetView : TFNCollectionViewCell <TAVAutoplayViewContainer, T1AutoplayableContainer> { // (Swift)
    /* instance variables */
    __C.T1QuotedStandardStatusView statusView;
}

@property (nonatomic, readonly) id <TVPPlayerSessionSource> playerSessionSource;
@property (nonatomic, readonly) UIView *playerContainerView;
@property (nonatomic, readonly) UIImage *playerPreviewImage;

/* instance methods */
- (id)autoplayable;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)prepareForReuse;

@end

#endif /* _TtC14T1TwitterSwift18CondensedTweetView_h */
