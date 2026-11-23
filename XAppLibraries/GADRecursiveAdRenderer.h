//
#ifndef GADRecursiveAdRenderer_h
#define GADRecursiveAdRenderer_h
@import Foundation;

#include "GADAdRendering-Protocol.h"
#include "GADAdSource.h"

@class NSObject, NSString;

@interface GADRecursiveAdRenderer : NSObject <GADAdRendering> {
    /* instance variables */
    GADAdSource *_adSource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)renderWithServerTransaction:(id)transaction adConfiguration:(id)configuration completionHandler:(id /* block */)handler;

@end

#endif /* GADRecursiveAdRenderer_h */
