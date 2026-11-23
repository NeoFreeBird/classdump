//
#ifndef MKAnnotation_Protocol_h
#define MKAnnotation_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@protocol MKAnnotation <NSObject>

@required

@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x0; double x1; } coordinate;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subtitle;

@optional

@end

#endif /* MKAnnotation_Protocol_h */
