//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef CLLocation_PTVCoordinateComparison_h
#define CLLocation_PTVCoordinateComparison_h
@import Foundation;

@interface CLLocation (PTVCoordinateComparison)

/* class methods */
+ (_Bool)ptv_CLLocationCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })coordinate EqualsCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })coordinate;
+ (_Bool)ptv_CLLocationCoordinate2DEqualsZero:(struct CLLocationCoordinate2D { double x0; double x1; })zero;
+ (struct CLLocationCoordinate2D { double x0; double x1; })ptv_CLLocationCoordinateZero;

@end

#endif /* CLLocation_PTVCoordinateComparison_h */
