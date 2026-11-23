//
#ifndef T1PeopleDiscoveryUserProfileCardViewDelegate_Protocol_h
#define T1PeopleDiscoveryUserProfileCardViewDelegate_Protocol_h
@import Foundation;

@protocol T1PeopleDiscoveryUserProfileCardViewDelegate

@required

/* required instance methods */
- (void)peopleDiscoveryUserProfileCardView:(id)view didSelectUserDataSource:(id)source context:(id)context;

@optional

/* optional instance methods */
- (void)peopleDiscoveryUserProfileCardView:(id)view didTapBioActiveRange:(id)range;

@end

#endif /* T1PeopleDiscoveryUserProfileCardViewDelegate_Protocol_h */
