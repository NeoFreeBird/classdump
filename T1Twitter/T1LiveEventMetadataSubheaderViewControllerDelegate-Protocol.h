//
#ifndef T1LiveEventMetadataSubheaderViewControllerDelegate_Protocol_h
#define T1LiveEventMetadataSubheaderViewControllerDelegate_Protocol_h
@import Foundation;

@protocol T1LiveEventMetadataSubheaderViewControllerDelegate

@required

/* required instance methods */
- (void)liveEventMetadataSubheaderViewControllerDidTapAuthorAttribution:(id)attribution authorUser:(id)user;
- (void)liveEventMetadataSubheaderViewController:(id)controller didTapDescriptionActiveRange:(id)range;
- (void)liveEventMetadataSubheaderViewController:(id)controller didTapProductWithURL:(id)url scribeParameters:(id)parameters;
- (void)liveEventMetadataSubheaderControllerDidTapRemindMeButton:(id)button;

@optional

@end

#endif /* T1LiveEventMetadataSubheaderViewControllerDelegate_Protocol_h */
