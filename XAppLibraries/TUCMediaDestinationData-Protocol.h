//
#ifndef TUCMediaDestinationData_Protocol_h
#define TUCMediaDestinationData_Protocol_h
@import Foundation;

@class TFSTwitterEntityMedia;

@protocol TUCMediaDestinationData

@required

@property (nonatomic, readonly) TFSTwitterEntityMedia *mediaEntity;

@optional

@end

#endif /* TUCMediaDestinationData_Protocol_h */
