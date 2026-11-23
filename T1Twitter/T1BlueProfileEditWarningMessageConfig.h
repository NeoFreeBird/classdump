//
#ifndef T1BlueProfileEditWarningMessageConfig_h
#define T1BlueProfileEditWarningMessageConfig_h
@import Foundation;

#include "T1BlueProfileChangeCallout.h"
#include "T1BlueProfileChangeConfirmation.h"

@class NSObject;

@interface T1BlueProfileEditWarningMessageConfig : NSObject // (Swift)

@property (nonatomic, readonly) T1BlueProfileChangeCallout *callout;
@property (nonatomic, readonly) T1BlueProfileChangeConfirmation *confirmation;

/* instance methods */
- (id)init;

@end

#endif /* T1BlueProfileEditWarningMessageConfig_h */
