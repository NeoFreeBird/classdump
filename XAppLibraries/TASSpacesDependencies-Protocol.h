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
