//
#ifndef TASSpacesDependencies_Protocol_h
#define TASSpacesDependencies_Protocol_h
@import Foundation;

#include "TASSpacesNavigatable-Protocol.h"
#include "TASSpacesSharer-Protocol.h"

@protocol TASSpacesDependencies

@required

@property (readonly, nonatomic) id <TASSpacesNavigatable> navigation;
@property (readonly, nonatomic) id <TASSpacesSharer> sharer;

@optional

@end

#endif /* TASSpacesDependencies_Protocol_h */
