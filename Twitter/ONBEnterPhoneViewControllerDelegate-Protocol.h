//
#ifndef ONBEnterPhoneViewControllerDelegate_Protocol_h
#define ONBEnterPhoneViewControllerDelegate_Protocol_h
@import Foundation;

#include "OCFNavigationLinkHandler-Protocol.h"

@protocol ONBEnterPhoneViewControllerDelegate <OCFNavigationLinkHandler>

@required

/* required instance methods */
- (void)enterPhoneViewControllerDidTapSkip:(id)skip;
- (void)enterPhoneViewController:(id)controller didTapNextWithPhoneNumber:(id)number countryCode:(id)code settings:(id)settings discoverabilitySettingsValue:(_Bool)value;
- (id)enterPhoneViewController:(id)controller expandedRichText:(id)text;

@optional

@end

#endif /* ONBEnterPhoneViewControllerDelegate_Protocol_h */
