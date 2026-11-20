//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCProfileDestinationData_Protocol_h
#define TUCProfileDestinationData_Protocol_h
@import Foundation;

@class NSNumber;

@protocol TUCProfileDestinationData

@required

@property (nonatomic, readonly) NSNumber *userID;

@optional

@end

#endif /* TUCProfileDestinationData_Protocol_h */
