//
#ifndef XGoLivePillView_h
#define XGoLivePillView_h
@import Foundation;

@class UIView;

@interface XGoLivePillView : UIView { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 liveBadge;
    @40@0:8:16@24@32 liveLabel;
    @40@0:8:16@24@32 countBadge;
    @40@0:8:16@24@32 countLabel;
    @40@0:8:16@24@32 stack;
}

@property (nonatomic) long long viewerCount;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* XGoLivePillView_h */
