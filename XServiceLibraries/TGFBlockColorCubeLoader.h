//
#ifndef TGFBlockColorCubeLoader_h
#define TGFBlockColorCubeLoader_h
@import Foundation;

#include "TGFColorCubeLoader-Protocol.h"

@class NSObject, NSString;

@interface TGFBlockColorCubeLoader : NSObject <TGFColorCubeLoader> {
    /* instance variables */
    id /* block */ _block;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithBlock:(id /* block */)block;
- (id)loadColorCubeDataWithIdentifier:(id)identifier;

@end

#endif /* TGFBlockColorCubeLoader_h */
