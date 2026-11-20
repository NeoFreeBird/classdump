//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCC4Grok25ToolResultChipsScrollViewP33_3F638ADB278801EB83F78142FA894BD18ChipView_h
#define _TtCC4Grok25ToolResultChipsScrollViewP33_3F638ADB278801EB83F78142FA894BD18ChipView_h
@import Foundation;

@class UIView;

@interface Grok.ToolResultChipsScrollView.(ChipView in _3F638ADB278801EB83F78142FA894BD1) : UIView { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 style;
    @40@0:8:16@24@32 isPlaceholder;
    @40@0:8:16@24@32 iconURL;
    @40@0:8:16@24@32 backgroundView;
    @40@0:8:16@24@32 iconImageView;
    @40@0:8:16@24@32 label;
    @40@0:8:16@24@32 onTap;
    @40@0:8:16@24@32 imageFetchOperation;
    @40@0:8:16@24@32 hasLoadedImage;
    @40@0:8:16@24@32 imagePipeline;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)layoutSubviews;
- (void)handleTap;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtCC4Grok25ToolResultChipsScrollViewP33_3F638ADB278801EB83F78142FA894BD18ChipView_h */
