//
#ifndef TIPSimpleImageFetchDelegate_h
#define TIPSimpleImageFetchDelegate_h
@import Foundation;

#include "TIPImageFetchDelegate-Protocol.h"

@class NSObject, NSString;

@interface TIPSimpleImageFetchDelegate : NSObject <TIPImageFetchDelegate>

@property (readonly, copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCompletion:(id /* block */)completion;
- (void)tip_imageFetchOperation:(id)operation didLoadFinalImage:(id)image;
- (void)tip_imageFetchOperation:(id)operation didFailToLoadFinalImage:(id)image;

@end

#endif /* TIPSimpleImageFetchDelegate_h */
