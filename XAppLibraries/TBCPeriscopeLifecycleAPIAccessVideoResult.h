//
#ifndef TBCPeriscopeLifecycleAPIAccessVideoResult_h
#define TBCPeriscopeLifecycleAPIAccessVideoResult_h
@import Foundation;

#include "TBCPeriscopeLifecycleAPIResult.h"

@class NSString;

@interface TBCPeriscopeLifecycleAPIAccessVideoResult : TBCPeriscopeLifecycleAPIResult

@property (readonly, nonatomic) NSString *lifecycleToken;

@end

#endif /* TBCPeriscopeLifecycleAPIAccessVideoResult_h */
