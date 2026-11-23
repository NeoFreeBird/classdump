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
