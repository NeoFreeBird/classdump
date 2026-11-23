//
#ifndef FIRAMeasurement_h
#define FIRAMeasurement_h
@import Foundation;

#include "APMMeasurement.h"

@interface FIRAMeasurement : APMMeasurement

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (void)userAttributeWithName:(id)name callback:(id /* block */)callback;

@end

#endif /* FIRAMeasurement_h */
