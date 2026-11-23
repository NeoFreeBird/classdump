//
#ifndef _TtC14T1TwitterSwift26SurveyCardViewEventHandler_h
#define _TtC14T1TwitterSwift26SurveyCardViewEventHandler_h
@import Foundation;

#include "TUICardViewEventHandler-Protocol.h"

@class TUICardViewBaseEventHandler;

@interface T1TwitterSwift.SurveyCardViewEventHandler : TUICardViewBaseEventHandler <TUICardViewEventHandler> // (Swift)

/* instance methods */
- (id)handleViewEvent:(id)event context:(id)context;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift26SurveyCardViewEventHandler_h */
