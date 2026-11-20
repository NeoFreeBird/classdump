//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVCaptionView_h
#define TAVCaptionView_h
@import Foundation;

#include "TAVCaptionModel.h"

@class NSArray, NSMutableArray, UILayoutGuide, UITextView, UIView;

@interface TAVCaptionView : UIView

@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) NSArray *captionTextViewConstraints;
@property (retain, nonatomic) NSMutableArray *captionViewConstraints;
@property (nonatomic) _Bool isTextAlignmentOverrideEnabled;
@property (nonatomic) long long textAlignmentOverride;
@property (retain, nonatomic) TAVCaptionModel *captionModel;
@property (retain, nonatomic) UILayoutGuide *verticalPositionLayoutGuide;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)applyCaptionModel:(id)model withVideoHeight:(double)height;
- (void)applyCaptionModel:(id)model withVideoHeight:(double)height minimumTextSize:(double)size maximumTextSize:(double)size;
- (void)setUp;
- (void)setTextViewTextAlignmentToAlignment:(long long)alignment;
- (double)paddingForVideoHeight:(double)height;
- (id)textViewConstraintsForVideoHeight:(double)height;

@end

#endif /* TAVCaptionView_h */
