//
#ifndef T1PostAboutTrayPresenter_h
#define T1PostAboutTrayPresenter_h
@import Foundation;

@class NSObject;

@interface T1PostAboutTrayPresenter : NSObject // (Swift)

/* class methods */
+ (_Bool)presentIfEnabledWithMenuSheet:(id)sheet statusViewModel:(id)model account:(id)account fromController:(id)controller scribeContext:(id)context;

/* instance methods */
- (id)init;

@end

#endif /* T1PostAboutTrayPresenter_h */
