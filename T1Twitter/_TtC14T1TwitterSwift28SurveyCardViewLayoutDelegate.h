//
#ifndef _TtC14T1TwitterSwift28SurveyCardViewLayoutDelegate_h
#define _TtC14T1TwitterSwift28SurveyCardViewLayoutDelegate_h
@import Foundation;

@class TUICardViewLayoutDelegate;

@interface T1TwitterSwift.SurveyCardViewLayoutDelegate : TUICardViewLayoutDelegate // (Swift)

/* class methods */
+ (id)sharedLayoutDelegate;
+ (id)viewModelWithCardContext:(id)context;

/* instance methods */
- (id)layoutForViewModel:(id)model layoutMetrics:(id)metrics;
- (void)layoutSubviewsForCardView:(id)view withState:(id)state;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift28SurveyCardViewLayoutDelegate_h */
