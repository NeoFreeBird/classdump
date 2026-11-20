//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCDetailsAdaptable_Protocol_h
#define TUCDetailsAdaptable_Protocol_h
@import Foundation;

#include "TUCComponentModel-Protocol.h"

@class NSString;

@protocol TUCDetailsAdaptable <TUCComponentModel>

@required

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;

@optional

@end

#endif /* TUCDetailsAdaptable_Protocol_h */
