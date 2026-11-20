//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1GrokEditPhotoButtonViewContainer_h
#define T1GrokEditPhotoButtonViewContainer_h
@import Foundation;

@class NSString, UIView, _TtC4Grok19GrokPostDownloadCTA;

@interface T1GrokEditPhotoButtonViewContainer : UIView { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *displaySurface;
    NSNumber"16@0:8 *$__lazy_storage_$_defaultButtonView;
    NSNumber"16@0:8 *$__lazy_storage_$_borderedButton;
    NSNumber"16@0:8 *$__lazy_storage_$_labelView;
    NSNumber"16@0:8 *action;
    NSNumber"16@0:8 *currentVariant;
}

@property (nonatomic, retain) Grok.GrokPostDownloadCTA *downloadCTA;
@property (nonatomic, copy) NSString *scribeComponent;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* T1GrokEditPhotoButtonViewContainer_h */
