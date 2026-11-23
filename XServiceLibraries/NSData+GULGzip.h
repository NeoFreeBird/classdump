//
#ifndef NSData_GULGzip_h
#define NSData_GULGzip_h
@import Foundation;

@interface NSData (GULGzip)

/* class methods */
+ (id)gul_dataByInflatingGzippedData:(id)data error:(id *)error;
+ (id)gul_dataByGzippingData:(id)data error:(id *)error;

@end

#endif /* NSData_GULGzip_h */
