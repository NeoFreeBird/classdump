//
#ifndef _TtC15TwitterComposer31ComposerLinkPreviewPresentation_h
#define _TtC15TwitterComposer31ComposerLinkPreviewPresentation_h
@import Foundation;

@class NSObject, Swift.Bool, TwitterComposer.ComposerPreviewRenderer ?, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSo6UIViewCSg;

@interface TwitterComposer.ComposerLinkPreviewPresentation : NSObject { // (Swift)
    /* instance variables */
    TwitterComposer.ComposerPreviewRenderer ? renderer;
}

@property (nonatomic, readonly) _Bool isCardVisible;
@property (nonatomic, readonly) UIView *view;
@property (nonatomic, readonly) double topSpacing;

/* instance methods */
- (double)heightForWidth:(double)width;
- (id)init;

@end

#endif /* _TtC15TwitterComposer31ComposerLinkPreviewPresentation_h */
