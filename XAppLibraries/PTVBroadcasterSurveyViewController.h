//
#ifndef PTVBroadcasterSurveyViewController_h
#define PTVBroadcasterSurveyViewController_h
@import Foundation;

#include "PTVBroadcastController.h"
#include "PTVBroadcasterSurvey.h"
#include "PTVBroadcasterSurveyView.h"
#include "PTVBroadcasterSurveyViewDelegate-Protocol.h"

@class UIViewController;

@interface PTVBroadcasterSurveyViewController : UIViewController <PTVBroadcasterSurveyViewDelegate> {
    /* instance variables */
    PTVBroadcasterSurvey *_survey;
    PTVBroadcasterSurveyView *_surveyView;
    PTVBroadcastController *_broadcastController;
}

/* instance methods */
- (id)initWithSurvey:(id)survey broadcastController:(id)controller;
- (void)viewDidLoad;
- (void)surveyCompleted;
- (void)surveySkipped;
- (void)surveySubmitPressed;
- (void)surveyTappedSettingsLink;

@end

#endif /* PTVBroadcasterSurveyViewController_h */
