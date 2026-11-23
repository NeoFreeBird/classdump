//
#ifndef T1VideoEmbedPreviewView_h
#define T1VideoEmbedPreviewView_h
@import Foundation;

@class UIView;

@interface T1VideoEmbedPreviewView : UIView { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *baseWidthRatio;
    NSNumber"16@0:8 *videoAspectRatio;
    NSNumber"16@0:8 *photoImageView;
}

@property (nonatomic) _Bool showsClipEntry;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } videoContainerFrame;

/* class methods */
+ (double)clipEntryHeight;

/* instance methods */
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* T1VideoEmbedPreviewView_h */
