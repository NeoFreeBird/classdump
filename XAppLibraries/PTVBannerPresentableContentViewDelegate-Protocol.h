//
#ifndef PTVBannerPresentableContentViewDelegate_Protocol_h
#define PTVBannerPresentableContentViewDelegate_Protocol_h
@import Foundation;

@protocol PTVBannerPresentableContentViewDelegate

@required

/* required instance methods */
- (void)contentViewDidRequestDismiss:(id)dismiss;

@optional

@end

#endif /* PTVBannerPresentableContentViewDelegate_Protocol_h */
