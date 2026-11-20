//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TGFColorCubeLoader_Protocol_h
#define TGFColorCubeLoader_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TGFColorCubeLoader <NSObject>

@required

/* required instance methods */
- (id)loadColorCubeDataWithIdentifier:(id)identifier;

@optional

@end

#endif /* TGFColorCubeLoader_Protocol_h */
