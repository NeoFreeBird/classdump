//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TASSpacesDependencies_Protocol_h
#define TASSpacesDependencies_Protocol_h
@import Foundation;

#include "TASSpacesNavigatable-Protocol.h"
#include "TASSpacesSharer-Protocol.h"

@protocol TASSpacesDependencies

@required

@property (nonatomic, readonly) id <TASSpacesNavigatable> navigation;
@property (nonatomic, readonly) id <TASSpacesSharer> sharer;

@optional

@end

#endif /* TASSpacesDependencies_Protocol_h */
