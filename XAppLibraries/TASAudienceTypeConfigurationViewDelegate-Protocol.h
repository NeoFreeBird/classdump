//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TASAudienceTypeConfigurationViewDelegate_Protocol_h
#define TASAudienceTypeConfigurationViewDelegate_Protocol_h
@import Foundation;

@protocol TASAudienceTypeConfigurationViewDelegate

@required

/* required instance methods */
- (void)audienceTypeConfigurationView:(id)view didTapAudienceButton:(id)button;

@optional

@end

#endif /* TASAudienceTypeConfigurationViewDelegate_Protocol_h */
