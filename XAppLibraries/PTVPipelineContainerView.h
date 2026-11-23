//
#ifndef PTVPipelineContainerView_h
#define PTVPipelineContainerView_h
@import Foundation;

@class UIView;

@interface PTVPipelineContainerView : UIView

@property (weak, nonatomic) UIView *currentPublishingView;

/* instance methods */
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;

@end

#endif /* PTVPipelineContainerView_h */
