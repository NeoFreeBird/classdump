//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSAccountIdentifiable_Protocol_h
#define TFSAccountIdentifiable_Protocol_h
@import Foundation;

@class NSObject;

@protocol TFSAccountIdentifiable

@required

@property (nonatomic, readonly) NSObject *identifier;

@optional

@end

#endif /* TFSAccountIdentifiable_Protocol_h */
