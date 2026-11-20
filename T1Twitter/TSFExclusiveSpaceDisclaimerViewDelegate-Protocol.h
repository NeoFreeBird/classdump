//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
