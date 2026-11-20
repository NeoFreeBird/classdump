//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterLegacyScribeIntegration_Protocol_h
#define TFSTwitterLegacyScribeIntegration_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSTwitterScribeWriter;

@protocol TFSTwitterLegacyScribeIntegration <NSObject>

@required

@property (nonatomic, readonly) id <TFSTwitterScribeWriter> scribeWriter;
@property (nonatomic, readonly) id /* block */ configurationProvider;
@property (nonatomic, readonly) id /* block */ optionsProvider;
@property (nonatomic, readonly) id /* block */ isAppBackgroundedTest;

@optional

@end

#endif /* TFSTwitterLegacyScribeIntegration_Protocol_h */
