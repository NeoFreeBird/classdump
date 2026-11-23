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
