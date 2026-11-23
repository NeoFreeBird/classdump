//
#ifndef TBCPeriscopeLifecycleAPIStartWatchingResult_h
#define TBCPeriscopeLifecycleAPIStartWatchingResult_h
@import Foundation;

#include "TBCPeriscopeLifecycleAPIResult.h"

@class NSString;

@interface TBCPeriscopeLifecycleAPIStartWatchingResult : TBCPeriscopeLifecycleAPIResult

@property (readonly, nonatomic) NSString *session;

@end

#endif /* TBCPeriscopeLifecycleAPIStartWatchingResult_h */
