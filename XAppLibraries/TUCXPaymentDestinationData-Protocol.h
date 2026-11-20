//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCXPaymentDestinationData_Protocol_h
#define TUCXPaymentDestinationData_Protocol_h
@import Foundation;

@class NSString;

@protocol TUCXPaymentDestinationData

@required

@property (nonatomic, readonly) NSString *variantID;

@optional

@end

#endif /* TUCXPaymentDestinationData_Protocol_h */
