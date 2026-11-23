//
#ifndef TFNBadgesImageView_h
#define TFNBadgesImageView_h
@import Foundation;

#include "TFNBadgesImageViewModel.h"
#include "TIPImagePipeline.h"

@class NSArray, UIImageView;

@interface TFNBadgesImageView : UIImageView { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 imageGenerator;
    B24@0:8@"NSString"16 token;
}

@property (nonatomic, retain) TIPImagePipeline *imagePipeline;
@property (nonatomic, retain) TFNBadgesImageViewModel *viewModel;
@property (nonatomic, copy) NSArray *badges;

/* instance methods */
- (id)initWithImage:(id)image;
- (id)initWithImage:(id)image highlightedImage:(id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* TFNBadgesImageView_h */
