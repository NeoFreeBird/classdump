//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterScribeSystemClientProvider_Protocol_h
#define TFSTwitterScribeSystemClientProvider_Protocol_h
@import Foundation;

@class NSString;

@protocol TFSTwitterScribeSystemClientProvider

@required

@property (nonatomic, readonly) NSString *scribeClientName;

@optional

@end

#endif /* TFSTwitterScribeSystemClientProvider_Protocol_h */
