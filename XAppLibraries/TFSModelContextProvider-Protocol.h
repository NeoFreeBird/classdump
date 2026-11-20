//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSModelContextProvider_Protocol_h
#define TFSModelContextProvider_Protocol_h
@import Foundation;

@class TFSModelContext;

@protocol TFSModelContextProvider

@required

@property (nonatomic, readonly) TFSModelContext *modelContext;

@optional

@end

#endif /* TFSModelContextProvider_Protocol_h */
