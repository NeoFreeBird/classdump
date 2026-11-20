//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwiftP33_F259A2FC2D8160C8EEC8BDB9BF408FF822SurveySubmitAPICommand_h
#define _TtC14T1TwitterSwiftP33_F259A2FC2D8160C8EEC8BDB9BF408FF822SurveySubmitAPICommand_h
@import Foundation;

@class TFSTwitterAPICommand;

@interface T1TwitterSwift.(SurveySubmitAPICommand in _F259A2FC2D8160C8EEC8BDB9BF408FF8) : TFSTwitterAPICommand { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *surveyId;
    NSNumber"16@0:8 *surveyVersion;
    NSNumber"16@0:8 *surveyResponses;
}

/* instance methods */
- (id)request;
- (id)initWithAccountID:(id)id context:(id)context authContext:(id)context networkTransactionMetrics:(id)metrics source:(unsigned long long)source completionBlock:(id /* block */)block;

@end

#endif /* _TtC14T1TwitterSwiftP33_F259A2FC2D8160C8EEC8BDB9BF408FF822SurveySubmitAPICommand_h */
