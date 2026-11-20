//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVBroadcasterSurveyViewDelegate_Protocol_h
#define PTVBroadcasterSurveyViewDelegate_Protocol_h
@import Foundation;

@protocol PTVBroadcasterSurveyViewDelegate

@required

/* required instance methods */
- (void)surveySkipped;
- (void)surveyCompleted;
- (void)surveySubmitPressed;
- (void)surveyTappedSettingsLink;

@optional

@end

#endif /* PTVBroadcasterSurveyViewDelegate_Protocol_h */
