//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GrokBotReplyCTAButton_h
#define GrokBotReplyCTAButton_h
@import Foundation;

@class NSString, UIControl;

@interface GrokBotReplyCTAButton : UIControl { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 markModel;
    @40@0:8:16@24@32 $__lazy_storage_$_markView;
    @40@0:8:16@24@32 titleLabel;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic) _Bool highlighted;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* class methods */
+ (double)height;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)apply:(id)apply;
- (_Bool)isHighlighted;
- (void)layoutSubviews;

@end

#endif /* GrokBotReplyCTAButton_h */
