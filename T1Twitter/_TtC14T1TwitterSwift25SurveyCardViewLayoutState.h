//
#ifndef _TtC14T1TwitterSwift25SurveyCardViewLayoutState_h
#define _TtC14T1TwitterSwift25SurveyCardViewLayoutState_h
@import Foundation;

@class T1TwitterSwift.SurveyCardPage ?, T1TwitterSwift.SurveyCardPageLayoutableViewLayoutState ?, TUICardViewLayoutState, __C.CGRect;

@interface T1TwitterSwift.SurveyCardViewLayoutState : TUICardViewLayoutState { // (Swift)
    /* instance variables */
    __C.CGRect actionButtonFrame;
    __C.CGRect currentPageFrame;
    T1TwitterSwift.SurveyCardPage ? currentPage;
    T1TwitterSwift.SurveyCardPageLayoutableViewLayoutState ? currentPageLayout;
}

/* instance methods */
- (_Bool)isLayoutStateValidForCardContext:(id)context;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift25SurveyCardViewLayoutState_h */
