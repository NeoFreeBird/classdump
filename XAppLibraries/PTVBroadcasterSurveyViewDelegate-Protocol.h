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
