//
#ifndef T1ProfessionalModuleObserver_Protocol_h
#define T1ProfessionalModuleObserver_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1ProfessionalModuleObserver <NSObject>

@required

/* required instance methods */
- (void)profileModulesDidChange;

@optional

@end

#endif /* T1ProfessionalModuleObserver_Protocol_h */
