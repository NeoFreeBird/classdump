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
