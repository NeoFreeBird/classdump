//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
