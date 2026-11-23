//
#ifndef T1SpacesDependencies_h
#define T1SpacesDependencies_h
@import Foundation;

#include "TASSpacesDependencies-Protocol.h"
#include "TASSpacesNavigatable-Protocol.h"
#include "TASSpacesSharer-Protocol.h"

@class NSObject;

@interface T1SpacesDependencies : NSObject <TASSpacesDependencies>

@property (retain, nonatomic) id <TASSpacesNavigatable> navigation;
@property (retain, nonatomic) id <TASSpacesSharer> sharer;

/* instance methods */
- (id)initWithContext:(id)context;
- (id)init;

@end

#endif /* T1SpacesDependencies_h */
