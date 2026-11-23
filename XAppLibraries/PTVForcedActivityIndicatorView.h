//
#ifndef PTVForcedActivityIndicatorView_h
#define PTVForcedActivityIndicatorView_h
@import Foundation;

@class UIActivityIndicatorView;

@interface PTVForcedActivityIndicatorView : UIActivityIndicatorView

@property (nonatomic) _Bool shouldAnimateLoadingIndicator;

/* instance methods */
- (void)startAnimating;
- (void)stopAnimating;

@end

#endif /* PTVForcedActivityIndicatorView_h */
