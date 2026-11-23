//
#ifndef T1GetVerifiedSheetPresenter_h
#define T1GetVerifiedSheetPresenter_h
@import Foundation;

@class NSObject;

@interface T1GetVerifiedSheetPresenter : NSObject // (Swift)

/* class methods */
+ (void)presentFromViewController:(id)controller account:(id)account scribePage:(id)page title:(id)title message:(id)message cancelButtonTitle:(id)title shouldShowVerifiedIcon:(_Bool)icon subscriptionPresentationSource:(long long)source;

/* instance methods */
- (id)init;

@end

#endif /* T1GetVerifiedSheetPresenter_h */
