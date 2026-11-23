//
#ifndef FIRCLSRecordHost_h
#define FIRCLSRecordHost_h
@import Foundation;

#include "FIRCLSRecordBase.h"

@class NSString;

@interface FIRCLSRecordHost : FIRCLSRecordBase

@property (copy, nonatomic) NSString *platform;

/* instance methods */
- (id)initWithDict:(id)dict;

@end

#endif /* FIRCLSRecordHost_h */
