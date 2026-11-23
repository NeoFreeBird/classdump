//
#ifndef MKAnnotation_Protocol_h
#define MKAnnotation_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@protocol MKAnnotation <NSObject>

@required

@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } coordinate;

@optional

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;

@end

#endif /* MKAnnotation_Protocol_h */
