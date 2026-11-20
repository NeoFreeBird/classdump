//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBEnterEmailViewControllerDelegate_Protocol_h
#define ONBEnterEmailViewControllerDelegate_Protocol_h
@import Foundation;

#include "OCFNavigationLinkHandler-Protocol.h"

@protocol ONBEnterEmailViewControllerDelegate <OCFNavigationLinkHandler>

@required

/* required instance methods */
- (void)enterEmailViewControllerDidTapSkip:(id)skip;
- (void)enterEmailViewController:(id)controller didTapNextWithEmail:(id)email settings:(id)settings discoverabilitySettingsValue:(_Bool)value;
- (id)enterEmailViewController:(id)controller expandedRichText:(id)text;

@optional

@end

#endif /* ONBEnterEmailViewControllerDelegate_Protocol_h */
