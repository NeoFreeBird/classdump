//
#ifndef TSFExclusiveSpaceDisclaimerViewDelegate_Protocol_h
#define TSFExclusiveSpaceDisclaimerViewDelegate_Protocol_h
@import Foundation;

@protocol TSFExclusiveSpaceDisclaimerViewDelegate

@required

/* required instance methods */
- (void)exclusiveSpaceDisclaimerView:(id)view didTapButtonWithProposedModal:(id)modal;
- (void)exclusiveSpaceDisclaimerView:(id)view didTapLearnMoreWithPageURL:(id)url;

@optional

@end

#endif /* TSFExclusiveSpaceDisclaimerViewDelegate_Protocol_h */
