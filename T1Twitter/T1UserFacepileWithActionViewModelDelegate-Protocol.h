//
#ifndef T1UserFacepileWithActionViewModelDelegate_Protocol_h
#define T1UserFacepileWithActionViewModelDelegate_Protocol_h
@import Foundation;

@protocol T1UserFacepileWithActionViewModelDelegate

@required

/* required instance methods */
- (void)userFacepileViewModel:(id)model didRequestModalPresentationOfViewController:(id)controller;
- (void)userFacepileViewModel:(id)model didRequestPushOfViewController:(id)controller;
- (void)userFacepileViewModelDidDismissAllUsers:(id)users;

@optional

/* optional instance methods */
- (void)userFacepileViewModel:(id)model didDismissUserID:(long long)id;

@end

#endif /* T1UserFacepileWithActionViewModelDelegate_Protocol_h */
