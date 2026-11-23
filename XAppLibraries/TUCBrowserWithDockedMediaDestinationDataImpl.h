//
#ifndef TUCBrowserWithDockedMediaDestinationDataImpl_h
#define TUCBrowserWithDockedMediaDestinationDataImpl_h
@import Foundation;

#include "TUCBrowserDestinationDataImpl.h"
#include "TUCBrowserWithDockedMediaDestinationData-Protocol.h"

@class TFSTwitterEntityMedia;

@interface TUCBrowserWithDockedMediaDestinationDataImpl : TUCBrowserDestinationDataImpl <TUCBrowserWithDockedMediaDestinationData> // (Swift)

@property (nonatomic, readonly) TFSTwitterEntityMedia *mediaEntity;

/* instance methods */
- (id)initWithVanityURLString:(id)urlstring url:(id)url mediaEntity:(id)entity;
- (id)initWithVanityURLString:(id)urlstring url:(id)url isBrowserFallbackEnabled:(_Bool)enabled isUniversalLinkAllowed:(_Bool)allowed;

@end

#endif /* TUCBrowserWithDockedMediaDestinationDataImpl_h */
